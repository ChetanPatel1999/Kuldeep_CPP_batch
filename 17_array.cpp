#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;

    cout << "enter array element : " << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "array element are : ";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}