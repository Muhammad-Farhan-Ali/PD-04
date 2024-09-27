#include<iostream>
using namespace std;

void longestTime(int hours,int minutes);

int main()
{
	int minutes,hours;
	cout<<"Enter the number of hours:";
	cin>>hours;
	cout<<"Enter the number of minutes:";
	cin>>minutes;

	longestTime(hours,minutes);
	
	return 0;
}
void longestTime(int hours,int minutes)
{
	int mins=minutes/60;
	if(hours>mins)
	{
		cout<<hours<<endl;
	}
	else
	{
		cout<<minutes<<endl;
	}
}