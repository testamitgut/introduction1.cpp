#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Trapping_rain_water(int arr[],int n){
   vector<int>leftmax(n);
    vector<int>rigthmax(n);
    leftmax[0]=0;
    for(int i=0;i<leftmax.size();i++){
        leftmax[i]=max(leftmax[i-1],arr[i-1]);
    }
    rigthmax[rigthmax.size()-1]=0;
    for(int i=rigthmax.size()-2;i>=0;i--){
        rigthmax[i]=max(rigthmax[i+1],arr[i+1]);
    }
    int water=0;
    for(int i=0;i<n;i++){
        int minhieght=min(leftmax[i],rigthmax[i]);
        if(minhieght-arr[i]>=0){
            water+=minhieght-arr[i];
        }
      
    }
    return water;

}
int main(){
    int n;
    cout<<"Enter the value of the n ;";
    cin>>n;
    int arr[1000];
    cout<<"Enter the value of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<Trapping_rain_water(arr,n);
}
