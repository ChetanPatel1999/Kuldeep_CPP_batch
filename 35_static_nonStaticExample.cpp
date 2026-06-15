#include <iostream>
using namespace std;
class student
{
    string name;               // non static data member
    int rno;                   // non static data member
    float per;                 // non static data member
    static int totalStudent;   // static data member
    static int totalPass;      // static data member
    static int totalFail;      // static data member
    static string collageName; // static data member

public:
    void setStudent(string n, int r, float p)
    {
        name = n;
        rno = r;
        per = p;
        totalStudent++;
        if (per > 33)
        {
            totalPass++;
        }
        else
        {
            totalFail++;
        }
    }

    void getResultCard()
    {
        cout << "<--------- Student Result Card --------->\n";
        cout << "<---------" << collageName << "--------->\n";
        cout << "          student name : " << name << endl;
        cout << "          student rno : " << rno << endl;
        cout << "          student per : " << per << endl;
        if (per >= 33)
        {
            cout << "          student pass " << endl;
        }
        else
        {
            cout << "          student fail " << endl;
        }
        cout << "---------------------------------------\n\n";
    }

    void displayTotalStudent()
    {
        cout << "total student : " << totalStudent << endl;
        cout << "---------------------------------------\n\n";
    }
    void displayTotalResult()
    {
        cout << "total Pass : " << totalPass << endl;
        cout << "total Fail : " << totalFail << endl;
        cout << "---------------------------------------\n\n";
    }
};
int student::totalStudent = 0;
int student::totalPass = 0;
int student::totalFail = 0;
string student::collageName = "Holker Science collage";
int main()
{
    student s1, s2, s3, s4;

    s1.setStudent("ram sharma", 101, 56.78);
    s2.setStudent("rydham palte", 102, 12);
    s3.setStudent("raj patidar", 103, 23);
    s4.setStudent("shyam patidar", 104, 6);

    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();

    s1.displayTotalStudent();
    s1.displayTotalResult();

    return 0;
}