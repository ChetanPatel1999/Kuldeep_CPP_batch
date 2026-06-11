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
    employe e1, e2, e3;
    e1.setEmploye();
    e2.setEmploye();
    e3.setEmploye();

    e1.getEmploye();
    e2.getEmploye();
    e3.getEmploye();

    return 0;
}