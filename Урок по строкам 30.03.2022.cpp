#include <iostream>


char* my_strcat(char* s1, char* s2) //присеодиняет s1 к s2
{
    int count1{ 0 };
    int count2{ 0 };
    int count3{ 0 };
    while (s1[count1] != '\0')
    {
        count1++;
    }
    while (s2[count2] != '\0')
    {
        count2++;
    }
    for (size_t i = count1; i < count1 + count2; i++) {
        s1[i] = s2[count3];
        s1[i + 1] = '\0';
        count3++;
    }
    return s1; 

}

char* my_strncat(char* s1, char* s2, int n) //присеодиняет не более n количества символов s1 к s2
{
    int count1{ 0 };
    int count2{ 0 };
    while (s1[count1] != '\0')
    {
        count1++;
    }
    for (size_t i = count1; i < count1 + n; i++) {
        s1[i] = s2[count2];
        s1[i+1] = '\0';
        count2++;
    }
    return s1;
}

char* my_strcpy(char* s1, char* s2) //копирует s2 в s1
{
    int count1{ 0 };
   
    while (s2[count1] != '\0')
    {
        count1++;
    }
    for (size_t i = 0; i < count1; i++) {
        s1[i] = s2[i];
        s1[i + 1] = '\0';
    }
    return s1;
}

char* my_strncpy(char* s1, char* s2, int n) //копирует не более n количества сиволов s2 в s1
{
    int count1{ 0 };

    while (s2[count1] != '\0')
    {
        count1++;
    }
    for (size_t i = 0; i < n; i++) {
        s1[i] = s2[i];
        s1[i + 1] = '\0';
    }
    return s1;
}

int my_strcmp(char* s1, char* s2) //сравнивает s1 и s2, если равны, то возвращает 0, иначе 1
{
    int count1{ 0 };

    while (s1[count1] != '\0')
    {
        count1++;
    }
    for (size_t i = 0; i < count1; i++) {
        if (s1[i] != s2[i])
        {
            return 1;
        }
    }
    return 0;
}

int my_strncmp(char* s1, char* s2, int n)  //сравнивает первые n количество сиволов s1 и s2, если равны, то возвращает 0, иначе 1
{
    for (size_t i = 0; i < n; i++) {
        if (s1[i] != s2[i])
        {
            return 1;
        }
    }
    return 0;
}

int my_strlen(char* s) //возвращает количество сиволов в строке s
{
    int count{ 0 };
    while (s[count] != '\0')
    {
        count++;
    }

    return count;
}

char* my_strset(char* s, char c)  // заполняет строку s символами, код которых равен значению c, возращает указатель на строку s
{
    int count{ 0 };
    while (s[count] != '\0')
    {
        count++;
    }
    for (size_t i = 0; i < count; i++) {
        s[i] = c;
    }
    return s;
}

char* my_strnset(char* s, char c, int n)  // заполняет первые n символов строки s символами, код которых равен значению c, возращает указатель на строку s
{
    for (size_t i = 0; i < n; i++) {
        s[i] = c;
    }
    return s;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    const int BUFF_SIZE = 512;
    char* buffer = new char[BUFF_SIZE];
    char* plus = new char[BUFF_SIZE];

    std::cin.getline(buffer, BUFF_SIZE);
    std::cin.getline(plus, BUFF_SIZE);
    

    //std::cout << "Yout text: " << buffer << std::endl;

    /*std::cout << strcat(buffer, plus);*/
    //std::cout << "Yout text: " << my_strcat(buffer, plus) << std::endl;
    //std::cout << "Yout text: " << my_strncat(buffer, plus, 4) << std::endl;
    //std::cout << "Yout text: " << my_strcpy(buffer, plus) << std::endl;
    //std::cout << "Yout text: " << my_strncpy(buffer, plus, 3) << std::endl;
    //std::cout << "Yout text: " << my_strcmp(buffer, plus) << std::endl;
    //std::cout << "Yout text: " << my_strncmp(buffer, plus, 5) << std::endl;
    //std::cout << my_strlen(buffer) << std::endl;
    //std::cout << my_strset(buffer, 'n') << std::endl;
    //std::cout << my_strnset(buffer, 'n', 3) << std::endl;

    /*READ ME
        Функций включать по отдельности, так как работа функций непосредственно затрагивают массивы с символами
        Если сработает одна функция и после другая, то результат второй может отличаться, так как первая функция изменила массив и во вторую функцию попал уже изменненный*/

    delete[] buffer; //что бы избежать утечки данных
}

