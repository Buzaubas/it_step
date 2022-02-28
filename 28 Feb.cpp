#include<iostream>
#include<cmath>

double f(double x, double y){
	return sqrt(pow(x, 2) + pow(y, 2));
}

double q(double x1, double y1, double x2, double y2){
	int x = x2 - x1;
	int y = y2 - y1;
	return sqrt(pow(x, 2) + pow(y, 2));
}

int w(int m2, int m1, int m0) {
	int answer = 0;
	answer += m2 * 100;
	answer += m1 * 10;
	answer += m0;
	return answer;
}

int w1(int m2 = 5, int m1 = 6, int m0 = 7) {
	int answer = 0;
	answer += m2 * 100;
	answer += m1 * 10;
	answer += m0;
	return answer;
}

int p(int a, int b){
	return 4321;
}
int p(int a) {
	return 1234;
}

//int sm(int a, int b)
//
//	{
//
//		float result;
//
//		result = (int)a + (int)b;
//
//		return result;
//
//	}
//
//double sm(double a, double b)
//
//	{
//
//		double result;
//
//		result = (double)a * (double)b;
//
//		return result;
//
//	}

double tri(double& a, double& b, double c, double q) {
	double angle = cos(q);
	a = angle * c;
	b = sqrt(pow(c, 2) - pow(a, 2));
	return 1;
}

int swap(int& a, int& b) {
	int mid = a;
	a = b;
	b = mid;
	return 1;
}

int swap1(int& a, int& b, int& c) {
	int mid1 = a;
	int mid2 = b;
	a = c;
	b = mid1;
	c = mid2;
	return 1;
}

int last(int& a, int& b, int x, int y) {
	a = x * y;
	if (y == 0) {
		return 0;
	}
	else {
		b = x / y;
		std::cout << "Result = " << a << std::endl;
		std::cout << "Result = " << b << std::endl;
		return 1;
	}
}



int main() {
	/*double x{ 3 }, y{ 4 }, z{ 0 };
	z = f(x, y);
	std::cout << z << std::endl;*/

	/*double x1{ 2 }, y1{ 4 }, x2{ 8 }, y2{ 9 }, ans;
	ans = q(x1, y1, x2, y2);
	std::cout << ans << std::endl;*/

	/*int a{ 4 }, b{ 3 }, c{ 8 }, ans{ 0 };
	ans = w(a, b, c);
	std::cout << ans << std::endl;*/

	/*int a{ 4 }, b{ 3 }, c{ 8 }, ans{ 0 };
	ans = w1();
	std::cout << ans << std::endl;*/

	/*int a{ 4 }, b{ 3 }, ans{0};
	ans = p(a);
	std::cout << ans << std::endl;*/


	/*int u = sm(3, 4);
	double v = sm(20.5, 10.5);

	std::cout << "Result = " << u << std::endl;

	std::cout << "Result = " << v << std::endl;*/

	/*double c{ 13 }, q{ 30 }, a{ 0 }, b{ 0 };
	tri(a, b, c, q);
	std::cout << a << " " << b << std::endl;*/

	/*int a{ 4 }, b{ 9 };
	swap(a, b);
	std::cout << "Result = " << a << std::endl;
	std::cout << "Result = " << b << std::endl;*/

	/*int a{ 4 }, b{ 9 }, c{1};
	swap1(a, b, c);
	std::cout << "Result = " << a << std::endl;
	std::cout << "Result = " << b << std::endl;
	std::cout << "Result = " << c << std::endl;*/

	int a{ 4 }, b{ 9 }, x{ 9 }, y{3};
	std::cout<<last(a, b, x, y);
	





}
