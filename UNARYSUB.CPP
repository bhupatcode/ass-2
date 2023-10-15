#include<iostream.h>
#include<conio.h>

class AB
{
	public:
	int a,b;

	AB()
	{
		a=b=10;
	}
	void operator --()
	{
		a=a-1;
		b=b-1;

	}
	void dis()
	{
		cout<<"A="<<a<<endl<<"B="<<b;

	}
};
void main()
{
	AB a1;
	clrscr();
	a1--;
	a1.dis();
	getch();
}