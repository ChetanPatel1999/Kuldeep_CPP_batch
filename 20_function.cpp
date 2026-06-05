#include <iostream>
using namespace std;
void addition()
{
    int a, b, c;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    c = a + b;
    cout << "addition =  " << c << endl;
}
int main()
{
    cout << "hello i am main" << endl;
    addition();

    addition();
    cout << "main function is end" << endl;
    return 0;
}