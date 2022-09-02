#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i,n, table;
    cout<<"Enter any Positive Number";
    cin>>n;

    cout<<"Multiplication table of given number is ["<<n<<"]";
    for (i = 1; i < 10; i++)
    {
        table=n*i;
        cout<<"\n"<<n<<"x"<<i<<"="<<table;
    }
    
    return 0;
}
