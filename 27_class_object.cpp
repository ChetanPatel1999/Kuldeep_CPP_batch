#include <iostream>
using namespace std;
class instaUser
{
    string userName; // data members
    int followers;
    int following;
    int noOfPost;

public:
    void setUser(string user, int fs, int fg, int p) // setter method
    {
        userName = user;
        followers = fs;
        following = fg;
        noOfPost = p;
    }

    void getUser() // getter method
    {
        cout << "instaUser info : \n";
        cout << "userName : " << userName << endl;
        cout << "followers : " << followers << endl;
        cout << "following : " << following << endl;
        cout << "noOfPost : " << noOfPost << endl;
        cout << "--------------------------\n";
    }
};
int main()
{
    instaUser u1, u2, u3;

    u1.setUser("Daksh", 15, 5, 0);

    u2.setUser("hello wolrd institue", 1200, 700, 200);

    u3.setUser("kuldeep", 1250, 550, 10);

    u1.getUser();
    u2.getUser();
    u3.getUser();

    return 0;
}