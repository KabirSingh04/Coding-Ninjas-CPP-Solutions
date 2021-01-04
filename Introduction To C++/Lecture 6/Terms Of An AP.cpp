#include<iostream>
using namespace std;

int main() {
int n;
cin>>n;
int count=0;
int i=1;
while(count<n)
    {
    int num=3*i + 2;
    i++;
    if((num%4)==0){

    }
    else{
        cout<<num<<" ";
        count++;
    }

}
}
