#include<iostream>
using namespace std;
int diff(int arr[],int n){
    int suffix=n-1;
    int ans=INT_MIN;
    int diff=0;
    for(int i=n-2;i>=0;i--){
        ans=max(ans,arr[i]-suffix);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of the n :";
    cin>>n;
    int arr[1000];
    cout<<"Enter the value of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<diff(arr,n);
}