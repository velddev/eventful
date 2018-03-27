#pragma once
#include <functional>
#include <vector>

namespace evf
{
	template <typename TOut, typename ... TArgs> struct delegate {
		TOut(*fn)(TArgs...);
	};

	template<typename TOut, typename ... TArgs>
	class Event
	{
	public:
		void operator()(TArgs ... arguments)
		{
			Invoke(arguments...);
		}

		void operator+=(TOut(*fn)(TArgs...))
		{
			delegate<TOut, TArgs...> newFn;
			newFn.fn = fn;

			fnList.push_back(newFn);
		}
		void operator+=(delegate<TOut, TArgs...> fn)
		{
			fnList.push_back(fn);
		}

		void Invoke(TArgs ... arguments)
		{
			for (auto del : fnList)
				del.fn(arguments...);
		}

	private:
		std::vector<delegate<TOut, TArgs...>> fnList;
	};
}