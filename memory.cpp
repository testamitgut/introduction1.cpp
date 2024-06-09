#include<iostream>
using namespace std;
class stident
{
    public:
string name;
int age,rollnumber;
string grade;
};
int main(){
    stident *S=new stident;
    S->name ="Amit";
    S->age=10;
    S->rollnumber=2100400;
    S->grade="A+";
    cout<<(*S).name;
     cout<<S->age;
}
