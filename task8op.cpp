#include<iostream>
using namespace std;

void printMenu();
void calculateAggregate(string name,double matricMarks,double interMarks,double ecatMarks);
void compareMarks(string Std1,int ecatMarksStd1,string Std2,int ecatMarksStd2);

int main()
{
	int x;
	double matric,inter,ecat;
	int ecat1,ecat2;
	string name,Std1,Std2;

	printMenu();
	cin>>x;

	if(x==1)
	{
		cout<<"Enter your name:";
		cin>>name;
		cout<<"Enter marks in matric:";
		cin>>matric;
		cout<<"Enter marks in inter:";
		cin>>inter;
		cout<<"Enter marks in ecat:";
		cin>>ecat;
		calculateAggregate(name,matric,inter,ecat);
	}
	else if(x==2)
	{
		cout<<"Enter student1 name:";
		cin>>Std1;
		cout<<"Enter student1 ecat marks:";
		cin>>ecat1;
		cout<<"Enter student2 name:";
		cin>>Std2;
		cout<<"Enter student2 ecat marks:";
		cin>>ecat2;
		compareMarks(Std1,ecat1,Std2,ecat2);
	}	
	else
	{
		cout<<"Invalid input!"<<endl;
	}
	
	return 0;
}


void printMenu()
{
	cout<<"***********************************************"<<endl;
	cout<<"UNIVERSITY OF ENGINEERING AND TECNOLOGY, LAHORE"<<endl;
	cout<<"***********************************************"<<endl;
	cout<<"1.Calculate aggregate!"<<endl;
	cout<<"2.Compare marks!"<<endl;
}
void calculateAggregate(string name,double matricMarks,double interMarks,double ecatMarks)
{
	double agg = (((matricMarks/1100.0)*0.3) + ((interMarks/550.0)*0.3) + ((ecatMarks/400.0)*0.4))*100;
	cout<<"Aggregate of "<<name<<" is "<<agg<<endl;
}
void compareMarks(string Std1,int ecatMarksStd1,string Std2,int ecatMarksStd2)
{
	if(ecatMarksStd1>ecatMarksStd2)
	{
		cout<<Std1<<" is Roll no. 1"<<endl<<Std2<<" is Roll no. 2"<<endl;
	}
	else
	{
		cout<<Std2<<" is Roll no. 1"<<endl<<Std1<<" is Roll no. 2"<<endl;
	}

}