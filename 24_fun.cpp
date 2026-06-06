#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c = a + b;
    return c;
}

string fullName(string name, string sirName)
{
    string s3;
    s3 = name + " " + sirName;
    return s3;
}

char upperCase(char ch)
{
    return ch - 32;
}

float areaCircle(float radius)
{
    return 3.141 * radius * radius;
}

int factorial(int num) // 4
{
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{

    cout << "factorial = " << factorial(4) << endl;
    cout << "factorial = " << factorial(5) << endl;

    cout << "circle area = " << areaCircle(3.4) << endl;

    cout << upperCase('t') << endl;

    cout << fullName("ram", "sharma") << endl;
    cout << "addition = " << add(12, 5) << endl;

    cout << add(50, 20);
    return 0;
}