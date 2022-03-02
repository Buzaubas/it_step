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

int geosum(int first, int r, int n, int sum = 0)
{
	sum += first;
	if (n == 1)
	{
		return sum;
	}
	else
	{
		first = first * r;
		return geosum(first, r, n - 1, sum);
	}
}

int main()
{
	std::cout << geo(2, 3, 4) << std::endl;
	std::cout << geosum(2, 3, 4) << std::endl;

}
