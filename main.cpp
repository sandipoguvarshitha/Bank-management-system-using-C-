#include"header.h"
class bank
{
	int accountnumber;
	char name[20];
	float balance;
	int withdrawamount;
	int depositamt;

	public:

	void create_account()
	{
		ofstream out;

		cout<<"Enter account number, name and balance"<<endl;

		cin>>accountnumber>>name>>balance;

		out.open("bank1.txt",ios::app|ios::out);

		out<<accountnumber<<" "
		   <<name<<" "
		   <<balance<<endl;

		out.close();

		cout<<"Account created successfully"<<endl;
	}

	void deposit()
	{
		cout<<"Enter amount to deposit"<<endl;

		cin>>depositamt;

		balance=balance+depositamt;

		cout<<"Updated balance:"<<balance<<endl;
	}

	void withdraw()
	{
		cout<<"Enter withdrawal amount"<<endl;

		cin>>withdrawamount;

		if(withdrawamount>0)
		{
			if(withdrawamount<=balance)
			{
				balance=balance-withdrawamount;

				cout<<"Withdrawal successful"<<endl;
			}
			else
			{
				cout<<"Insufficient balance"<<endl;
			}
		}
		else
		{
			cout<<"Invalid amount"<<endl;
		}

		cout<<"Remaining balance:"<<balance<<endl;
	}

	void display()
	{
		ifstream in;

		in.open("bank.txt",ios::in);

		if(!in)
		{
			cout<<"File not found"<<endl;
			return;
		}

		cout<<"\nAccount Details\n"<<endl;

		while(in>>accountnumber>>name>>balance)
		{
			cout<<"Account Number : "<<accountnumber<<endl;

			cout<<"Name           : "<<name<<endl;

			cout<<"Balance        : "<<balance<<endl;

			cout<<"-----------------------------"<<endl;
		}

		in.close();
	}
};

int main()
{
	bank b[20];

	int i,op;

	while(1)
	{
		cout<<"\n===== BANK MENU ====="<<endl;

		cout<<"1. Create Account"<<endl;

		cout<<"2. Deposit"<<endl;

		cout<<"3. Withdraw"<<endl;

		cout<<"4. Display Accounts"<<endl;

		cout<<"5. Exit"<<endl;

		cout<<"Enter your choice:"<<endl;

		cin>>op;

		if(op!=5 && op!=4)
		{
			cout<<"Enter account index (0-19):"<<endl;

			cin>>i;

			if(i<0 || i>=20)
			{
				cout<<"Invalid index"<<endl;

				continue;
			}
		}

		switch(op)
		{
			case 1:
				b[i].create_account();
				break;

			case 2:
				b[i].deposit();
				break;

			case 3:
				b[i].withdraw();
				break;

			case 4:
				b[0].display();
				break;

			case 5:
				exit(0);

			default:
				cout<<"Invalid choice"<<endl;
		}
	}

	return 0;
}
