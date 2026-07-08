// example of method overriding
#include <iostream>
using namespace std;
class base
{
public:
    void display(int num)
    {
        cout << "num value display by base class = " << num << endl;
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "hello i am print" << endl;
    }
    void display(int num) // here we ovvride base class method
    {
        cout << "hi i am derived class display = " << num << endl;
    }
};
int main()
{
    derived d1;
    d1.display(34); // derived class diplsay is called
    return 0;
}