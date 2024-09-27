#include<iostream>
using namespace std;

void pet(int holidays);

int main()
{
	int holidays;
	cout<<"Enter number of holidays:";
	cin>>holidays;

	pet(holidays);

	return 0;
}
void pet(int holidays)
{
	int working_days,game_time,current_norm,timeMins;
	double timeHours;

	working_days=365-holidays;

	//63 mins on working day
	//127 mins on holiday

	game_time=(working_days*63+holidays*127);

	//avg norm 30000
	current_norm=(30000-game_time);

	if(current_norm<0)
	{
		current_norm*=-1;
	}	

	timeHours=(current_norm/60);
	timeMins=((current_norm%60));
	
	if(game_time<30000)
	{
		cout<<"Tom sleeps well!"<<endl;
		cout<<timeHours<<" hours and "<<timeMins<<" minutes less for play!"<<endl;	
	}
	else
	{
		cout<<"Tom will run away!"<<endl;
		cout<<timeHours<<" hours and "<<timeMins<<" minutes for play!"<<endl;		
	}
	
}