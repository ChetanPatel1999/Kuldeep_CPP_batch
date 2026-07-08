#include <iostream>
using namespace std;
class addition
{
public:
    void add(int a, int b)
    {
        cout << "addition = " << (a + b) << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "addition = " << (a + b + c) << endl;
    }
};
class subtraction
{
public:
    void sub(int a, int b)
    {
        cout << "subtraction = " << (a - b) << endl;
    }
};

class multiplication
{
public:
    void mul(int a, int b)
    {
        cout << "multiplication = " << (a * b) << endl;
    }
};

class calculator : public addition, public subtraction, public multiplication
{
public:
    void allOperation(int a, int b)
    {
        add(a, b);
        sub(a, b);
        mul(a, b);
    }
};
int main()
{
    calculator obj;
    obj.add(12, 5);
    obj.sub(45, 7);
    obj.mul(4, 7);

    obj.allOperation(5, 2);
    return 0;
}