#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void soring(vector<int>v){
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
int n;
cout<<"Enter the value of the n :";
cin>>n;
vector<int>v(n);
cout<<"Enter the element of the vector :";
for(int i=0;i<n;i++){
    cin>>v[i];
}
soring(v);
}
