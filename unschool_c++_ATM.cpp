/*            Unschool major project for building ATM using C++ .
               Done by M.SHERIN BHARATHIY on 16-05-2021             */


#include<iostream>
using namespace std;
int main()
{
	int response, pin = 1234 , password , choice ;   
	float balance = 1000.0, deposit, withdrawal;
	
		cout << "********Welcome to your Bank********\n";
		cout << "Please Enter your pin number : ";
		cin >> password;
		if (password == pin)
		{
			do
			{
				cout << "\nEnter any option to be served\n";
				cout << " 1.Balance enquiry\n";
				cout << " 2.Cash Withdrawal\n";
				cout << " 3.Deposit Cash\n";
				cout << " 4.Exit\n";
				cout << "\n Enter your choice : ";
				cin >> choice;

				switch (choice)
				{
				case 1:
					cout << "\n  *****BALANCE*****\n";
					cout << " Your bank balance is : $" << balance;
					break;
				case 2:
					cout << "\n  *****WITHDRAWAL*****\n";
					cout << " Please enter amount to be withdrawn : $";
					cin >> withdrawal;
					balance = balance - withdrawal;
					cout << " Your net balance is $" << balance;
					break;
				case 3:
					cout << "\n  *****DEPOSIT*****\n";
					cout << " Please enter the amount to be deposited : $";
					cin >> deposit;
					balance = balance + deposit;
					cout << " Thanks for depositing\n";
					cout << " Your net balance is $" << balance;
					break;
				case 4:
					cout << " ThankYou for banking with us . Have a nice day !!!";
					break;
				}
				cout << "\nPress 1 to proceed and 2 to exit : ";
				cin >> response;
			} while (response == 1);
		}
		else
		{
			cout << " Wrong pin entered . Kindly Please check again. ";
		}

}