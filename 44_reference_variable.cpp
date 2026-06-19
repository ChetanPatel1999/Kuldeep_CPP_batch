#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a;
    cout << "a = " << a << endl; // 12
    cout << "b = " << b << endl; // 12

    b = 90;

    a = 10;

    cout << "a = " << a << endl; // 90
    cout << "b = " << b << endl; // 90
    return 0;
}