#include <iostream>
using namespace std;
class dog
{
    string color;
    int age;

public:
    // dog() // non parameterized constroctor
    // {
    //     color = "red";
    //     age = 12;
    // }

    dog() // non parameterized constroctor
    {
        cout << "enter dog details ....\n";
        cout << "enter color : ";
        cin >> color;
        cout << "enter age : ";
        cin >> age;
    }
    // dog(string c, int a ) //paramterized constructor
    // {
    //     color = c;
    //     age = a;
    // }
    dog(string c, int a = 1) // default paramterized constructor
    {
        color = c;
        age = a;
    }
    void getDog()
    {
        cout << "\ndog details ...\n";
        cout << "color : " << color << endl;
        cout << "age : " << age << endl;
        cout << "-------------------" << endl;
    }
};
int main()
{
    dog d1, d2("white", 8), d3, d4("brown");
    d1.getDog();
    d2.getDog();
    d3.getDog();
    d4.getDog();
    return 0;
}