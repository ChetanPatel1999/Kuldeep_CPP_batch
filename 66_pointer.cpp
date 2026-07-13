#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr;
    ptr = &arr[0];
    printf("%d \n", *ptr); // 12
    ptr++;
    printf("%d \n", *ptr); // 34
    ptr++;
    printf("%d \n", *ptr); // 56
    ptr++;
    printf("%d \n", *ptr); // 78
    ptr++;
    printf("%d \n", *ptr); // 90
    return 0;
}