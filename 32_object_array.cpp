#include <iostream>
using namespace std;
class employe
{
    int id;
    float salary;

public:
    void setEmploye()
    {
        cout << "\nenter emp info : " << endl;
        cout << "enter id : ";
        cin >> id;
        cout << "enter salary : ";
        cin >> salary;
    }
    void getEmploye()
    {
        cout << "\nemp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp salary : " << salary << endl;
        cout << "---------------------------" << endl;
    }
};

int main()
{
    employe e[5];
    int i;

    for (i = 0; i < 5; i++) // 1
    {
        e[i].setEmploye();
    }

    for (i = 0; i < 5; i++) // 1
    {
        e[i].getEmploye();
    }

    return 0;
}