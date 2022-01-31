/*В одномерном массиве найти сумму элементов, находящихся между
минимальным и максимальным элементами. Сами минимальный и
максимальный элементы в сумму не включать.*/

#include <iostream>
#include <string>

int main()
{
    setlocale(0, "rus");
    std::cout << "Введите числа в массив:" << std::endl;
    int a[14];
    for (int i = 0; i < 14; i++) {
        std::cout << "->";
        std::cin >> a[i];
    }
    int min = a[0];
    int minid = 0;
    int max = a[0];
    int maxid = 0;

    for (int i = 0; i < 14; i++) {
        if (min < a[i]) {
            min = a[i];
            minid = i;
        }
        if (max > a[i]) {
            max = a[i];
            maxid = i;
        }
    }

    int sum = 0;
    if (minid < maxid) {
        minid++;
            while (minid < maxid) {
                sum += a[minid];
                minid++;
        }
    }
    else {
        maxid++;
        while (maxid < minid) {
            sum += a[maxid];
            maxid++;
        }
    }
    std::cout << "Сумма:"<< sum;

    

}
