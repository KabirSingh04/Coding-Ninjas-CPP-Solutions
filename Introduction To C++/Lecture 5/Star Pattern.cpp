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
    int k=1;
    while(k<=i){
        cout<<"*";
        k=k+1;
    }
    k=i-1;
    while(k>=1){
        cout<<"*";
        k=k-1;
    }

    cout<<endl;
    i=i+1;
}
}



