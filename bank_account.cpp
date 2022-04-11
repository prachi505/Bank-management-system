#include<iostream>
#include<conio.h>
using namespace std;
class bank_account
{
	private:
		int acc_no;
		char name[100];
		char address[100];
		char  acc_type[15];
		float balance;
	public:
		// default constructor
		bank_account()
		{
			acc_no=1000;
			balance=1200.0;
		}
		//parameterized constructor
		bank_account(int a,float b)
		{
			acc_no=a;
			balance=b;
		}
		void open_account();
		void deposit();
		void withdraw();
		void display();
};
void bank_account::open_account()
{
	cout<<"enter account number :";
	cin>>acc_no;
	cout<<"enter full name :";
	cin.ignore();
	cin.getline(name,100);
	cout<<"enter address :";
	cin.ignore();
	cin.getline(address,100);
	cout<<"enter account type saving or current :";
	cin>>acc_type;
	cout<<"enter amount to deposit :";
	cin>>balance;
}
void bank_account::deposit()
{
	float amount;
	cout<<"enter the amount you want to deposit"<<endl;
	cin>>amount;
	balance+=amount;
	cout<<"total balance after depositing:"<<balance<<endl;
	
}
void bank_account::withdraw()
{
	float amount;
	cout<<"enter the amont you want to withdraw"<<endl;
	cin>>amount;
	balance-=amount;
	cout<<"total balnce after withdrawing :"<<balance<<endl;	
}
void bank_account::display()
{
	cout<<"account number:"<<acc_no<<endl;
	cout<<"name :"<<name<<endl;
	cout<<"address :"<<address<<endl;
	cout<<"type of account :"<<acc_type<<endl;
	cout<<"total balance :"<<balance<<endl;
}

int main()
{
	int ch;
	char x;
	bank_account obj;
	do
	{
		cout<<"press 1 to open account"<<endl;
		cout<<"press 2 to deposit money"<<endl;
		cout<<"press 3 to withdraw money"<<endl;
		cout<<"press 4 to display account details"<<endl;
		cout<<"press 5 to exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				
				obj.open_account();
				break;
			case 2:
				obj.deposit();
				break;
			case 3:
				obj.withdraw();
				break;
			case 4:
				obj.display();
				break;
			case 5:
					break;
			default:
				cout<<"this option does not exsist try again \n";
		}
		
	}
	while(ch!=5);
	return 0;
}
