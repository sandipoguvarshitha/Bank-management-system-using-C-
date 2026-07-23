class bank
{
    int accountnumber;
    char name[20];
    int balance;

public:
    void create()
    {
        ofstream out("bank.txt", ios::app);

        cout << "Enter Account Number, Name and Balance: ";
        cin >> accountnumber >> name >> balance;

        out << accountnumber << " " << name << " " << balance << endl;

        out.close();
        cout << "Account Created Successfully.\n";
    }

    void displayaccount()
    {
        ifstream in("bank.txt");

        cout << "\nAccount Details\n";

        while (in >> accountnumber >> name >> balance)
        {
            cout << "Account Number : " << accountnumber << endl;
            cout << "Name           : " << name << endl;
            cout << "Balance        : " << balance << endl;
            cout << "------------------------" << endl;
        }

        in.close();
    }

    void deposit()
    {
        int acc, amount;
        bool found = false;

        cout << "Enter Account Number: ";
        cin >> acc;

        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        ifstream in("bank.txt");
        ofstream out("temp.txt");

        while (in >> accountnumber >> name >> balance)
        {
            if (accountnumber == acc)
            {
                balance += amount;
                found = true;
            }

            out << accountnumber << " " << name << " " << balance << endl;
        }

        in.close();
        out.close();

        remove("bank.txt");
        rename("temp.txt", "bank.txt");

        if (found)
            cout << "Amount Deposited Successfully.\n";
        else
            cout << "Account Not Found.\n";
    }

    void withdraw()
    {
        int acc, amount;
        bool found = false;

        cout << "Enter Account Number: ";
        cin >> acc;

        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        ifstream in("bank.txt");
        ofstream out("temp.txt");

        while (in >> accountnumber >> name >> balance)
        {
            if (accountnumber == acc)
            {
                found = true;

                if (amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient Balance.\n";
            }

            out << accountnumber << " " << name << " " << balance << endl;
        }

        in.close();
        out.close();

        remove("bank.txt");
        rename("temp.txt", "bank.txt");

        if (!found)
            cout << "Account Not Found.\n";
    }
};

int main()
{
    bank b;
    int op;

    while (1)
    {
        cout << "\n1. Create Account";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Display Accounts";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> op;

        switch (op)
        {
        case 1:
            b.create();
            break;

        case 2:
            b.deposit();
            break;

        case 3:
            b.withdraw();
            break;

        case 4:
            b.displayaccount();
            break;

        case 5:
            return 0;

        default:
            cout << "Invalid Choice.\n";
        }
    }

    return 0;
}
