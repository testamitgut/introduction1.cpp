#include<iostream>
using namespace std;
int Book_Allocation(int arr[],int n,int M){
    int start=INT_MIN,ans;
    int end=0;
    int mid;
    for(int i=0;i<n;i++){
        if(arr[i]>start){
            start=arr[i];
        }
        end=end+arr[i];
    }
    while(start<=end){
        int Page=0,count=1;
        mid=start+(end-start)/2;
        for(int i=0;i<n;i++){
        Page+=arr[i];
        if(Page>mid){
         count++;
         Page+=arr[i];
        }

        }
        if(count<=M){
            ans=mid;
            end=mid-1;

        }
        else{
            start=mid+1;
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
    int M;
    cout<<"Enter the value of the Member :";
    cin>>M;
    cout<<Book_Allocation(arr,n,M);
}