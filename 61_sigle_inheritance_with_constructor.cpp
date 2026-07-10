#include <iostream>
using namespace std;
class emp
{
    int id;
    float salary;

public:
    emp(int i, float s)
    {
        id = i;
        salary = s;
    }
    void getEmp()
    {
        cout << "Emp info : \n";
        cout << "id : " << id << endl;
        cout << "salary : " << salary << endl;
    }
};

class programer : public emp
{
    string lang;
    string project;

public:
    programer(int i, float s, string l, string p) : emp(i, s)
    {
        lang = l;
        project = p;
    }
    void getProgramer()
    {
        cout << "language : " << lang << endl;
        cout << "project : " << project << endl;
    }
};
int main()
{
    programer p1(101, 12000, "python", "musiq player");
    p1.getEmp();
    p1.getProgramer();
    return 0;
}