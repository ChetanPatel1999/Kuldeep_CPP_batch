#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;

public:
    friend void display(data d1);
    data(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};

void display(data d1)
{
    cout << "data values : " << endl;
    cout << "num1 = " << d1.num1 << endl;
    cout << "num2 = " << d1.num2 << endl;
}

int main()
{
    data d1(12, 34);

    display(d1);

    return 0;
}