#include <iostream>
using namespace std;
class base
{
public:
    int a;

private:
    int b;

protected:
    int c, d;

public:
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

class derived : public base // child class
{

public:
    void setData()
    {
        c = 90;
        d = 20;
    }
    void show()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

class other
{
    void work()
    {
        base obj;
        obj.a = 67;
        obj.b = 45;
        obj.c = 25;
    }
};
int main()
{
    base b1;
    b1.a = 34;
    b1.b = 90;
    b1.c = 50;
    b1.display();
    return 0;
}
