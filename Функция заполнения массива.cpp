#include <iostream>
#include <string>

int fill(int *a, int b) {
    for (int i = 0; i < b; i++) {
        std::cout << "-> ";
        std::cin >> a[i];
    }
    for (int i = 0; i < b; i++) {
        std::cout << a[i] << " ";
    }
    return 1;
}
int main()
{
    const int num1 = 8;
    const int num2 = 4;
    int a[num1];
    int b[num2];
    fill(a, num1);
    fill(b, num2);

}

