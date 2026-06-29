#include <iostream>
using namespace std;
class emp
{
    int id;
    float salary;

public:
    void setEmp(int i, float s)
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
    void setProgramer(string l, string p)
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
    programer p1, p2;
    p1.setEmp(101, 45000);
    p1.setProgramer("python", "music player");
    p1.getEmp();
    p1.getProgramer();
    return 0;
}