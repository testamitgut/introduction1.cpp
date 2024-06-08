#include<iostream>
using namespace std;
void fact3( int n){
   if(n==0){
    cout<<"Happy Birathday :"<<endl;
    return;

   }
   cout<<n<<" days left for your  Birthday "<<endl;
   fact3(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of the n :";
    cin>>n;
    fact3(n);
}