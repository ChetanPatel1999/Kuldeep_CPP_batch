#include <iostream>
using namespace std;
struct student
{
    string name;
    int rno;
    float per;
};
int main()
{
    student s1, s2, s3;

    s1.name = "kuldeep";
    s1.rno = 101;
    s1.per = 5;

    s2.name = "Daksh";
    s2.rno = 102;
    s2.per = -10;

    cout << "student 1 info : " << endl;
    cout << "name :  " << s1.name << endl;
    cout << "rno :  " << s1.rno << endl;
    cout << "per :  " << s1.per << endl;

    cout << "student 2 info : " << endl;
    cout << "name :  " << s2.name << endl;
    cout << "rno :  " << s2.rno << endl;
    cout << "per :  " << s2.per << endl;

    return 0;
}