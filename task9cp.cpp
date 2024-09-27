#include<iostream>
using namespace std;

void tpChecker(int people,int tp);

int main()
{
	int people,tp;
	cout<<"Enter number of people in the household:";
	cin>>people;
	cout<<"Enter rolls of TP (Tissue Paper):";
	cin>>tp;

	tpChecker(people,tp);

	return 0;
}
void tpChecker(int people,int tp)
{
	//14 days to stay home
	//1 person uses 57 sheets per day
	//1 tp has 500 shheets

	int total_sheets=500*tp;
	int sheets_used_per_day=57*people;

	int days=total_sheets/sheets_used_per_day;

	if(days<14)
	{
		cout<<"Tp will only last "<<days<<" days,But more!"<<endl;
	}
	else
	{
		cout<<"Tp will last "<<days<<" days,Don't panic!"<<endl;
	}

}