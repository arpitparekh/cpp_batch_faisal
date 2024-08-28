/*
Create a class BankAccount with data members accountNumber, accountHolderName, and balance. Write a constructor to initialize the account number and account holder's name. Also, write member functions deposit() and withdraw() to update the balance accordingly.
*/

#include <iostream>
#include<string>
using namespace std;

class BankAccount{

  public:
    int accountNumber;
    string accountHolderName;
    float balance;

    BankAccount(int accountNumber, string accountHolderName){
      this->accountNumber = accountNumber;
      this->accountHolderName = accountHolderName;
    }

    void deposit(int ammount){
      balance = balance + ammount;
    }

    void withdraw(int ammount){
      balance = balance - ammount;
    }

    void display(){
      cout << accountNumber << endl;
      cout << accountHolderName << endl;
      cout << balance << endl;
    }

};

int main(){

  BankAccount b(12, "Faisal");
  b.deposit(1000);
  b.withdraw(400);
  b.display();

  BankAccount b1(13, "Maulik");
  b1.deposit(2000);
  b1.withdraw(500);
  b1.display();


  return 0;
}

