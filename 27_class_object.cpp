#include <iostream>
using namespace std;
class instaUser
{
    string userName;
    int followers;
    int following;
    int noOfPost;

public:
    void setUser(string u, int fs, int fg, int p)
    {
        userName = u;
        followers = fs;
        following = fg;
        noOfPost = p;
    }

    void getUser()
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

    instaUser u1, u2, u3, u4;

    u1.setUser("Daksh", 15, 5, 0);
    u2.setUser("hello wolrd institue", 1200, 700, 200);

    u1.getUser();
    u2.getUser();
    return 0;
}