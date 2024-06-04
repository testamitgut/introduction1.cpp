#include<iostream>
using namespace std;
int kt_missing_integer(int arr[],int n,int k){
    int start=0,end=n-1,mid;
    int ans=n;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }

    }
    return ans+k;
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
    int k;
    cout<<"Enter the value of the k";
    cin>>k;
    cout<<kt_missing_integer(arr,n,k);
}