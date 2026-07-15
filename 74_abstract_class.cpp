#include <iostream>
using namespace std;
class base // abstract class
{
public:
    virtual void show(int a, int b) = 0; // pure virtual function
    virtual void fun() = 0;              // pure virtual function
    void display()
    {
        cout << " base class display called" << endl;
    }
};
class derived : public base
{
public:
    void show(int a, int b) // method override
    {
        cout << "show is override" << endl;
    }
    void fun() // method override
    {
        cout << "fun  is override" << endl;
    }
    void myMethod()
    {
        cout << "derived method " << endl;
    }
};
int main()
{
    derived d1;
    d1.fun();
    d1.show(12, 45);
    d1.myMethod();
    d1.display();
    return 0;
}