// we use new keyword in c++ to allocate dynamic memory.
#include <iostream>
using namespace std;
int main()
{

    int *ptr = new int;
    *ptr = 81;
    cout << "value = " << *ptr << endl;

    if (*ptr % 2 == 0)
    {
        cout << "num is even ";
    }
    else
    {
        cout << "num is odd";
    }

    delete ptr;
    return 0;
}