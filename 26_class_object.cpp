#include <iostream>
using namespace std;
class instaUser
{
public:
    string userName;
    int followers;
    int following;
    int noOfPost;
};
int main()
{

    instaUser u1, u2, u3, u4;

    u1.userName = "Daksh";
    u1.followers = 15;
    u1.following = 5;
    u1.noOfPost = 0;

    cout << "instaUser info : \n";
    cout << "userName : " << u1.userName << endl;
    cout << "followers : " << u1.followers << endl;
    cout << "following : " << u1.following << endl;
    cout << "noOfPost : " << u1.noOfPost << endl;

    return 0;
}