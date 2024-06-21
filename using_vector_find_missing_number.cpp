#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int find_missing_number(vector<int>&arr,int n){
    int b=arr.size();

    int ans=0;
    for(int i=0;i<b-1;i++){
    ans+=arr[i];

    }
     int sum=n*(n+1)/2;
    return sum-ans;
}
int main(){
    int n;
    cout<<"Enter the value of the n :";
    cin>>n;
  vector<int>arr(n);
  cout<<"Enter the elemnt of the vector :";
  for(int i=0;i<n-1;i++){
    cin>>arr[i];
  }
  cout<<find_missing_number(arr,n);
}