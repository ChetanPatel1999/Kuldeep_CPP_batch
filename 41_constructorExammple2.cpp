#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
    }
    test(int a)
    {
        cout << "1 parameter constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    test t1;
    return 0;
}