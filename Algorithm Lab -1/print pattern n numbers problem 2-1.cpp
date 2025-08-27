//To print the following pattern till n number of user input:

#include<iostream>
using namespace std;
int main(){

    int n,num=1;
    cout<<"Enter a number:";
    cin>>n;

    for(int i=0;i<=n;i++){
      for( int j=1;j<=i;j++){
      cout<<i; }

      cout<<endl;
    } }
