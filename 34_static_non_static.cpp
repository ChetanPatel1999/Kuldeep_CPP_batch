#include <iostream>
using namespace std;
class Demo
{
    int a, b;        // non static
    static int c, d; // static

public:
    void setData(int r, int s, int t, int u)
    {
        a = r;
        b = s;
        c = t;
        d = u;
    }

    void getDatata()
    {
        cout << "non static data : " << endl;
        cout << "a = " << a << " , b = " << b << endl;
        cout << "static data : " << endl;
        cout << "c = " << c << " , d = " << d << endl
             << endl;
    };
};

int Demo::c;
int Demo::d;

int main()
{
    Demo d1, d2, d3;
    d1.setData(12, 13, 500, 600);
    d2.setData(14, 15, 700, 800);
    d3.setData(16, 17, 900, 1000);
    d1.getDatata();
    d2.getDatata();
    d3.getDatata();
    return 0;
}