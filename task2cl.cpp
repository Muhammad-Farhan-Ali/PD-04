#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void print_maze();

int main()
{
	system("cls");
	print_maze();

	return 0;
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void print_maze()
{
	cout<<"########################"<<endl;
	cout<<"#                      #"<<endl;
	cout<<"#                      #"<<endl;
	cout<<"#                      #"<<endl;
	cout<<"#                      #"<<endl;
	cout<<"#                      #"<<endl;
	cout<<"#                      #"<<endl;
	cout<<"#                      #"<<endl;
	cout<<"########################"<<endl;
}