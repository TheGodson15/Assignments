#include<iostream>
using namespace std;

class student{
    public:
    string SName;
    int english;
    int hindi;
    int marathi;
    int maths;
    int science;
    void print(){
        cout<<"Student marks"<<SName;
        cout<<"English ="<<english<<endl;
        cout<<"Hindi ="<<hindi<<endl;
        cout<<"Marathi ="<<marathi<<endl;
        cout<<"Maths ="<<maths<<endl;
        cout<<"Science ="<<science<<endl;
    }
};

int main(){
    student s1;
    s1.SName="Akash";
    s1.english=97;
    s1.hindi=75;
    s1.marathi=57;
    s1.maths=86;
    s1.science=68;
    s1.print();
    student s2;
    s2.SName="Prakash";
    s2.english=94;
    s2.hindi=85;
    s2.marathi=73;
    s2.maths=76;
    s2.science=88;
    s2.print();
    
}