#include<iostream>
using namespace std;
class Customer{
    string name;
    int account_number,balance;
    public:
    static int total_customer;
    Customer(string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
    }
    void display(){
        cout<<total_customer;
    }
};
int Customer::total_customer=0;
int main(){
    Customer A1("Amit Kumar",1,100);
    Customer A2("Amit",2,2000);
    Customer::total_customer=5;
    A1.display();
}