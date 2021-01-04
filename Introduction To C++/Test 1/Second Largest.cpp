#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n ;
	cin>>n;
	int max=INT_MIN,secondmax=INT_MIN;
     int num;
     int count=1;
     while(count<=n)
     {
     	cin>>num;
     	if(num>max){
     		secondmax=max;
     		max=num;
		 }
		 else if(num>secondmax && num!=max)
		 {
		 	secondmax=num;
		 }
		 count++;
	 }
	 cout<<secondmax<<endl;
}
