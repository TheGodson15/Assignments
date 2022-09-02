// Reverse a num using while loop
#include <iostream>
using namespace std;

int main(){
    int num, n, rev=0, r;
    cout<< "Enter any Number Greater than 10 =";
    cin>>num;
    n=num;
    while (num>0)
    {
        r = num%10;
        cout<<"r= num%10 ="<<r<<"\n";
        rev = rev*10+r;
        cout<<"rev=rev*10+r="<<rev<<"\n";
        num=num/10;
        cout<<"num=num/10= "<<num<<"\n";
    }
    cout<<n<<"  the reverse of this number is =";
    cout<<rev;
    return 0;    
}