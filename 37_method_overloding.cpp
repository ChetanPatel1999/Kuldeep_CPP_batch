#include <iostream>
using namespace std;
class display
{
public:
    void disp(int data)
    {
        cout << "data value = " << data << endl;
    }
    void disp(int data1, int data2)
    {
        cout << "data1 value = " << data1 << endl;
        cout << "data2 value = " << data2 << endl;
    }
    void disp(string data)
    {
        cout << "data value = " << data << endl;
    }
    void disp(double data)
    {
        cout << "data value = " << data << endl;
    }
};
int main()
{
    display o1;
    o1.disp(12);
    o1.disp(23, 45);
    o1.disp("home");
    o1.disp(5.6);
    return 0;
}