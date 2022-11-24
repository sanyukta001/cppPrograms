#include <iostream>
using namespace std;
class metres;
class Distance
{
	float feet;
	float inches;
	int n;
	public:
		Distance();
		Distance(int);
		Distance(float);
		Distance(float,float);
		float getfeet();
		float getinches();
		friend class metres;
		friend ostream& operator<<(ostream& out,Distance& ob);
		friend istream& operator>>(istream& in,Distance& ob);
		Distance(Distance& ob);
		Distance(metres& ob);
		void input();
		void display();
		Distance operator*(Distance ob);
		Distance operator+(Distance ob);
		friend void operator<(Distance& ob,metres& ob1);
		friend void operator>(Distance& ob, metres& ob1);
		friend void operator!=(Distance& ob, metres& ob1);
		
		
};
ostream& operator<<(ostream& out,Distance& ob)
{
	out<<"Feets are: "<<ob.feet<<" inches are: "<<ob.inches<<endl;
	return out;
}
istream& operator>>(istream& in,Distance& ob)
{
	in>>ob.feet;
	in>>ob.inches;
	return in;
}
Distance::Distance()
{
	feet = 0.0;
	inches = 0.0;
}
Distance::Distance(int x)
{
	n = x;
}
Distance::Distance(float y)
{
	feet = y;
}
Distance::Distance(float x, float y)
{
	inches = x;
	feet = y;
}
float Distance::getfeet()
{
	return feet;
}
float Distance::getinches()
{
	return inches;
}
void Distance::input()
{
	cout<<"Enter the inches and feet"<<endl;
	cin>>(*this);
}
void Distance::display()
{
	cout<<(*this);
}
Distance::Distance(Distance& ob)
{
	this->inches = ob.inches;
	this->feet = ob.feet;
}
Distance Distance::operator*(Distance ob)
{
	this->feet = ob.feet*0.305;
	this->inches = ob.inches*0.0254;
	return *this;
}
Distance Distance::operator+(Distance ob)
{
	Distance res;
	res.feet = this->feet + ob.feet;
	res.inches = this->inches + ob.inches;
	return res;
}


class metres
{
	float m, cm;
	public:
		metres();
		metres(float,float);
		void input();
		int getm();
		int getcm();
		void display();
		friend ostream& operator<<(ostream& out,metres& ob);
		friend istream& operator>>(istream& in,metres& ob);
		friend class Distance;
		metres(Distance& ob);
		friend void operator<(Distance& ob,metres& ob1);
		friend void operator>(Distance& ob, metres& ob1);
		friend void operator!=(Distance& ob, metres& ob1);
};
metres::metres()
{
	m = 0.0;
	cm = 0.0;
}
metres::metres(float a,float b)
{
	m = a;
	cm = b;
}
ostream& operator<<(ostream& out,metres& ob)
{
	out<<"metres are: "<<ob.m<<" centimetres are: "<<ob.cm<<endl;
	return out;
}
istream& operator>>(istream& in,metres& ob)
{
	in>>ob.m;
	in>>ob.cm;
	return in;
}
void metres ::input()
{
	cout<<"Enter the meter and centimeter"<<endl;
	cin>>(*this);
}
int metres::getm()
{
	return m;
}
int metres::getcm()
{
	return cm;
}
void metres::display()
{
	cout<<(*this);
}
metres::metres(Distance& ob)
{
	m = ob.getfeet()*0.305;
	cm = ob.getinches()*0.0254;
}
Distance::Distance(metres& ob)
{
	inches = ob.getcm()/0.0254;
	feet = ob.getm()/0.305;
}
void operator<(Distance& ob,metres& ob1)
{
	if(ob.getinches() < ob1.getm())
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	if(ob.getfeet() < ob1.getcm())
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
}
void operator>(Distance& ob,metres& ob1)
{
	if(ob.getinches() > ob1.getm())
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	if(ob.getfeet() > ob1.getcm())
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
}
void operator!=(Distance& ob,metres& ob1)
{
	if(ob.getinches() != ob1.getm())
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	if(ob.getfeet() != ob1.getcm())
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
}
int main()
{
	Distance ob;
	ob.input();
	metres ob1;
	ob1.input();
	metres res = metres(ob);
	res.display();
	//Distance ob1;
	//ob>ob1;
    //ob!=ob1;
	//Distance ob, ob1,ob2,ob3,ob4;
	//ob1.input();
	//ob = ob*ob1;
	//ob.display();
	//ob2.input();
	//ob3 = ob3*ob2;//ob3 = ob3.operator*(ob2)
	//ob3.display();
	//ob4 = ob + ob3;
	//ob4.display();
	return 0;
}