#include <iostream>
using namespace std;
class emp
{
    string name;
    float sal;

public:
    void setEmp(string n, float f)
    {
        name = n;
        sal = f;
    }
    void displayEmp()
    {
        cout << "emp info : " << endl;
        cout << "emp name : " << name << endl;
        cout << "emp sallary : " << sal << endl;
        cout << "------------------------" << endl;
    }
};
int main()
{
    emp *ptr;
    emp e1;
    ptr = &e1;

    // e1.setEmp("ram", 12500);
    // e1.displayEmp();

    // (*ptr).setEmp("ram", 12500);
    // (*ptr).displayEmp();

    // arrow operator
    ptr->setEmp("ram", 12500);
    ptr->displayEmp();
    
    return 0;
}