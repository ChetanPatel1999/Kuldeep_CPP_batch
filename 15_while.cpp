#include <iostream>
using namespace std;
int main()
{
    int num = 453, rem;
    while (num > 0)
    {
        rem = num % 10;
        cout << rem << endl;
        num = num / 10; // 4
    }
    return 0;
}