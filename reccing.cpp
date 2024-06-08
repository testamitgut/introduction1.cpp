#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    cout<<"Enter the elemnet of the array :";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        int start=0;
        int end=3;
        while(start<end){
         swap(arr[i][start],arr[i][end]);
         start++;
         end--;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}