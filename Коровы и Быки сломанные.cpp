#include <iostream>

int main()
{
    int number = 289374;
    int split[6];
    split[0] = number % 10;
    split[1] = (number % 100) / 10;
    split[2] = (number % 1000) / 100;
    split[3] = (number % 10000) / 1000;
    split[4] = (number % 100000) / 10000;
    split[5] = (number % 1000000) / 100000;

    for (int i = 0; i < 6; i++) {
        std::cout << split[i] << std::endl;
    }
    
    int guess{ 0 };
    int splitGuess[6];
    int cows{ 0 };
    int bulls{ 0 };
    while (true) {
        bulls = 0;
        cows = 0;
        std::cout << "-> ";
        std::cin >> guess;
        if (guess == number) {
            std::cout << "Guess" << std::endl;
            break;
        }

        splitGuess[0] = number % 10;
        splitGuess[1] = (guess % 100) / 10;
        splitGuess[2] = (guess % 1000) / 100;
        splitGuess[3] = (guess % 10000) / 1000;
        splitGuess[4] = (guess % 100000) / 10000;
        splitGuess[5] = (guess % 1000000) / 100000;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j<6; j++) {
                if (splitGuess[j] == split[i]) {
                    cows += 1;
                }
            }
        }
        std::cout << "Cows: " << cows << std::endl;
        std::cout << "Bulls: " << bulls << std::endl;
    }

    
}
