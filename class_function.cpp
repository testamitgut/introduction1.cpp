#include<iostream>
using namespace std;
class student{
    string name;
    int age,roll_number;
    string grade;
    public:
    //Function Gatter and Setter
    void set_name(string n){
        if(n.size()==0){
        cout<<"Invalid Name";
        return;
        }
        name=n;
    }
    void set_age(int x){
       
        age=x;
    }
    void set_roll_number(int r){
        roll_number=r;
    }
    void set_grade(string g){
        grade=g;
    }
    void getname(){
       cout<<name<<endl; 
    }
    void getage(){
        cout<<age<<endl;
    }
    void getRool_number(){
        cout<<roll_number<<endl;
    }
    void getgrade(){
        cout<<grade<<endl;
    }

};
int main(){
    student s1;
    s1.set_name("");
    s1.set_age(10);
    s1.set_roll_number(2100400);
    s1.set_grade("A+");
    s1.getname();
    s1.getage();
    s1.getRool_number();
    s1.getgrade();
}