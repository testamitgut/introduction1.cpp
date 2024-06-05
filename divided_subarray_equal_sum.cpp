#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divided(vector<int>arr){
    int total_sum=0,prefix=0,ans;
    for(int i=0;i<arr.size();i++)
        total_sum+=arr[i];
    
    for(int j=0;j<arr.size()-1;j++){
        prefix+=arr[j];
        ans=total_sum-prefix;

    
    if(ans==prefix)
        return 1;
    }
    return 0;

}
int main(){
    int n;
    cout<<"Enter the value of the n :";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the value of the vector :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<divided(arr);
}