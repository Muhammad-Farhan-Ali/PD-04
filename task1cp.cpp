#include<iostream>
using namespace std;

void is_equal(int num1,int num2);

int main()
{
	int num1,num2;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;

	is_equal(num1,num2);

	return 0;
}
void is_equal(int num1,int num2)
{
	if(num1 == num2)
	{
	   cout<<"True!";
	}
	else
	{
	   cout<<"False!";
	}
}