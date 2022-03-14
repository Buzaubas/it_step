#include <iostream>
#include <Windows.h>

void go(int x, int y) {
    COORD p = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void grid() {
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
    go(x, y + 1);
    std::cout << ' ' << ' ' << "*" << ' ' << ' ' << std::endl;
    go(x, y + 2);
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

void place(int q, int& x, int& y) {
    if (q == 1) {
        x = 0;
        y = 0;
    }
    else if (q == 2) {
        x = 1;
        y = 0;
    }
    else if (q == 3) {
        x = 2;
        y = 0;
    }
    else if (q == 4) {
        x = 0;
        y = 1;
    }
    else if (q == 5) {
        x = 1;
        y = 1;
    }
    else if (q == 6) {
        x = 2;
        y = 1;
    }
    else if (q == 7) {
        x = 0;
        y = 2;
    }
    else if (q == 8) {
        x = 1;
        y = 2;
    }
    else if (q == 9) {
        x = 2;
        y = 2;
    }
}

void winner(int x[3][3]) {
    if (x[0][0] == x[0][1] && x[0][1] == x[0][2]) {
        if (x[0][0] == 0) { std::cout << "Winner first player" << std::endl; }
        else if (x[0][0] == 1) { std::cout << "Winner second player" << std::endl; }
    }
    else if (x[1][0] == x[1][1] && x[1][1] == x[1][2]) {
        if (x[1][0] == 0) { std::cout << "Winner first player" << std::endl; }
        else if (x[1][0] == 1) { std::cout << "Winner second player" << std::endl; }
    }
    else if (x[2][0] == x[2][1] && x[2][1] == x[2][2]) {
        if (x[2][0] == 0) { std::cout << "Winner first player" << std::endl; }
        else if (x[2][0] == 1) { std::cout << "Winner second player" << std::endl; }
    }

    else if (x[0][0] == x[1][0] && x[1][0] == x[2][0]) {
        if (x[0][0] == 0) { std::cout << "Winner first player" << std::endl; }
        else if (x[0][0] == 1) { std::cout << "Winner second player" << std::endl; }
    }
    else if (x[0][1] == x[1][1] && x[1][1] == x[2][1]) {
        if (x[0][1] == 0) { std::cout << "Winner first player" << std::endl; }
        else if (x[0][1] == 1) { std::cout << "Winner second player" << std::endl; }
    }
    else if (x[0][2] == x[1][2] && x[1][2] == x[2][2]) {
        if (x[0][2] == 0) { std::cout << "Winner first player" << std::endl; }
        else if (x[0][2] == 1) { std::cout << "Winner second player" << std::endl; }
    }

    else if (x[0][0] == x[1][1] && x[1][1] == x[2][2]) {
        if (x[0][0] == 0) { std::cout << "Winner first player" << std::endl; }
        else if (x[0][0] == 1) { std::cout << "Winner second player" << std::endl; }
    }
    else if (x[0][2] == x[1][1] && x[1][1] == x[0][1]) {
        if (x[0][2] == 0) { std::cout << "Winner first player" << std::endl; }
        else if (x[0][2] == 1) { std::cout << "Winner second player" << std::endl; }
    }
}

void bot(int& a, int step, int q[3][3]) {
    if (step == 1) {
        a = 5;
    }
    else if (step == 2) {
        if (q[0][1] == 1 || q[1][0] == 1 || q[1][2] == 1 || q[2][1] == 1) {
            if (q[0][1] == 1) {
                a = 7;
            }
            else if (q[1][0] == 1) {
                a = 9;
            }
            else if (q[1][2] == 1) {
                a = 1;
            }
            else if (q[2][1] == 1) {
                a = 3;
            }
        }
        else if (q[0][0] == 1 || q[0][2] == 1 || q[2][0] == 1 || q[2][2] == 1) {
            if (q[0][0] == 1) {
                a = 3;
            }
            else if (q[0][2] == 1) {
                a = 9;
            }
            else if (q[2][0] == 1) {
                a = 1;
            }
            else if (q[2][2] == 1) {
                a = 7;
            }
        }
    }
    else if (step == 3) {
        if (q[0][1] == 1 || q[1][0] == 1 || q[1][2] == 1 || q[2][1] == 1) {
            if (q[0][2] != 1) { a = 3; }
        }
    }

}

int main()
{
    grid();
    int first{ 0 }, second{ 0 };
    int type1{ 0 }, type2{ 0 };
    int q[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            q[i][j] = j + i;
        }
    }
    int a{ 0 }, b{ 0 };
    int i{ 0 };
    int step = 1;
    Sleep(1000);
    while (true) {
        go(0, 10);
        bot(first, step, q);

        null(first);
        place(first, a, b);
        q[a][b] = 0;
        go(0, 12);
        winner(q);
        go(0, 10);
        std::cout << "Your turn:  ";
        printf("\b");
        std::cin >> second;

        cross(second);
        place(second, a, b);
        q[a][b] = 1;
        go(0, 12);
        winner(q);
        go(30, 30);
        step++;
    }
    go(20, 20);
}


//if (steps[2] == 1) {
//    if (second != 3) {
//        a = 3;
//    }
//    else {
//        a = 1;
//        if (steps[3] == 1) {
//            if (second == 4) {
//                a = 9;
//            }
//            else if (second == 6) {
//                a = 4;
//            }
//            else if (second == 8) {
//                a = 9;
//            }
//            else if (second == 9) {
//                a = 4;
//            }
//        }
//    }
//}
