#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;

public:
    student(string n, int r, float p)
    {
        name = n;
        rno = r;
        per = p;
    }

    void getResultCard()
    {
        cout << "<--------- Student Result Card --------->\n";
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
};
int main()
{
    student s1("ram sharma", 101, 56.78);
    student s2("rydham palte", 102, 90);
    student s3("raj patidar", 103, 23);

    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    return 0;
}