#include<iostream>
using namespace std;
int Kandanes_Algo(int arr[],int n){
    int maxi=INT_MIN;
    int prefix=0;
    for(int i=0;i<n;i++){
        prefix+=arr[i];
        maxi=max(prefix,maxi);
        if(prefix<0)
            prefix=0;
    }
    
    return maxi;
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
    cout<<Kandanes_Algo(arr,n);
}
