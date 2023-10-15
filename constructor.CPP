#include<iostream.h>
#include<conio.h>

class AB
{
	public:
	AB()
	{
	cout<<"THIS iS CONSTRUCTOR "<<endl;
	}
	~AB()
	{
	cout<<"THIS IS DESTROY"<<endl;
	}
};
void main()
{

	AB a1;

	getch();

}