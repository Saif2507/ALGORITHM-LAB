//To print the Floyd’s Triangle till n number of user input:

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number:";
    cin>>n;

    for(int i=0;i<=n;i++){
      for( int j=1;j<=i;j++){

        cout<<((i+j)%2); }

        cout<<endl;
    } }
