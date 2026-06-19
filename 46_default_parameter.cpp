// default parameter value in function
#include <iostream>
using namespace std;
void add(int a = 7, int b = 90) // here paramter a have default value 7 and b have default value 90
{
    int c = a + b;
    cout << "sum = " << c << endl;
}
void displayStudent(string name, int age, float height, string city = "indore")
{
    cout << "student info : \n";
    cout << "student name : " << name << endl;
    cout << "student age : " << age << endl;
    cout << "student height : " << height << endl;
    cout << "student city : " << city << endl;
    cout << "----------------------" << endl;
}

void totalBill(int quantity, int price = 100)
{
    cout << "total bill : " << (quantity * price) << endl;
}
int main()
{

    totalBill(5, 200);
    totalBill(7, 100);
    totalBill(25);
    totalBill(8, 50);
    displayStudent("Ram", 12, 5.6, "ujjain");
    displayStudent("Daksh", 18, 3.6);
    displayStudent("Kuldeep", 20, 6.6);
    displayStudent("Khushi", 15, 5.3, "ratlam");
    displayStudent("Tanu", 20, 5.6);

    add(12, 20);
    add(40);
    add();
    return 0;
}