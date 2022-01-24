#include <iostream>
#include <string>

int findMin(int* arr, int size) {
    int min = arr[0];
    int indexMin = 0;
    for (int i = 0; i < size; i++) {
        if (min < arr[i]) {
            min = arr[i];
            indexMin = i;
        }
    }

    return indexMin;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    const int SIZE = 10;
    int arr[SIZE];
    int newArray[SIZE];
    int minEl;
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 1000;
    }
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < SIZE; i++) {
        minEl = findMin(arr, SIZE);
        newArray[i] = arr[minEl];
        arr[minEl] = INT_MIN;
        for (int i = 0; i < SIZE; i++) {
            std::cout << newArray[i] << " ";
        }
        std::cout << std::endl;
    }
    
}
