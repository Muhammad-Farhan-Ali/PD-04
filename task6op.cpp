#include<iostream>
using namespace std;

void print_h();
void print_a();
void print_s();
void print_n();

int main()
{
	print_h();
	print_a();
	print_s();
	print_s();
	print_a();
	print_n();

	return 0;
}

void print_h()
{
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"#######"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<endl;
}
void print_a()
{
	cout<<" ##### "<<endl;
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"#######"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<endl;
}
void print_s()
{
	cout<<" ######   "<<endl;
	cout<<"##    ## "<<endl;
	cout<<" ##       "<<endl;
	cout<<"  ####   "<<endl;
	cout<<"      ## "<<endl;
	cout<<" ##    ##  "<<endl;
	cout<<"  ######   "<<endl;
	cout<<endl;
}
void print_n()
{
	cout<<"##   ##"<<endl;
	cout<<"#### ##"<<endl;
	cout<<"#######"<<endl;
	cout<<"## ####"<<endl;
	cout<<"##  ###"<<endl;
	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
	cout<<endl;
}