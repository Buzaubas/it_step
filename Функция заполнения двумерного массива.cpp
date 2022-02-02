#include <iostream>

int massive(int (*a)[5]) {
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = 30 + rand() % (60 - 30 + 1);
        }
    }
    return 0;
}

int maximum(int(*a)[5]) {
    int max = a[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}

int minimum(int(*a)[5]) {
    int min = a[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
}

int main()
{
    
    int c[5][5];
    massive(c);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << c[i][j]<< " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Maximum: " << maximum(c) << std::endl;
    std::cout << "Minimum: " << minimum(c) << std::endl;


}
