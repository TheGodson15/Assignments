// Create a class by the name of Fruits and add certain attributes 
// like taste-could be sweet sour citric etc, 
// size:small,medium,big , color , season etc. through the main method 
// create atleast two different objects and print their values

#include<iostream>
using namespace std;

class fruits{
    public:
    string taste;
    string size;
    string color;
    string season;
};

int main(){
    fruits f1;
    f1.taste="Banana";
    f1.size="medium";    
    f1.color="Yellow";
    f1.season="Winter";
    cout<<f1.taste<<endl;
    cout<<f1.size<<endl;
    cout<<f1.color<<endl;
    cout<<f1.season<<endl;
    fruits f2;
    f2.taste="Mango";
    f2.size="medium";    
    f2.color="yellow";
    f2.season="summer";
    cout<<f2.taste<<endl;
    cout<<f2.size<<endl;
    cout<<f2.color<<endl;
    cout<<f2.season<<endl;
    
    return 0;
}