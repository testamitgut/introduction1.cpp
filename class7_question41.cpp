#include<iostream>
using  namespace std;
int main(){
    int n;
    cout<<"Enetr the value of the n :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
       cout<<i+1-j;
        }
        cout<<endl;
    }
}