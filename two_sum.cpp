#include<iostream>
using namespace std;
int Two_sum(int arr[],int n,int target){
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==target){
            return start+end;
            ;
        }
        else if(arr[start]+arr[end]<target){
            start++;
        }
        else{
            end--;
        }
    }
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
    int target;
    cout<<"Enter the value of the target :";
    cin>>target;
    cout<<Two_sum(arr,n,target);
}