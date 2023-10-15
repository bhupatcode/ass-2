#include<iostream.h>
#include<conio.h>

class AB
{
	public:
	int a,b;



	AB()
	{
		a=5;
		b=4;
	}
	AB operator *(AB &a1)
	{
		AB s;
		s.a=a*a1.b;
		s.b=b*a1.a;
		return s;
	}

};
void main()
{
	AB a2,a3,a4;

	clrscr();
	a2.a=50;
	a3.b=90;
	a3.a=10;
	a2.b=40;
	a4=a2*a3;

	 cout<<"Addition A="<<a4.a<<endl<<"Addition B="<<a4.b;
	getch();
}