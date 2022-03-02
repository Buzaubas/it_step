#include <iostream>
#include <cmath>

int geo(int first, int r, int n)
{
	if (n == 1)
	{
		return first;
	}
	else
	{
		first = first * r;
		return geo(first, r, n-1);
	}
}

int main()
{
	int sum{ 0 };
	std::cout << geo(2, 3, 4);

}
