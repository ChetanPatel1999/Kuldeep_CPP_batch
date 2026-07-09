#include <iostream>
using namespace std;
class complex
{
    int real;
    int image;

public:
    complex() {}
    complex(int a, int b)
    {
        real = a;
        image = b;
    }

    void getComplex()
    {
        cout << "complex number : (" << real << "+" << image << "i)" << endl;
    }
};
int main()
{
    complex c1(12, 6), c2(5, 4), c3;
    c1.getComplex();
    c2.getComplex();
    return 0;
}