#include<iostream>
#include<string>
using namespace std;

class BankAccount{
   
    public:
    string name;
    string branchName;
    long balance;

    BankAccount(string Name, string branchName){
         this->name = name;
         this ->branchName = branchName;
    }
     
    BankAccount(long balance ){
         this->balance = balance;
    }
    

    void showDetails(){
        cout<<"Account Holder name: "<<name<<endl;
        cout<<"Branch name : "<<branchName<<endl;

    }
    void getInfo(){
        cout<<"Bank Balance: "<<balance<<endl;
    }
};
int main()
{
  BankAccount b1("Raju","SBI");
  BankAccount b2(30000);

  b1.showDetails();
  b2.getInfo();
  
  
}