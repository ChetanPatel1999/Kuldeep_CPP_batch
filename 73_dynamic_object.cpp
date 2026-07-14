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
    emp *ptr = new emp;
    ptr->setEmp("ram", 12500);
    ptr->displayEmp();
    delete ptr;
        
    return 0;
}