#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;

public:
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void display()
    {
        cout << "data info : " << endl;
        cout << "num1 : " << num1 << endl;
        cout << "num2 : " << num2 << endl;
        cout << "----------------------" << endl;
    }
    void sameObjectSum()
    {
        int sum = num1 + num2;
        cout << " sum = " << sum << endl;
        cout << "----------------------" << endl;
    }

    void diffObjectSum(data obj)
    {
        int sum1 = num1 + obj.num1;
        int sum2 = num2 + obj.num2;
        cout << " sum1 = " << sum1 << endl;
        cout << " sum2 = " << sum2 << endl;
        cout << "----------------------" << endl;
    }

    static void diffObjectSum(data obj1, data obj2)
    {
        int sum1 = obj1.num1 + obj2.num1;
        int sum2 = obj1.num2 + obj2.num2;
        cout << " sum1 = " << sum1 << endl;
        cout << " sum2 = " << sum2 << endl;
        cout << "----------------------" << endl;
    }
};

int main()
{
    data d1, d2;
    d1.setData(12, 7);
    d2.setData(10, 30);
    d1.display();
    d2.display();
    d1.sameObjectSum();
    d2.sameObjectSum();

    d2.diffObjectSum(d1);

    data::diffObjectSum(d1, d2);

    return 0;
}