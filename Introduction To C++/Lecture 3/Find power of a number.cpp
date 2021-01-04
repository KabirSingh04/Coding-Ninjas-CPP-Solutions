#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int base, exponent,power, i;

    //Reading base & exponent

    cin>>base;

    cin>>exponent;

    power = 1;
    i = 1;
    //caculatinh power of given number
    while(i <= exponent)
    {
        power = power * base;
        i++;
    }
    cout<<power;

    return 0;
}
