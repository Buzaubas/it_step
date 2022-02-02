#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <string>

int fill(int *a, int b) {
    for (int i = 0; i < b; i++) {
        std::cout << "-> ";
        std::cin >> a[i];
    }
    std::cout << std::endl;
    for (int i = 0; i < b; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 1;
}

int massive(int (*a)[5]) {
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] = 30 + rand() % (60 - 30 + 1);
        }
    }
    return 0;
}

int maximum(int(*a)[5]) {
    int max = a[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}

int minimum(int(*a)[5]) {
    int min = a[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
}

int first() {
    srand(time(NULL));
    std::string word;
    std::cout << "Please enter head or tail -> ";
    std::cin >> word;
    std::cout << "Flipping coin";
    std::cout << "."; Sleep(1000);
    std::cout << "."; Sleep(1000);
    std::cout << "."; Sleep(1000);
    std::cout << "."; Sleep(1000);
    int buffer = 0 + rand() % (1 - 0 + 1);

    if (buffer == 0) {
        std::cout << "head";
    }
    else if (buffer == 1) {
        std::cout << "tail";
    }

    int check;
    if (word == "head") {
        check = 0;
    }
    else if(word == "tail") {
        check = 1;
    }
    else {
        std::cout<< " ERROR&%*(^^$*(&#$^%(&%)#$&*#()$" << std::endl;
    }
    std::cout<<std::endl;

    if (check == buffer) {
        std::cout << "You first" << std::endl;
        return 0;
    }
    else {
        std::cout << "Computer first" << std::endl;
        return 1;
    }
    
}

int cubes(){
    srand(time(NULL));
    int a1, a2;
    a1 = 1 + rand() % (6 - 1 + 1);
    a2 = 1 + rand() % (6 - 1 + 1);
    std::cout << " -------" << "      " << "  -------" << std::endl;
    std::cout << "|       |" << "      " << "|       |" << std::endl;
    std::cout << "|   " << a1 << "   |" << "      " << "|   " << a2 << "   |" << std::endl;
    std::cout << "|       |" << "      " << "|       |" << std::endl;
    std::cout << " -------" << "      " << "  -------" << std::endl;
    return a1+a2;
}

int main()
{
    const int num1 = 3;
    const int num2 = 4;
    int a[num1];
    int b[num2];
    fill(a, num1);
    fill(b, num2);

    std::cout << std::endl;

    int c[5][5];
    massive(c);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << c[i][j]<< " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Maximum: " << maximum(c) << std::endl;
    std::cout << "Minimum: " << minimum(c) << std::endl;
    std::cout << std::endl;


    int pointMe = 0;
    int pointComputer = 0;
    int totalMe = 0;
    int totalComputer = 0;
    std::string flip;
    std::cout << "Welcome to the Game!" << std::endl;
    std::cout << "Now we will determine who will go first" << std::endl;
    int d = first();
    if (d == 0) {
        for (int i = 0; i < 2; i++) {
            std::cin >> flip;
            std::cout << "You: " << std::endl;
            pointMe = cubes();
            totalMe += pointMe;
            std::cout << "Your score: " << pointMe << std::endl;
            Sleep(2238);
            std::cout << "Computer: " << std::endl;
            pointComputer = cubes();
            totalComputer += pointComputer;
            std::cout << "Computer score: " << pointComputer << std::endl;
        }
        std::cout << "Current situation: " << totalMe << " : " << totalComputer << std::endl;
        for (int i = 0; i < 2; i++) {
            std::cin >> flip;
            std::cout << "You: " << std::endl;
            pointMe = cubes();
            totalMe += pointMe;
            std::cout << "Your score: " << pointMe << std::endl;
            Sleep(2238);
            std::cout << "Computer: " << std::endl;
            pointComputer = cubes();
            totalComputer += pointComputer;
            std::cout << "Computer score: " << pointComputer << std::endl;
        }
        std::cout << "Current situation: " << totalMe << " : " << totalComputer << std::endl;
    }
    else {
        for (int i = 0; i < 2; i++) {
            Sleep(2485);
            std::cout << "Computer: " << std::endl;
            pointComputer = cubes();
            totalComputer += pointComputer;
            std::cout << "Computer score: " << pointComputer << std::endl;
            std::cin >> flip;
            std::cout << "You: " << std::endl;
            pointMe = cubes();
            totalMe += pointMe;
            std::cout << "Your score: " << pointMe << std::endl;
            
        }
        std::cout << "Current situation: " << totalComputer << " : " << totalMe << std::endl;
        for (int i = 0; i < 2; i++) {
            std::cout << "Computer: " << std::endl;
            pointComputer = cubes();
            totalComputer += pointComputer;
            std::cout << "Computer score: " << pointComputer << std::endl;
            std::cin >> flip;
            std::cout << "You: " << std::endl;
            pointMe = cubes();
            totalMe += pointMe;
            std::cout << "Your score: " << pointMe << std::endl;

        }
        std::cout << "Current situation: " << totalComputer << " : " << totalMe << std::endl;
    }

    if (totalMe > totalComputer) {
        std::cout << "You Win!" << std::endl;
    }
    else {
        std::cout << "You Lose!" << std::endl;
    }


}
