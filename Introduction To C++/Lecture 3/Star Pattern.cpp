#include<iostream>
using namespace std;
int main()
{
    int num, count = 1, i;


    cin>>num;

    while(count <= num)
    {
        i = 0;
        while( i < (num - count) )
        {
            cout<<" ";
            i++;
        }

        i = 0;
        while(i < (2*count-1))
        {
            cout<<"*";
            i++;
        }

        cout<<"\n";
        count++;
    }


}
