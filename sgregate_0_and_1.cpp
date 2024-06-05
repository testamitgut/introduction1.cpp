#include<iostream>
using namespace std;
void sgregate_0_and_1(int arr[],int n){
    int start=0,end=n-1;
    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else if(arr[end]==0){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
        else{
            end--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    sgregate_0_and_1(arr,n);
}