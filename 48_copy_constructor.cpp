#include <iostream>
using namespace std;
class dog
{
    string color;
    int age;

public:
    dog() {}
    dog(string c, int a)
    {
        color = c;
        age = a;
    }

    dog(dog &obj) // copy constructor
    {
        cout << "copy constructor is called\n";
        color = obj.color;
        age = obj.age + 2;
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
    dog d1("black", 12), d2(d1), d3 = d1, d4;
    d4 = d1;     // default copy constructor  is called
    dog d5 = d1; // our copy constructor is called
    d1.getDog();
    d2.getDog();
    d3.getDog();
    d4.getDog();
    d5.getDog();

    return 0;
}