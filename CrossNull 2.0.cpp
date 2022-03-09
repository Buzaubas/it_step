#include <iostream>
#include <Windows.h>

void go(int x, int y) {
    COORD p = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void grid(){
    std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

        << "|" << "_" << "_" << "_" << "_" << "_" << '|'
        << "|" << "_" << "_" << "_" << "_" << "_" << '|'
        << "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

    std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

        << "|" << "_" << "_" << "_" << "_" << "_" << '|'
        << "|" << "_" << "_" << "_" << "_" << "_" << '|'
        << "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;

    std::cout << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|'
        << "|" << ' ' << ' ' << ' ' << ' ' << ' ' << '|' << std::endl

        << "|" << "_" << "_" << "_" << "_" << "_" << '|'
        << "|" << "_" << "_" << "_" << "_" << "_" << '|'
        << "|" << "_" << "_" << "_" << "_" << "_" << '|' << std::endl;
}

void cross(int coord)
{
    int x{ 0 }, y{ 0 };
    if (coord == 1) {
        x = 1;
        y = 0;
    }
    else if (coord == 2) {
        x = 8;
        y = 0;
    }
    else if (coord == 3) {
        x = 15;
        y = 0;
    }
    else if (coord == 4) {
        x = 1;
        y = 3;
    }
    else if (coord == 5) {
        x = 8;
        y = 3;
    }
    else if (coord == 6) {
        x = 15;
        y = 3;
    }
    else if (coord == 7) {
        x = 1;
        y = 6;
    }
    else if (coord == 8) {
        x = 8;
        y = 6;
    }
    else if (coord == 9) {
        x = 15;
        y = 6;
    }
    go(x, y);
    std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
    go(x, y+1);
    std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
    go(x, y+2);
    std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
}

void null(int coord)
{
    int x{ 0 }, y{ 0 };
    if (coord == 1) {
        x = 1;
        y = 0;
    }
    else if (coord == 2) {
        x = 8;
        y = 0;
    }
    else if (coord == 3) {
        x = 15;
        y = 0;
    }
    else if (coord == 4) {
        x = 1;
        y = 3;
    }
    else if (coord == 5) {
        x = 8;
        y = 3;
    }
    else if (coord == 6) {
        x = 15;
        y = 3;
    }
    else if (coord == 7) {
        x = 1;
        y = 6;
    }
    else if (coord == 8) {
        x = 8;
        y = 6;
    }
    else if (coord == 9) {
        x = 15;
        y = 6;
    }
    go(x, y);
    std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
    go(x, y + 1);
    std::cout << ' ' << '*' << ' ' << '*' << ' ' << std::endl;
    go(x, y + 2);
    std::cout << ' ' << '*' << '*' << '*' << ' ' << std::endl;
}

int main()
{
    grid();
    int first{ 0 }, second{ 0 };
    int type1{ 0 }, type2{ 0 };
    while (true) {
        go(0, 10);
        std::cout << "Coordinate: ";
        std::cin >> first;
        std::cout << "Type: ";
        std::cin >> type1;
        if (type1 == 0) {
            null(first);
        }
        else if (type1 == 1) {
            cross(first);
        }
        go(0, 10);
        std::cout << "Coordinate: ";
        std::cin >> second;
        std::cout << "Type: ";
        std::cin >> type2;
        if (type2 == 0) {
            null(second);
        }
        else if (type2 == 1) {
            cross(second);
        }

    }
    go(20, 20);
}
