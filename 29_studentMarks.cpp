#include <iostream>
using namespace std;
class student
{
    int rno;
    int hindi;
    int english;
    float per;

public:
    void setRno(int r)
    {
        rno = r;
    }
    void setMarks(int h, int e)
    {
        hindi = h;
        english = e;
        per = ((hindi + english) / 200.0) * 100;
    }

    void getResult()
    {
        cout << "student rno : " << rno << endl;
        cout << "hindi : " << hindi << endl;
        cout << "english : " << english << endl;
        cout << "per : " << per << endl;
        cout << "--------------------------" << endl;
    }
};
int main()
{
    student s1;
    s1.setRno(101);
    s1.setMarks(70, 40);
    s1.getResult();
    return 0;
}