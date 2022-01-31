#include <iostream>
#include <string>
#include <ctype.h>

float farenheit(int a) {
    float b;
    b = (a - 32) * 5/9;
    return b;
}

float inch(int a) {
    float b;
    b = 25.4 * a;
    return b;
}
float miles(int a) {
    float b;
    b = 1.60094 * a;
    return b;
}

float barrel(int a) {
    float b;
    b = 136.4 * a;
    return b;
}

float ton(int a) {
    float b;
    b = a/136.4;
    return b;
}

int volume_cyl(int a, int b) {
    int volume;
    volume = 3.14 * a * b;
    return volume;
}

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}

std::string equation(int a, int b) {
    std::string res;
    if (a > b) res = ">";
    else if (a < b) res = "<";
    else if (a == b) res = "=";
    return res;
}

int factorial(int a) {
    int total;
    if (a == 0) return 1;
    total = a * factorial(a - 1);
    return total;

}

int glasn(std::string a) {
    if (a == "a") return 1;
    else if (a == "e") return 1;
    else if (a == "i") return 1;
    else if (a == "o") return 1;
    else if (a == "u") return 1;
    else if (a == "y") return 1;
    else return 0;
}
char upcase(char a) {
    /*return  char(a - 32);*/
    return toupper(a);
}


int main()
{
    setlocale(0, "rus");

   /std::cout << "Фаренгейты: ";
    float a1;
    std::cin >> a1;
    std::cout << farenheit(a1) << " градусов Цельсия" << std::endl;

    std::cout << "Введите длину в дюймах: ";
    float a;
    std::cin >> a;
    std::cout<< inch(a)<<" миллиметров"<<std::endl;

    std::cout << "Введите длину в милях: ";
    float b;
    std::cin >> b;
    std::cout << miles(b)<<" километров"<<std::endl;

    std::cout << "Введите баррели: ";
    float c;
    std::cin >> c;
    std::cout << "Цена: ";
    float cost;
    std::cin >> cost;
    std::cout << cost * barrel(c) << " тг" << std::endl;

    std::cout << "Введите тонны: ";
    float d, d1;
    std::cin >> d;
    std::cout << "Цена: ";
    std::cin >> d1;
    std::cout << d1*ton(d) << " тг" << std::endl;

    std::cout << "Введите радиус и высоту цилиндра: " << std::endl;
    int e;
    int f;
    std::cout << "Radius: ";
    std::cin >> e;
    std::cout << "Heght: ";
    std::cin >> f;
    std::cout << volume_cyl(e, f) << " м^3" << std::endl;

    std::cout << "Введите два числа что бы вычеслить максимальное: " << std::endl;
    int g, h;
    std::cin >> g;
    std::cin >> h;
    std::cout <<"Максимальное: "<< max(g, h) << std::endl;

    std::cout << "Введите два числа что бы сравнить: " << std::endl;
    int i, j;
    std::cin >> i;
    std::cin >> j;
    std::cout << "Результат: " << equation(i, j) << std::endl;

    std::cout << "Таблица факториалов: " << std::endl;
    for (int i = 1; i < 8; i++) {
        std::cout << i << "->";
        std::cout << factorial(i) << std::endl;
    }

    std::cout << "Проверка на гласную букву: " << std::endl;
    std::string k;
    std::cin >> k;
    std::cout << glasn(k) << std::endl;

    std::cout << "Верхний регистр " << std::endl;
    char z;
    std::cin >> z;
    std::cout << upcase(z);







}
