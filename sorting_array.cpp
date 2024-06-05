#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sorting(vector<int>v){
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the value of the n :";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the value of the vector:";
    for(int i=0;i<n;i++){
        cin>>v[i];

    }
   sorting(v);

}