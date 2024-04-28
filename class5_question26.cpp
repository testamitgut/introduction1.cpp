#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the n : ";
    cin>>n;
    // char s='a';
    for(int i=1;i<=n;i++){
        char name='a'+i-1;
        for(int j=1;j<=n;j++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}