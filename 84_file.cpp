// write data inside file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create object of ofstream
    // open i file using constructor
    ofstream write("C:\\Users\\PC\\Desktop\\daksh\\hello.txt");

    // write some data inside file
    write << "hello i am ram sharma" << endl;
    write << "i am a doctor" << endl;

    // file close
    write.close();
    return 0;
}
