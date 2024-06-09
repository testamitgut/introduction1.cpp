#include<iostream>
using namespace std;
class Customer{
    string name;
    int balance,age;
    public:
    Customer(string name,int balance,int age){
        this->name=name;
        this->balance=balance;
        this->age=age;

    }
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"Invalid Amount :";
        }
    }
    void display(){
        cout<<name<<" "<<age<<" "<<balance<<endl;
    }
};
int main(){
    Customer A1("Amit",21,2);
    Customer A2("Sumit",2000,6);
    A1.deposit(-10);
    A1.display();

}