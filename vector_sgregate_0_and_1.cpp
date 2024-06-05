#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void vector1(vector<int>v){
    int start=0,end=v.size()-1;
    while(start<end){
        if(v[start]==0){
            start++;
        }
        else if(v[end]==0){
            int temp=v[start];
            v[start]=v[end];
            v[end]=temp;
            start++;
            end--;
        }
        else{
            end--;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
int main(){
    int n;
    cout<<"Enter the value of the n :";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the value of the vector :";
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
    vector1(v);
}