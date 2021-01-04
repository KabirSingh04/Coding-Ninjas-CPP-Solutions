#include<iostream>
using namespace std;


int main()
{
	int s,e,w,i,cd;
    cin>>s;
    cin>>e;
    cin>>w;

    for(i=s;i<=e;i+=w)
    {
        cd=(i-32)/1.8;
        cout<<i<<"\t"<<cd<<"\n";
    }


}
