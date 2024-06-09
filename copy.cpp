#include<iostream>
using namespace std;
class Student{
    string name;
    int account_number;
    int balance;
    public:
    Student(string name,int account_number,int balance){
          this->name=name;
          this->account_number=account_number;
          this->balance=balance;
    }
    Student(Student &B){
        name=B.name;
        account_number=B.account_number;
        balance=B.balance;
    }
    void display(){
        cout<<account_number<<" "<<name<<" "<<balance<<endl;
    }
};
int main(){
    Student a("Amit",123,1400);
    a.display();
    Student A4(a);
    A4.display();



}