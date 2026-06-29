#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;
    float fees;

public:
    void setStudent(string n, int r, float f)
    {
        name = n;
        rno = r;
        fees = f;
    }
    void getStudent()
    {
        cout << "student info : " << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student fees : " << fees << endl;
    }
};

class EngStd : public Student
{
    string branch;
    int sem;

public:
    void setEngStudent(string b, int s)
    {
        branch = b;
        sem = s;
    }
    void getEngStudent()
    {
        cout << "branch : " << branch << endl;
        cout << "sem : " << sem << endl;
    }
};

class MediStd : public Student
{
    string speci;
    int prof;

public:
    void setMediStudent(string b, int s)
    {
        speci = b;
        prof = s;
    }
    void getMediStudent()
    {
        cout << "speci : " << speci << endl;
        cout << "prof : " << prof << endl;
    }
};

int main()
{
    EngStd s1;
    s1.setStudent("ram sharma", 101, 450000);
    s1.setEngStudent("CS", 5);
    s1.getStudent();
    s1.getEngStudent();

    cout << "-------------------------------" << endl;

    MediStd s2;
    s2.setStudent("raj patel", 102, 200000);
    s2.setMediStudent("artho", 3);
    s2.getStudent();
    s2.getMediStudent();

    return 0;
}