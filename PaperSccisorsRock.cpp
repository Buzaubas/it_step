#include <iostream>
#include <Windows.h>


enum SPR {
    STONE = 1, SCISSORS, PAPER
};

int main()
{
    srand(time(0));
    int random1 = rand() % 3 + 1;
    Sleep(1000);
    int random2 = rand() % (3-1+1) + 1;
    size_t user{ 0 };
    size_t first_bot{ 0 };
    size_t second_bot{ 0 };
    int bank_user{ 10 };
    int bank_1{ 10 };
    int bank_2{ 10 };


    size_t user_input{ 0 };
    std::cout << "Input (STONE = 1 or SCISSORS = 2 or PAPER = 3): ";
    std::cin >> user_input;

    while (user_input > 3 && user_input < 0) {
        std::cout << "INPUT INVALID" << std::endl;
        std::cin >> user_input;
    }

    std::cout << "First bot: ";
    if (random1 == 1) {
        //SPR first_bot = SPR::STONE;
        first_bot = 1;
    }
    else if (random1 == 2) {
        //SPR first_bot = SPR::SCISSORS;
        first_bot = 2;
    }
    else if (random1 == 3) {
        //SPR first_bot = SPR::PAPER;
        first_bot = 3;
    }
    std::cout << first_bot << std::endl;

    std::cout << "Second bot: ";
    if (random2 == 1) {
        //SPR second_bot = SPR::STONE;
        second_bot = 1;
    }
    else if (random2 == 2) {
        //SPR second_bot = SPR::SCISSORS;
        second_bot = 2;
    }
    else if (random2 == 3) {
        //SPR second_bot = SPR::PAPER;
        second_bot = 3;
    }
    std::cout << second_bot << std::endl;


    //GAME START

    if (user != first_bot && user != second_bot && first_bot != second_bot) {
        std::cout << "DRAW" << std::endl;
    }
    else if (user == first_bot && user == second_bot && first_bot == second_bot) {
        std::cout << "DRAW" << std::endl;
    }
    else {
        if (user == first_bot) {
            if (user == 1 && second_bot == 2) {
                std::cout << " WIN: user | first_bot" << std::endl;
                bank_user++;
                bank_1++;
                bank_2 -= 2;

            }
            else if (user == 2 && second_bot == 3) {
                std::cout << " WIN: user | first_bot" << std::endl;
                bank_user++;
                bank_1++;
                bank_2 -= 2;
            }
            else if (user == 3 && second_bot == 1) {
                std::cout << " WIN: user | first_bot" << std::endl;
                bank_user++;
                bank_1++;
                bank_2 -= 2;
            }
            else {
                std::cout << " WIN: second_bot" << std::endl;
                bank_user--;
                bank_1--;
                bank_2 += 2;
            }
        }
        else if (user == second_bot) {
            if (user == 1 && first_bot == 2) {
                std::cout << " WIN: user | second_bot" << std::endl;
                bank_user++;
                bank_2++;
                bank_1 -= 2;
            }
            else if (user == 2 && first_bot == 3) {
                std::cout << " WIN: user | second_bot" << std::endl;
                bank_user++;
                bank_2++;
                bank_1 -= 2;
            }
            else if (user == 3 && first_bot == 1) {
                std::cout << " WIN: user | second_bot" << std::endl;
                bank_user++;
                bank_2++;
                bank_1 -= 2;
            }
            else {
                std::cout << " WIN: first_bot" << std::endl;
                bank_user--;
                bank_2--;
                bank_1 += 2;
            }
        }
        else if (first_bot == second_bot) {
            if (user == 1 && first_bot == 2) {
                std::cout << " WIN: user" << std::endl;
                bank_user += 2;
                bank_2--;
                bank_1--;
            }
            else if (user == 2 && first_bot == 3) {
                std::cout << " WIN: user" << std::endl;
                bank_user += 2;
                bank_2--;
                bank_1--;
            }
            else if (user == 3 && first_bot == 1) {
                std::cout << " WIN: user" << std::endl;
                bank_user += 2;
                bank_2--;
                bank_1--;
            }
            else {
                std::cout << " WIN: first_bot | second_bot" << std::endl;
                bank_user -= 2;
                bank_2++;
                bank_1++;
            }
        }
    }

    std::cout << "User: " << bank_user << std::endl;
    std::cout << "First_bot: " << bank_1 << std::endl;
    std::cout << "Second_bot: " << bank_2 << std::endl;


}
