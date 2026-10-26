#include <iostream>
using namespace std;

class Account {         			
      int balance;  
      
      public :			
      	void initialize (int);
 	      int check ( ) { return balance; }
 	      void withdraw (int);
	      void deposit (int money) { balance += money ; } 
};

void Account::initialize (int x)	
{    balance = x;  }
void Account::withdraw (int x)
{ if (balance < x)
       cout << "not enough money in the account" << endl;
  else
       balance -=x;
} 

int main ( ) {
       Account mine;
       char action;
       int amount;
       
       cout << "Enter initial balance:"; 
       cin >> amount;
       mine.initialize(amount);
       do { 
           cout << "Enter B-Balance, W-Witdraw, D-Deposit, Q-Quit : ";
           cin >> action;
           if (action =='B')
              cout << "Balance=" << mine.check( ) << endl;
           else if  (action =='W')
           { 
                cout << "Amount to withdraw: ";
	cin >> amount;
	mine.withdraw(amount);
      cout << "Balance=" << mine.check( ) << endl;
           }
            else if  (action =='D')
          { 
                cout << "Amount to deposit: ";
	cin >> amount;
	mine.deposit(amount);
      cout << "Balance=" << mine.check( ) << endl;
           }
     } while (action != 'Q');


     return 0;
     
    }
