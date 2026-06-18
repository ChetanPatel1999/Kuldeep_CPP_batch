#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout << "0 parameter constructor is called" << endl;
    }
    test(int a)
    {
        cout << "1 parameter constructor is called" << endl;
    }
    test(int a, int b)
    {
        cout << "2 parameter constructor is called" << endl;
    }
    test(int a, int b, int c)
    {
        cout << "3 parameter constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    test t1(8, 89, 9);
    test t2;
    test t3(78), t4;
    return 0;
}