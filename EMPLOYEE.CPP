#include<conio.h>
#include<iostream.h>
class employee
{
	int eid,i;
	char ename[15];
	char department[15];
	int salary;

	public:
	employee()
	{
		clrscr();
		cout<<"enter eid:";
		cin>>eid;
		cout<<"enter ename:";
		cin>>ename;
		cout<<"enter department:";
		cin>>department;
		cout<<"enter salary:";
		cin>>salary;
		getch();
	}
	void display()
	{
		clrscr();
		cout<<"\n eid:"<<eid;
		cout<<"\n ename:"<<ename;
		cout<<"\n department:"<<department;
		cout<<"\n salary:"<<salary;
	}
};
void main()
{
	employee e;
	e.display();
	clrscr();
	getch();
};