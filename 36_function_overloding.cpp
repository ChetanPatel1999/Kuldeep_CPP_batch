#include <iostream>
using namespace std;
void add()
{
    cout << "addition = " << (12 + 6) << endl;
}
void add(int a)
{
    cout << "addition = " << (a + 10) << endl;
}
void add(int a, int b)
{
    cout << "addition = " << (a + b) << endl;
}
void add(float a, float b)
{
    cout << "addition = " << (a + b) << endl;
}
void add(float a, int b)
{
    cout << "addition = " << (a + b) << endl;
}
void add(int a, float b)
{
    cout << "addition = " << (a + b) << endl;
}
int main()
{
    add();
    add(45);
    add(40, 20);
    add(4.5f, 3.2f);
    add(4, 8.9f);
    add(3.4f, 7);
    return 0;
}