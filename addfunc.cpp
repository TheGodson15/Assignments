#include <iostream>
using namespace std;

int subtraction(int num1,int num2)
{
	int num3;
	cout<<"Enter num1";
	cin>>num1;
	cout<<"Enter num2";
	cin>>num2;
	num3=num1-num2;
	cout<<"subtracted value is:"<<num3;
	return num3;
}

int add(int a,int b)
{
	int c;
	int num1;
	int num2;
	//int subtraction;
	cout<<"Enter a";
	cin>>a;
	cout<<"Enter b";
	cin>>b;
	c=a+b;
	cout<<"Added value is:"<<c;
	subtraction(num1,num2);
	return 0;
}


int main()
{
	int a;
	int b;
	add(a,b);
}
