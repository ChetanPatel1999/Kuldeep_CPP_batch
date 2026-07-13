#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr;
    ptr = &arr[0];

    int i;
    printf("array elements display by pointer are : ");
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    
    return 0;
}