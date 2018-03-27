#include <eventful\event.h>

int main()
{
	evf::Event<int, int, int> OnAdd;

	OnAdd += [](int x, int y) {
		return x + y;
	};

	OnAdd.Invoke(1, 1);
	
	return 0;
}