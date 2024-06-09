#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age,roll_number;
    string grade;
};
int main(){
student s1;
s1.name="Amit";
s1.age=10;
s1.roll_number=2100400;
s1.grade="A+";
 cout<<s1.name;
}