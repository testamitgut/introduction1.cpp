// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the value of the n :";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<n+1-j;
//     }
//     cout<<endl;
// }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the n :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
        cout<<j; 
        }
        cout<<endl;
    }
}
