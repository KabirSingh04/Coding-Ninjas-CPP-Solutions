#include<iostream>
using namespace std;


int main(){
int n;
cin>>n;
int i=0;
while (i<=n){
    int spaces=1;
    while (spaces <=n-i){
        cout<< " ";
        spaces=spaces+1;
    }
   int j=1;
    int val=i;
    while(j<=i){
    cout<<val;
    j=j+1;
    val=val+1;;
    }
    int k=(2*i)-2;
    while(k>=i){
          cout<<k;
          k=k-1;
          }

    cout<<endl;
    i=i+1;
}
}



