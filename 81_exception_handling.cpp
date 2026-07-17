#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "this is division app : " << endl;
    cout << "enter a : ";
    cin >> a; // 12
    cout << "enter b : ";
    cin >> b; // 0
    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
        cout << "division : " << c << endl;
    }
    catch (int value)
    {
        cout << "zero division error" << endl;
        cout << "because value b = " << value << endl;
    }

    cout << "program run succefully1" << endl;
    cout << "program run succefully2" << endl;
    return 0;
}