#include<iostream>
#include<cstring>
using namespace std;
class Staff
{
	public:string name;int code;
	public:
	Staff()
	{
	}
	Staff(string s,int c)
	{
	 name=s;
	 code=c;
	}
	virtual void sal()=0;
};
class Officer:public Staff
{
	public:int grade, salary;
	public:
	Officer()
	{
	}
	Officer(string s,int c,int g):Staff(s,c)
	{
	 grade=g;
	}
	void sal()
	{	salary=5200;
	}
	void display()
	{
	cout<<" name = "<<name<<" code = "<<code<<" salary "<<salary;
	cout<<" grade = "<<grade;
	}
	
};
class Teacher:public Staff
{
	public:string subject;int salary;
	public:
	Teacher()
	{
	}
	Teacher(string s,int c,string sub):Staff(s,c)
	{
	 subject=sub;
	}
	void sal()
	{	salary=6000;
	}
	void display()
	{
	cout<<" name = "<<name<<" code = "<<code<<" salary "<<salary;
	cout<<" subject = "<<subject;
	}
};
class Typist:virtual public Staff
{
	public: int speed;
	public:
	Typist()
	{
	}
	Typist(string s,int c,int sp):Staff(s,c)
	{
	 speed=sp;
	}
	void display()
	{
	cout<<" name = "<<name<<" code = "<<code;
	}
};
class casual_typist:public Typist
{
	public:
	int daily_wages, salary;

	casual_typist()
	{
	}
	casual_typist(string s,int c,int sp,int d):Typist(s,c,sp)
	{
	 daily_wages=d;
	}
	void sal()
	{	salary=2400;
	}
	void display()
	{
	cout<<" name = "<<name<<" code = "<<code<<" speed = "<<speed<<" salary "<<salary;
	cout<<" daily_wages = "<<daily_wages;
	}
};
class regular_typist:public Typist
{
	public:int remuneration,salary;
	
	public:
	regular_typist()
	{
	}
	regular_typist(string s,int c,int sp,int r):Typist(s,c,sp)
	{
	 remuneration=r;
	}
	void sal()
	{	salary=3400;
	}
	void display()
	{Typist::display();
	cout<<" speed = "<<speed<<" salary "<<salary;
	cout<<" remuneration = "<<remuneration;
	}
};
int main()
{	
	int choice,c; string s;
	cout<<" enter name ";
	cin>>s;
	cout<<" enter code ";
	cin>>c;
	cout<<" enter 1 for officer , 2 for teacher and 3 for typist ";
	cin>>choice;
	if(choice==1)
	{	int gr;
		cout<<" enter grade ";
		cin>>gr;
		Officer obj1(s,c,gr);
		obj1.sal();
		obj1.display();
	}
	else if(choice == 2)
	{
		string sub;
		cout<<" enter subject ";
		cin>>sub;
		Teacher obj2(s,c,sub);
		obj2.sal();
		obj2.display();
	}
	else if(choice == 3)//13465
	{	int t,sp;
		cout<<" enter speed ";
		cin>>sp;
		cout<<" enter 1 for casual regular and 2 for regular regular ";
		cin>>t;
		if(t==1)
		{
			int dw;
			cout<<" enter daily wages ";
			cin>>dw;
			casual_typist obj3(s,c,sp,dw);
			obj3.sal();
			obj3.display();
		}
		else
		{
			int dw;
			cout<<" enter remuneration ";
			cin>>dw;
			regular_typist obj4(s,c,sp,dw);
			obj4.sal();
			obj4.display();
		}
	}
	else
	{
	 cout<<" invalid choice ";
	}
return 0;
}