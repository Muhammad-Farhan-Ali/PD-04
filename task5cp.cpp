#include<iostream>
using namespace std;

void possibleBonus(int your_position,int friend_position);

int main()
{
	int your_position,friend_position;
	cout<<"enter your position:";
	cin>>your_position;
	cout<<"Enter your friend's position:";
	cin>>friend_position;
	
	possibleBonus(your_position,friend_position);

	return 0;
}
void possibleBonus(int your_position,int friend_position)
{
	//friend is always ahead
	int x=friend_position-your_position;
	if(x<=6)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false";
	}
}