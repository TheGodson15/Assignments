#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,y;
    cout<<"Enter First No";
    cin>>a;
    cout<<"Enter Second No";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swaping a is  "<<a<<" and b is  "<<b;
    return 0;
}
