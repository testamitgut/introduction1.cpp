#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of the n";
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // }


// for(int i=2;i<=n;i=i+2){
//     cout<<i<<endl;
// }

for(int i=1;i<=n;i++){
    if(i%2==0){
        cout<<i<<" ";
        
    }
}

}