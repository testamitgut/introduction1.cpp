#include<iostream>
using namespace std;
int Sum3(int arr[],int n,int x){
    int start,end,ans;
    for(int i=0;i<n-2;i++){
        ans=x-arr[i];
        start=i+1;
        end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==ans)
            return 1;
            else if(arr[start]+arr[end]>ans)
            end--;
            else
            start++;
        }
    }
    return 0;

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
    int x;
    cout<<"Enter the value of the x :";
    cin>>x;
    cout<<Sum3(arr,n,x);
}