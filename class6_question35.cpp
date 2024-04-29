#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enetr the value of the n :";
    cin>>n;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=5-(i-1);j++){
            cout<<j;
            
        }
        cout<<endl;
    }
}