#include <eventful\event.h>
#include <iostream>

int main()
{
	evf::Event<int, int, int> OnAdd;

	OnAdd += [](int x, int y) {
		std::cout << "called OnAdd#1\n";
		return x + y;
	};

	OnAdd += [](int x, int y) {
		std::cout << "called OnAdd#2\n";
		return x + y;
	};

	OnAdd(1, 1);
	
	system("PAUSE");

	return 0;
}