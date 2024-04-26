#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of the num :";
    cin>>num;
    if(num==1){
        cout<<"Monday";
    }
    else if(num==2){
        cout<<"Tue";

    }
    else if(num==3){
        cout<<"Wed";
    }
    else if(num==4){
        cout<<"Thu";
    }
    else if(num==5){
        cout<<"Fri";
    }
    else if(num==6){
        cout<<"Sat";
    }
    else if(num==7){
        cout<<"Sun";
    }
    else {
        cout<<"Enter the valid number";
    }
}