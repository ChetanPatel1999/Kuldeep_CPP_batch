#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "constructor is called" << endl;
    }
    ~demo()
    {
        cout << "destructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    demo d1, d2;
    cout << "now perform some operation\n";
    d1.display();
    d2.display();
    cout << "operation complete" << endl;

    return 0;
}