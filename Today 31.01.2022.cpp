#include <iostream>
#include <string>



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

int main()
{
    setlocale(0, "rus");
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
    std::cout << barrel(c) << " тонн" << std::endl;

    std::cout << "Введите тонны: ";
    float d;
    std::cin >> d;
    std::cout << ton(d) << " баррель" << std::endl;

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







}
