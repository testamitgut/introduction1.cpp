#include<iostream>
using namespace std;
int finding_min_element( int arr[],int n){
    int start=0,end=n-1,mid;
    int ans=arr[0];
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[0]<arr[mid]){
            start=mid+1;
        }
        else if(arr[0]>arr[mid]){
            ans=arr[mid];
            end=mid-1;
        }
        else{
            start=mid=1;
        }
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
    cout<<finding_min_element(arr,n);
}