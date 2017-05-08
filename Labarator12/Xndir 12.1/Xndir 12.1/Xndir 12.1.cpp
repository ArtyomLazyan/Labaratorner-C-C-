#include <iostream>

#define MAX1(a, b) ((a) > (b) ? a : b)

int MAX2(int, int);
inline int MAX3(int, int);

int main()
{
	std::cout << MAX1(8, 5) << std::endl;
	std::cout << MAX2(5, 7) << std::endl;
	std::cout << MAX3(4, 2) << std::endl;

	return 0;
}

int MAX2(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

inline int MAX3(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}