#include <iostream>
#include <string>

int main()
{
    int a[99];
    int first = 2;
    int second = 2;
    for (int i = 0; i < 98; i++) {
        a[i] = first;
        first++;
    }
    /*for (int i = 0; i < 98; i++) {
        std::cout << a[i] << std::endl;
    }*/
    int b[8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 98; j++) {
            if (a[i] % second == 0) {
                b[i] += 1;
            }
        }
        second++;
    }
    for (int i = 0; i < 8; i++) {
        std::cout << b[i];
    }
    

}
