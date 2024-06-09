#include<iostream>
using namespace std;
class customer
{
    string name;
    int account_numbar;
    int balance;
    public:
    // customer(){
    //     cout<<"Defult constructer"<<endl;

    // }
    customer(string a,int b,int c){
        name=a;
        account_numbar=b;
        balance=c;
    }
    customer(){
        name="Amit Kumar";
        account_numbar=1234;
        balance=123;
    }
    void display1(){
        cout<<name<<account_numbar<<balance<<endl;
    }
    void display()
    {
        cout<<name<<" "<<account_numbar<<" "<<balance<<endl;    
        }
};
int main(){
    customer A1,A3;
    A3.display1();

    customer A2("Amit",2100,1000);
    A2.display();
}
