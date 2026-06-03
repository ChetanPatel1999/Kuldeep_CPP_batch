#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    float height;
    char gender;

    cout << "enter your name : ";
    cin >> name;

    cout << "enter you age : ";
    cin >> age;

    cout << "enter your height : ";
    cin >> height;

    cout << "enter your gender : ";
    cin >> gender;

    cout << "person info \n";
    cout << "persone name = " << name << endl;
    cout << "person age = " << age << endl;
    cout << "person height = " << height << endl;
    cout << "person gender = " << gender << endl;
    return 0;
}