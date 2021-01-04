#include<iostream>
using namespace std;

int main() {
int n,i;
int dno;
cin>>dno;
long bno=0,remainder,f=1;
    while(dno != 0)
    {
         remainder = dno % 2;
         bno = bno + remainder * f;
         f = f * 10;
         dno = dno / 2;
    }
    cout<<bno;
    return 0;
}
