#include <iostream>
using namespace std;
int main()
{
    cout << "this program is start..." << endl;
    int x = -7;
    cout << "before try block " << endl;
    try
    {
        cout << "inside try block" << endl;
        if (x < 0)
        {
            throw x;
        }
        cout << "after throw stmnt" << endl;
    }
    catch (int x)
    {
        cout << "catch block is exicute" << endl;
    }
    cout << "after try catch /block" << endl;
    cout << "my program is finshed" << endl;

    return 0;
}