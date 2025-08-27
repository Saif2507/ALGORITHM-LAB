//To Display n number of natural numbers and their sum.

#include<iostream>
using namespace std;
int main(){
   int n,sum=0;

   cout<<"Enter a number:";
   cin>>n;

   for(int i=0;i<n;i++){

    cout<<i<<" ";
    sum+=i;
   }

   cout<<"\nsum = "<< sum <<endl;

}
