#include <iostream>
using namespace std;
class employe
{
    int id;
    float salary;

public:
    void setEmploye(int i, float f)
    {
        id = i;
        salary = f;
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
    e1.setEmploye(101, 14000);
    e2.setEmploye(102, 6000);
    e1.getEmploye();
    e2.getEmploye();

    return 0;
}