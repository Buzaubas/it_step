#include <iostream>

int main()
{
    const int x = 10;
    const int y = 10;
    int picture[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (j == 5) { picture[i][j] = -1; }
            else { picture[i][j] = 0; }

            if (i == 5) { picture[i][j] = -1; }
        }
    }
    int plus = 0;
    bool down = false;
    int checker = 1;
    bool hole = true;
    while(hole == true){
        hole = false;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if (picture[i][i] == 0) {
                    hole = true;
                }
            }
        } //проверяет есть ли в листе дырки
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                if (picture[i][j] == 0) {
                    picture[i][j] = checker;
                    if (picture[i][j + 1] == -1) {
                        break;
                    }
                    for (int d = 0; d < j; d++) {
                        if (picture[i + 1][j + d] != -1) {
                            break;
                        }
                        else {
                            down = true;
                        }
                    }
                }
            }
        }
        checker++;
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            std::cout << picture[i][j];
        }
        std::cout << std::endl;
    }
    
    
}
