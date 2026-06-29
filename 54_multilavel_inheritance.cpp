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

class seniorProgramer : public programer
{
    int noOfprogramer;

public:
    void setNoOfProgramer(int n)
    {
        noOfprogramer = n;
    }
    void getNoOfprogramer()
    {
        cout << "no of programer : " << noOfprogramer << endl;
    }
};
int main()
{
    seniorProgramer p1;
    p1.setEmp(101, 45000);
    p1.setProgramer("python", "music player");
    p1.getEmp();
    p1.getProgramer();
    p1.setNoOfProgramer(6);
    p1.getProgramer();
    return 0;
}