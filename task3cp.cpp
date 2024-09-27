#include<iostream>
using namespace std;

void total_price(string country,double price);

int main()
{
	double ticket_price;
	string country;
	while(true)
	{
	cout<<"Enter the name of country:";
	cin>>country;
	cout<<"Enter the price of ticket: $";
	cin>>ticket_price;

	total_price(country,ticket_price);
	}
	return 0;
}
void total_price(string country,double price)
{
	double discount,total;
	if(country=="Pakistan")
	{
		discount=5;
	}
	else if(country=="Ireland")
	{
		discount=10;
	}
	else if(country=="India")
	{
		discount=20;
	}
	else if(country=="England")
	{
		discount=30;
	}
	else if(country=="Canada")
	{
		discount=45;
	}
	else
	{
		cout<<"Invalid input!";
	}
	total=price-(price*discount/100);
	cout<<"Final price after discount: $"<<total<<endl;

}