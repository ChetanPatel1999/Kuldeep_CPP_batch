#include <iostream>
using namespace std;
void printHello()
{
    cout << "hello good morning " << endl;
}
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printHello();
    }
    return 0;
}