#include<iostream>
using namespace std;

void flowershop(int redRose,int whiteRose,int tulip);

int main()
{
	int redRose,whiteRose,tulip;
	cout<<"Red Rose:";
	cin>>redRose;
	cout<<"White Rose:";
	cin>>whiteRose;
	cout<<"Tulip:";
	cin>>tulip;

	flowershop(redRose,whiteRose,tulip);

	return 0;
}
void flowershop(int redRose,int whiteRose,int tulip)
{
	//red rose 2.00$
	//white rose 4.10$
	//red rose 2.50$

	double price,discount;
	price = (redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
	cout<<"Orignal price: $"<<price<<endl;
	
	if(price>200)
	{
		discount=20;
		price=price-(price*discount/100);
		cout<<"Price after discount: $"<<price<<endl;
	}
	else
	{
		cout<<"No discount applicable!";
	}

}