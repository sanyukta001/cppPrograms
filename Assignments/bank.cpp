#include<iostream>

using namespace std;

class account
{
	public:
		string s;
		int acc;
		char c;
		account(string s1,int a,char c1)
		{
			s=s1;
			acc=a;
			c=c1;
		}
		void display()
		{
			cout<<s<< " "<< acc<<" "<<c<<" "<<endl;
		}
};

class saving:public account
{
	public:
		int bal;
		saving(string s1,int a,char c1,int b):account(s1,a,c1)
		{
			bal=b;
		}
		void deposit()
		{
			int c;
			cout<<"Enter the balance"<<endl;
			cin>>bal;
			if(bal<=3000)
			{
				cout<<"Please enter more money"<<endl;
				cin>>c;
			}
			bal=bal+c;
		}
		
		void interest()
		{
			bal=bal+(0.04*bal);
		}
		
		void withdraw()
		{
			int c;
			if(bal>3000)
			{
				 cout<<"Enter the money to be withdrawn"<<endl;
				 cin>>c;
				if((bal-c)>=3000)
					bal=bal-c;
			}
			else
			{
				penalty();
			}
		}
		
		void penalty()
		{
			cout<<"Penalty is incurred"<<endl;
			bal=bal+500;
		}
			
		void display()	
		{
			account::display();
			cout<<bal;
		}

};

class current:public account
{
	public:
		int bal;
		current(string s1,int a,char c1,int b):account(s1,a,c1)
		{
			bal=b;
		}
		void deposit()
		{
			int c;
			cout<<"Enter the balance"<<endl;
			cin>>bal;
			if(bal<=1000)
			{
				cout<<"Please enter more money"<<endl;
				cin>>c;
			}
			bal=bal+c;
		}
		
		void interest()
		{
			bal=bal+(0.06*bal);
		}
		
		void withdraw()
		{
			int c;
			if(bal>1000)
			{
				 cout<<"Enter the money to be withdrawn"<<endl;
				 cin>>c;
				if((bal-c)>=1000)
					bal=bal-c;
			}
			else
			{
				penalty();
			}
		}
		
		void penalty()
		{
			cout<<"Penalty is incurred"<<endl;
			bal=bal+500;
		}
		void display()	
		{
			account::display();
			cout<<bal;
			cout<<endl;
		}

};
int main()
{
	string name;
	int a,b;
	char c;
	cout<<"Enter ur name ,acct no.,"<<endl;
	cin>>name>>a;
	cout<<"Enter 's' for savings and 'c' for current"<<endl;
	cin>>c;
	
	if(c=='s')
	{
        int ch;
		saving ob(name,a,c,b);
		ob.display();
		cout<<"press 1 for deposit and 2 for withdrawal"<<endl;
        cin>>ch;
        if(ch == 1)
        {
		    ob.deposit();
		    ob.display();
        }
        else
        {
		    ob.withdraw();
		    ob.display();
        }
		cout<<"After adding interest:"<<endl;
		ob.interest();
		ob.display();
	}
	else
	{
		current ob(name,a,c,b);
        int ch;
		ob.display();
		cout<<"press 1 for deposit and 2 for withdrawal"<<endl;
        cin>>ch;
        if(ch == 1)
        {
		    ob.deposit();
		    ob.display();
        }
        else
        {
		    ob.withdraw();
		    ob.display();
        }
		cout<<"After adding interest:"<<endl;
		ob.interest();
		ob.display();
	}	
    return 0;
}