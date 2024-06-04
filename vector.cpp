#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the  n :";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the value of the vector :";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}