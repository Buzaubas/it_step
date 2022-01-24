#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int randomNumber = rand() % 100;
    std::cout << "Загадайте число" << std::endl;
    int a;
    std::cin >> a;
    std::cout << "Для больше используйте L, для меньше S" << std::endl;
    std::cout << "Начало игры" << std::endl;
    int mid;
    int max = 100;
    int min = 0;
    std::string value;
    
    while (true) {
        mid = (max + min) / 2;
        std::cout << mid << std::endl;
        if (mid == a) {
            std::cout << "Ваше число " << mid << std::endl; break;
        }
        else {
            std::cin >> value;
            if (value == "L") {
            min = mid;
        }
            else if (value == "S") {
            max = mid;
        }
        }
    }
}
