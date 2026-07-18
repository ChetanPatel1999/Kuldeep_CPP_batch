// write data inside file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create object of ofstream
    ofstream write;
    // file open or create using open method
    write.open("C:\\Users\\PC\\Desktop\\daksh\\hello.txt");

    // write some data inside file
    write << "hello i am chetan" << endl;
    write << "i am a teacher" << endl;

    // file close
    write.close();
    return 0;
}
