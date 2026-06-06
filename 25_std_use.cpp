#include <iostream>
int main()
{

    int a, b, c;
    std::cout << "enter a : ";
    std::cin >> a;
    std::cout << "enter b : "; //(::   scop resolution operator)
    std::cin >> b;
    c = a + b;
    std::cout << "sum of " << a << " and " << b << " = " << c;

    return 0;
}