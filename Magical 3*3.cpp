#include <iostream>
#include <string>

int main()
{
    const int size = 3;
    int qub[size][size] = {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}
    };
    int x;
    int y;

    int hor1 = qub[0][0] + qub[0][1] + qub[0][2];
    int hor2 = qub[1][0] + qub[1][1] + qub[1][2];
    int hor3 = qub[2][0] + qub[2][1] + qub[2][2];

    int ver1 = qub[0][0] + qub[1][0] + qub[2][0];
    int ver2 = qub[0][1] + qub[1][1] + qub[2][1];
    int ver3 = qub[0][2] + qub[1][2] + qub[2][2];

    int dia1 = qub[0][0] + qub[1][1] + qub[2][2];
    int dia2 = qub[0][2] + qub[1][1] + qub[2][0];

    if (hor1 == hor2 && hor2 == hor3 && hor3 == ver1 && ver1 == ver2 && ver2 == ver3 && ver3 == dia1 && dia1 == dia2) {
        std::cout << "Magical";
    }
    else {
        std::cout << "non magical";
    }

}
