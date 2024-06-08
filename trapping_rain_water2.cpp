#include<iostream>
using namespace std;
int trapping_rain_water(int hieght[],int n){
    int maxleft=0,maxright=0,water=0;
    int maxhieght=hieght[0],index;
    for(int i=1;i<n;i++){
        if(hieght[i]>maxhieght){
            maxhieght=hieght[i];
            index=i;
        }
    }
    //left
    for(int i=0;i<index;i++){
        if(maxleft>hieght[i]){
            water +=maxleft-hieght[i];
        }
        else{
            maxleft=hieght[i];
        }

    }
    //right
    for(int i=n-1;i>index;i--){
        if(maxright>hieght[i]){
            water +=maxright-hieght[i];
        }
        else{
            maxright=hieght[i];
        }
    }
return water;
}
int main(){
    int n;
    cout<<"Enter the value of the n :";;
    cin>>n;
    int arr[1000];
    cout<<"Enter the value of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<trapping_rain_water(arr,n);
}