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
class derived : public base
{
public:
    derived() : base(3, 6)
    {
        cout << "derived 0 arg constructor is called" << endl;
    }
    derived(int a) : base(12, 56)
    {
        cout << "derived 1 arg constructor is called" << endl;
    }
    derived(int a, int b) : base(b)
    {
        cout << "derived 2 arg constructor is called" << endl;
    }
};
int main()
{
    derived d1;
    return 0;
}