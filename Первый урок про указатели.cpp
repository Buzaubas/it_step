#include <iostream>
#include <Windows.h>

int main()
{
	srand(time(0));
	/*int x1{ 5 };
	int x2{ 8 };
	int* y1 = &x1;
	int* y2 = &x2;

	int sum = *y1 + *y2;

	std::cout << sum << std::endl;
	std::cout << &sum << std::endl;*/

	/*int a = 2, b = 5;
	int* p1 = &a, * p2 = &b;
	*p1 = 10;
	std::cout << *p1 - *p2;*/

	/*double a = 2.5, b = 5.2, res;
	double* p1 = &a, p2 = b;
	res = *p1 - p2;
	std::cout << res;*/

	//const int SIZE = 10;
	//int A[SIZE] = { 1, 2, 3, 4, 6, 6, 7, 8, 9, 10 };
	//int* p = A;
	//for (int i = 0; i < SIZE; i++) {
	//	std::cout << (*A)++<< " "; //прибавляет значение к массиву
	//	std::cout << *(A++) << " "; // не работает
	//	std::cout << *(A + i) << " "; //выводит массив
	//}

	//const int size = 5;
	//int random[size];
	//int* pa = random;
	//for (int i = -1; i < size; i++) {
	//	/*(*random)++;
	//	*random = rand() % 10;
	//	std::cout << (*pa)++ << std::endl;*/  // неправильно

	//	*(pa + i) = rand() % 10;
	//}
	//std::cout << std::endl;
	//for (int i = 0; i < size; i++) {
	//	std::cout << *(random + i) << std::endl;
	//}

	/*const int N{ 8 };
	int arr[N] = { 1, 1, -5, 1, 1, 1, 1, -4 };
	int* place = arr;
	for (int i = 0; i < N; i++) {
		if (*(place + i) % 2 != 0 && *(place + i) < 0) {
			std::cout << "Est takoe chislo" << std::endl;
			std::cout << i << std::endl;
		}
	}*/

	/*int a1{ 1 }, a2{ 2 }, a3{ 3 }, a4{ 4 }, a5{ 5 }, a6{ 6 }, a7{ 7 }, a8{ 8 }, a9{ 9 }, a10{ 10 }, a11{ 11 }, a12{ 12 }, a13{ 13 }, a14{ 14 }, a15{ 15 }, a16{ 16 }, a17{ 17 }, a18{ 18 };*/
	
	/*int a[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, -10, 12, 13, 14, 15, 16, 17 };
	int* probka = a;
	int min = a[0];
	for (int i = 0; i < 16; i++) {
		if (min > *(probka + i)) {
			min = *(probka + i);
		}
	}
	std::cout << min << std::endl;*/

	int a[20] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,26 };
	int b[10];
	int* shaitan1 = a;
	int* shaitan2 = b;
	int index{ 0 };
	for (int i = 0; i < 20; i = i + 2) {
		*(shaitan2 + index) = *(shaitan1 + i);
		index++;
	}
	/*for (int i = 0; i < 20; i++) {
		std::cout << *(shaitan1 + i) << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << *(shaitan2 + i) << std::endl;
	}*/
	int buffer{ 0 };
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10 - i; j++) {
			if (*(shaitan2 + j) > *(shaitan2+j+1) {
				buffer = *(shaitan2+j);
				*shaitan2 + j = *(shaitan2 + j + 1);
				*(shaitan2 + j + 1) = buffer;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		std::cout << *(shaitan2 + i) << std::endl;
	}




}

