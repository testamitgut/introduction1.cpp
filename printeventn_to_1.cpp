#include<iostream>
using namespace std;
void print(int n ){
    if(n==2){
        cout<<2;
        return;
    }
    cout<<n<<endl;
    print(n-2);
}
int main(){
    int n;
    cout<<"Enter thevalue of the n ";
    cin>>n;
    print(n);
}