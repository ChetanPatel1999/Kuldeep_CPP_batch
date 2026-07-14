#include <iostream>
using namespace std;
int main()
{

    int *ptr1 = new int;
    *ptr1 = 80;

    float *ptr2 = new float;
    *ptr2 = 89.23;

    cout << "ptr1 = " << *ptr1 << endl;
    cout << "ptr2 = " << *ptr2 << endl;

    delete ptr1;
    delete ptr2;

    
    return 0;
}