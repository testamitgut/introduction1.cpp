#include<iostream>
using namespace std;
int search_in_rotated_array(int arr[],int n,int target){
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            return ans;

        }
        else if(arr[0]<=arr[mid]){
            if(arr[0]<target&&target<=arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]<=target&&target<=end){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the value of the array :";
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the value of the target :";
    cin>>target;
   cout<<search_in_rotated_array(arr,n,target);
}