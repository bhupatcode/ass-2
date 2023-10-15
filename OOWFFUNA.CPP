#include<iostream>
#include<conio.h>


class AB
{
	int a,b,c;

	public:
	int get(int x,int y,int z);
	int dis();
	friend AB operator -(AB a5);

};
int AB :: get(int x,int y,int z)
{
       	int x,y,z;
	cout<<"X=";
	cin>>x;

	cout<<"Y=";
	cin>>y;

	cout<<"Z=";
	cin>>z;        
	a=x;
	b=y;
	c=z;

}
int AB :: dis()
{
	    std::cout<<a<<" ";
	    std::cout<<b<<" ";
	    std::cout<<c;
}
AB operator -(AB a5)
{
	AB d;
	d.a=-a5.a;
	d.b=-a5.b;
	d.c=-a5.c;


	return d;
}s
int main()
{

	AB a2,a3;
	a2.get(x,y,z);
	std::cout<<"NORMAL PRINT \n";
	a2.dis();
	a3=-a2;
	std::cout<<"AFTER PERFORM O.O.W.F.F";
	a3.dis();
	getch();
}
