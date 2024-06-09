#include<iostream>
using namespace std;
class Custmer{
    string name;
    int account_number,balance;
    static int total_custmer;
    static int total_balance;
    public:
    Custmer(string name,int account_number,int balance){
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
        total_custmer++;
        total_balance+=balance;
    }
    static void acceStatic(){
        cout<<"total Number of  Customer :"<<total_custmer<<endl;
        cout<<"taotal balance in your account :"<<total_balance;
    }
    void deposit(int amount){
        if(amount>0){
            balance += amount;
            total_balance += amount;
        }
    }
        void withdraw(int amount){
         if(amount<=balance&&amount>0){
            balance -= amount;
            total_balance -=amount;
         }
        }
    
};
int Custmer::total_custmer=0;
int Custmer::total_balance=0;
int main(){
    Custmer A1("Amit",1,4000);
    Custmer A2("Amit Kumar",2,8000);
    Custmer A3("Mohit",3,6000);
    A1.deposit(800);
    A2.withdraw(500);
    Custmer::acceStatic();
    
    

}