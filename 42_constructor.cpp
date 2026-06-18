#include <iostream>
using namespace std;
class employ
{
    int id;
    float salary;

public:
    employ(int i, float s)
    {
        id = i;
        salary = s;
    }
    void getEmploy()
    {
        cout << "employ info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp salary: " << salary << endl;
        cout << "------------------------------" << endl;
    }
};
int main()
{
    employ e1(101, 12000.80), e2(102, 15000);
    e1.getEmploy();
    e2.getEmploy();
    return 0;
}