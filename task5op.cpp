#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);


int main()
{
	//In center for resolution of 1920*1080

	int x=70,y=20;
	system("cls");
	gotoxy(x,y);

	cout<<"########  #####   #####    ##    ##   #####  ##   ##     #####   ##     ######   "<<endl;
	
	y++;
	gotoxy(x,y);
	cout<<"##       ##   ##  ##  ##   ##    ##  ##   ## ###  ##    ##   ##  ##       ##     "<<endl;
	
	y++;
	gotoxy(x,y);
	cout<<"##       ##   ##  ##   ##  ##    ##  ##   ## #######    ##   ##  ##       ##     "<<endl;
	
	y++;
	gotoxy(x,y);
	cout<<"#####    #######  ######   ########  ####### #######    #######  ##       ##     "<<endl;
	
	y++;
	gotoxy(x,y);
	cout<<"##       ##   ##  ##   ##  ##    ##  ##   ## ##  ###    ##   ##  ##       ##     "<<endl;
	
	y++;
	gotoxy(x,y);
	cout<<"##       ##   ##  ##   ##  ##    ##  ##   ## ##   ##    ##   ##  ##       ##     "<<endl;
	
	y++;
	gotoxy(x,y);
	cout<<"##       ##   ##  ##    ## ##    ##  ##   ## ##   ##    ##   ##  ###### ######   "<<endl;

	return 0;
}
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

