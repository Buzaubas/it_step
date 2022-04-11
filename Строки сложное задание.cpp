#include <iostream>
#include <string.h>

//int count(char* str)
//{
//    int index{ 0 };
//    int count{ 0 };
//    while (str[index] != '\0')
//    {
//        str[index] == ' ';
//        index++;
//    }
//    return count + 1;
//}

struct Repeat 
{
    int num;
    char* word;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    const char* cstr = "Kzakhstan, fsadfas hjaksldfjha hdjfhdjf hfjdhfjdfl ";
    
    /*size_t index{ 0 };
    size_t count{ 0 };
    
    const char* position{ strchr(cstr, ' ') };
    char* copycat;
    while (position != nullptr)
    {
        std::cout << position << std::endl;
        count++;
        position = strchr(++position, ' ');        
    }

    std::cout << count + 1 << std::endl;*/

    /*size_t index{ 0 };
    const char* position{ strchr(cstr, ' ') };
    const char* origin{ cstr };

    char word[256]{ 0 };
    size_t length{ 0 };

    while (position != nullptr)
    {
        length = position - origin;
        strncpy_s(word, origin, length);
        std::cout << word << std::endl;
        position =  strchr(++position, ' ');
        origin =  strchr(++origin, ' ');
    }*/

    char out[256]{ 0 };
    int index{ 0 };

    const char* pre_position{ cstr };
    const char* position{ strchr(cstr, ' ') };

    struct Repeat WordsGone[5] = {};
    while (position != nullptr)
    {
        strncpy_s(out, pre_position, position - pre_position);
        pre_position = position + 1;
        std::cout << out << std::endl;

        position = strchr(++position, ' ');

        WordsGone[index] = { 1, out };
        index++;
        for (int i = 0; i < index; i++)
        {
            if (WordsGone[i].word == out)
            {
                WordsGone[index].num++;
            }
        }
    }
    std::cout << std::endl;
    for (int i = 0; i < index; i++) {
        std::cout << WordsGone[i].word << std::endl;
        std::cout << WordsGone[i].num << std::endl;
        std::cout << std::endl;
    }

    std::cout << pre_position << std::endl;


}
