#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 1000;
    }

    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    int temp;
    int a = 0;

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                a++;
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << a;
}
