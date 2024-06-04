#include<iostream>
using namespace std;
int Painter_partition(int arr[],int n,int k){
    int start=INT_MIN;
    int end=0,mid,ans;
    for(int i=0;i<n;i++){
        if(arr[i]>start){
            start=arr[i];
        }
        end=end+arr[i];
    }
    while(start<=end){
        mid=start+(end-start)/2;
        int ball=0,count=1;
        for(int i=0;i<n;i++){
            ball+=arr[i];
        
        
        if(ball>mid){
            count++;
            ball+=arr[i];
        }
    }
    if(count<=k){
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
    cout<<"Enter the value of the n:";
    cin>>n;
    int arr[1000];
    cout<<"Enter the value of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of the k :";
    cin>>k;
    cout<<Painter_partition(arr,n,k);
}