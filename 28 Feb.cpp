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

double sm(double a, double b) {
	double ans = a + b;
	return ans;

}

int sm(int a, int b) {
	int ans = a + b;
	return ans;
	
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

	int a{ 4.3 }, b{ 3.5 }, ans{ 0 };
	ans = sm(a, b);
	std::cout << ans << std::endl;








}
