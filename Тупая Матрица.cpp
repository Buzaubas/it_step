#include <iostream>
#include <windows.h>

int main()
{
    /*std::printf("hello");
    std::printf("\rbye");*/
    /*int index{ 0 };
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
    }*/
 
    char matrix[10][300];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 50; j++) {
            matrix[i][j] == (char)176;
        }
    }

    int index1{ 0 };
    int index2{ 0 };
    int index3{ 0 };
    int index4{ 0 };
    int index5{ 0 };
    int index6{ 0 };
    int index7{ 0 };
    int index8{ 0 };
    
    for (int d = 0; d < 10; d++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 50; j++) {
                if (i == index1 && j == 2) std::cout << (char)20;
                if (i == index2 && j == 4) std::cout << (char)20;
                if (i == index3 && j == 8) std::cout << (char)20;
                if (i == index4 && j == 9) std::cout << (char)20;
                if (i == index5 && j == 15) std::cout << (char)20;
                if (i == index6 && j == 30) std::cout << (char)20;
                if (i == index7 && j == 34) std::cout << (char)20;
                if (i == index8 && j == 48) std::cout << (char)20;
                std::cout << matrix[i][j];
            }
            std::cout << std::endl;

        }
        index1++;
        index2++;
        index3++;
        index4++;
        index5++;
        index6++;
        index7++;
        index8++;
        Sleep(70);
        system("cls");

    }
     index1 = 0;
     index2 = 0;
     index3 = 0;
     index4 = 0;
     index5 = 0;
     index6 = 0;
     index7 = 0;
     index8 = 0;
    for (int d = 0; d < 10; d++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 50; j++) {
                if (i == index1 && j == 2) std::cout << (char)20;
                if (i == index2 && j == 4) std::cout << (char)20;
                if (i == index3 && j == 8) std::cout << (char)20;
                if (i == index4 && j == 9) std::cout << (char)20;
                if (i == index5 && j == 15) std::cout << (char)20;
                if (i == index6 && j == 30) std::cout << (char)20;
                if (i == index7 && j == 34) std::cout << (char)20;
                if (i == index8 && j == 48) std::cout << (char)20;
                std::cout << matrix[i][j];
            }
            std::cout << std::endl;

        }
        index1++;
        index2++;
        index3++;
        index4++;
        index5++;
        index6++;
        index7++;
        index8++;
        Sleep(50);
        system("cls");

    }
    


}
