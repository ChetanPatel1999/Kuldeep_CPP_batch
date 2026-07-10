#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "base 0 arg constructor is called" << endl;
    }
    base(int a)
    {
        cout << "base 1 arg constructor is called" << endl;
    }
    base(int a, int b)
    {
        cout << "base 2 arg constructor is called" << endl;
    }
    void display()
    {
        cout << "base class display method" << endl;
    }
};
class derived1 : public base
{
public:
    derived1() : base(3, 6)
    {
        cout << "derived1 0 arg constructor is called" << endl;
    }
    derived1(int a) : base(12, 56)
    {
        cout << "derived1 1 arg constructor is called" << endl;
    }
    derived1(int a, int b) : base(b)
    {
        cout << "derived1 2 arg constructor is called" << endl;
    }
};

class derived2 : public derived1, public base
{
public:
    derived2()
    {
        cout << "derived2 0 arg constructor is called" << endl;
    }
    derived2(int a) : derived1(4, 5)
    {
        cout << "derived2 1 arg constructor is called" << endl;
    }
    derived2(int a, int b)
    {
        cout << "derived2 2 arg constructor is called" << endl;
    }
};

int main()
{

    derived2 obj(6);
    return 0;
}