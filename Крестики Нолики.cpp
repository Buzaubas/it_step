#include <iostream>
#include <windows.h>

void go(int x, int y) {
    COORD p = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

void gridold() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    for (int j = 0; j < 11; j++) {
        for (int i = 0; i < 17; i++) {
            if (j == 4 || j == 7) {
                std::cout << "-";
            }
            else if (i == 6 || i == 11) {
                std::cout << "|";
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void circleold(){
    int centerx = 2;
    int centery = 1;
    /*int low = x - 1;
    int high = x + 1;*/
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == centerx) {
                if (j == centerx && i == centery) std::cout << " ";
                else std::cout << (char)149;
                if (i == centery) {
                    std::cout << (char)149;
                    std::cout << " ";
                }
            }
            std::cout << " ";

        }
        std::cout << std::endl;
    }
}

void crossold() {
    int centerx = 2;
    int centery = 1;
    /*int low = x - 1;
    int high = x + 1;*/
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (j == centerx) {
                if (j == centerx && i == centery) std::cout << " ";
                else std::cout << (char)149;
                if (i == centery) {
                    std::cout << (char)149;
                    std::cout << " ";
                }
            }
            std::cout << " ";

        }
        std::cout << std::endl;
    }
}

void cross() {
    std::cout << " " << "*" << " " << "*" << " " << std::endl;
    std::cout << " " << " " << "*" << " " << " " << std::endl;
    std::cout << " " << "*" << " " << "*" << " " << std::endl;
}

void circle() {
    std::cout << " " << " " << "*" << " " << " " << std::endl;
    std::cout << " " << "*" << " " << "*" << " " << std::endl;
    std::cout << " " << " " << "*" << " " << " " << std::endl;
}

void blank() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void grid(int x, int y, bool type) {
    if (x == 0 && y == 0 && type == true) {
        go(0, 0);
        circle();
    }
    else if(x == 0 && y == 0 && type == false) {
        go(0, 0);
        cross();
    }
    else {
        go(0, 0);
        blank();
    }
    go(5, 0);
    std::cout << "|";
    go(5, 1);
    std::cout << "|";
    go(5, 2);
    std::cout << "|";


    if (x == 1 && y == 0 && type == true) {
        go(6, 0);
        circle();
    }
    else if (x == 1 && y == 0 && type == false) {
        go(6, 0);
        cross();
    }
    else {
        go(6, 0);
        blank();
    }
    go(11, 0);
    std::cout << "|";
    go(11, 1);
    std::cout << "|";
    go(11, 2);
    std::cout << "|";

    if (x == 2 && y == 0 && type == true) {
        go(12, 0);
        circle();
    }
    else if (x == 2 && y == 0 && type == false) {
        go(12, 0);
        cross();
    }
    else {
        go(12, 0);
        blank();
    }

    //first row end
    /*go(0, 3);
    std::cout << "__";
    go(1, 3);
    std::cout << "__";
    go(2, 3);
    std::cout << "__";

    go(7, 3);
    std::cout << "__";
    go(8, 3);
    std::cout << "__";
    go(9, 3);
    std::cout << "__";

    go(11, 3);
    std::cout << "__";
    go(12, 3);
    std::cout << "__";
    go(13, 3);
    std::cout << "__";*/
    //second row start

    if (x == 0 && y == 1 && type == true) {
        go(0, 4);
        circle();
    }
    else if (x == 0 && y == 1 && type == false) {
        go(0, 4);
        cross();
    }
    else {
        go(0, 4);
        blank();
    }
    go(5, 4);
    std::cout << "|";
    go(5, 5);
    std::cout << "|";
    go(5, 6);
    std::cout << "|";


    if (x == 1 && y == 1 && type == true) {
        go(6, 4);
        circle();
    }
    else if (x == 1 && y == 1 && type == false) {
        go(6, 4);
        cross();
    }
    else {
        go(6, 4);
        blank();
    }
    go(11, 4);
    std::cout << "|";
    go(11, 5);
    std::cout << "|";
    go(11, 6);
    std::cout << "|";

    if (x == 2 && y == 1 && type == true) {
        go(12, 4);
        circle();
    }
    else if (x == 2 && y == 1 && type == false) {
        go(12, 4);
        cross();
    }
    else {
        go(12, 4);
        blank();
    }

    //second row end
    /*go(0, 7);
    std::cout << "__";
    go(1, 7);
    std::cout << "__";
    go(2, 7);
    std::cout << "__";

    go(7, 7);
    std::cout << "__";
    go(8, 7);
    std::cout << "__";
    go(9, 7);
    std::cout << "__";

    go(11, 7);
    std::cout << "__";
    go(12, 7);
    std::cout << "__";
    go(13, 7);
    std::cout << "__";*/

    //third row start
    if (x == 0 && y == 2 && type == true) {
        go(0, 8);
        circle();
    }
    else if (x == 0 && y == 2 && type == false) {
        go(0, 8);
        cross();
    }
    else {
        go(0, 8);
        blank();
    }
    go(5, 8);
    std::cout << "|";
    go(5, 9);
    std::cout << "|";
    go(5, 10);
    std::cout << "|";


    if (x == 1 && y == 2 && type == true) {
        go(6, 8);
        circle();
    }
    else if (x == 1 && y == 2 && type == false) {
        go(6, 8);
        cross();
    }
    else {
        go(6, 8);
        blank();
    }
    go(11, 8);
    std::cout << "|";
    go(11, 9);
    std::cout << "|";
    go(11, 10);
    std::cout << "|";

    if (x == 2 && y == 2 && type == true) {
        go(12, 8);
        circle();
    }
    else if (x == 2 && y == 2 && type == false) {
        go(12, 8);
        cross();
    }
    else {
        go(12, 8);
        blank();
    }



}

int main()
{
    //grid();
    //circle(2, 1);
    //COORD position = { 0,0 }; //позиция x и y
    //HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    //SetConsoleCursorPosition(hConsole, position);

    grid(0 , 0, false);
    printf("\r");
    Sleep(1000);
    grid(5, 5, true);


}
