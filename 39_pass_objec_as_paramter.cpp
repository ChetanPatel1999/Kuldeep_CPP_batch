#include <iostream>
#include <iomanip>
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
    void setStudent(string n, int r, float p) // s2
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

    static void displayTotalStudent() // s3
    {
        cout << "total student : " << totalStudent << endl;
        cout << "---------------------------------------\n\n";
    }
    static void displayTotalResult()
    {
        cout << "total Pass : " << totalPass << endl;
        cout << "total Fail : " << totalFail << endl;
        cout << "---------------------------------------\n\n";
    }
    static void classDetail()
    {
        int age = 12;
        cout << "inside class many methods avialbel" << endl;
        cout << "setstudent method" << endl;
        cout << "getResultCard method" << endl;
        cout << "displayTotalStudent method" << endl;
        cout << "many more method method" << endl;
        cout << "---------------------------------" << endl;
    }

    void average(student obj) // s1.average()
    {
        float avg;
        avg = (per + obj.per) / 2.0;
        cout << "average = " << avg << endl;
    }

    static void average(student obj1, student obj2) // s1.average()
    {
        float avg;
        avg = (obj1.per + obj2.per) / 2.0;
        cout << "average = " << avg << endl;
    }

    static void average(student obj1, student obj2, student obj3) // s1.average()
    {
        float avg;
        avg = (obj1.per + obj2.per + obj3.per) / 3.0;
        cout << fixed << setprecision(2);
        cout << "average = " << avg << endl;
    }
};
int student::totalStudent = 0;
int student::totalPass = 0;
int student::totalFail = 0;
string student::collageName = "Holker Science collage";
int main()
{
    student s1, s2, s3, s4;

    s1.setStudent("ram sharma", 101, 56);
    s2.setStudent("rydham palte", 102, 12);
    s3.setStudent("raj patidar", 103, 23);
    s4.setStudent("shyam patidar", 104, 6);

    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();
    student::displayTotalStudent();
    student::displayTotalResult();

    student::classDetail();

    s1.average(s2);

    student::average(s1, s2);
    student::average(s1, s2, s3);

    return 0;
}