#include <iostream>
#include <windows.h>

int main()
{
    /*std::printf("hello");
    std::printf("\rbye");*/
    int index{ 0 };
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) 
            if (j == index) {
                std::cout << (char)20;
            }
            else{
                std::cout << (char)176;
            }
        index++;
        std::printf("\r                                                 ");
        Sleep(50);
    }
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++)
            if (j == index) {
                std::cout << (char)20;
            }
            else {
                std::cout << (char)176;
            }
        index--;
        std::printf("\r                                                 ");
        Sleep(50);
    }
 
}
