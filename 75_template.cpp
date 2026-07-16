#include <iostream>
using namespace std;

template <class t>
class data
{
    t data1;
    t data2;

public:
    void setData(t a, t b)
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
    data<int> d1;
    d1.setData(12, 67);
    d1.display();

    data<string> d2;
    d2.setData("ram", "shyam");
    d2.display();

    data<float> d3;
    d3.setData(4.5, 8.9);
    d3.display();

    data<char> d4;
    d4.setData('p', 'r');
    d4.display();
    return 0;
}