#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr;
    ptr = &arr[0];

    int i;
    cout << "enter array element : \n";
    for (i = 0; i < 5; i++)
    {
        cin >> (*ptr);
        ptr++;
    }

    ptr = &arr[0];

    printf("array elements display by pointer are : ");
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}