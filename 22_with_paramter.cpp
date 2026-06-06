#include <iostream>
using namespace std;
void add(int a, int b)
{
    int c;
    c = a + b;
    cout << "addition : " << c << endl;
}
void display(string s)
{
    cout << "name : " << s << endl;
}

void cube(int num)
{
    int res;
    res = num * num * num;
    cout << "cube = " << res << endl;
}

void range(int s, int e)
{
    int i;
    for (i = s; i <= e; i++) // 3
    {
        cube(i); // 3
    }
}

int main()
{

    range(1, 5);

    add(12, 5);
    add(45, 78);
    add(34, 90);
    add(45, 89);

    string name = "chetan patel";
    display(name);

    display("ram sharma");

    return 0;
}