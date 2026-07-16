// template with multiple parameter
#include <iostream>
using namespace std;

template <class t1, class t2>
class data
{
    t1 data1;
    t2 data2;

public:
    void setData(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << "\ndiplay data :- " << endl;
        cout << "data1 = " << data1 << endl;
        cout << "data2 = " << data2 << endl;
        cout << "---------------------" << endl;
    }
};

int main()
{
    data<int, string> d1;
    d1.setData(12, "home");
    d1.display();

    data<string, float> d2;
    d2.setData("ram", 7.8);
    d2.display();

    data<float, float> d3;
    d3.setData(4.5, 8.9);
    d3.display();

    data<char, string> d4;
    d4.setData('p', "raj");
    d4.display();
    return 0;
}