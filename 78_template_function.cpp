#include <iostream>
using namespace std;

template <class t>
void display(t data)
{
    cout << "data = " << data << endl;
}

template <class t>
void add(t a, t b)
{
    cout << "addition = " << (a + b) << endl;
}

int main()
{
    add(4, 5);
    add(6.3, 8.2);

    // display(45);
    // display(90);
    // display('A');
    // display(5.6);
    // display("home");
    return 0;
}