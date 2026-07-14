#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int[5];
    int *temp = ptr;

    int i;
    cout << "enter array element : \n";
    for (i = 0; i < 5; i++)
    {
        cin >> (*ptr);
        ptr++;
    }

    ptr = temp; // 400
    printf("display array element : \n");
    for (i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    int sum = 0;
    ptr = temp;
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    cout << "\nsum of array element are : " << sum << endl;

    ptr = temp;
    delete ptr;
    return 0;
}