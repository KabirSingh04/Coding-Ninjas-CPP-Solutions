#include <iostream>

using namespace std;
int main()
{
    int rows,i,j,Num_Of_space=1;

    cin>>rows;
    Num_Of_space=rows/2;
    for(i=1; i<=rows/2+1; i++){ //outer for loop 1
        for(j=1; j<=Num_Of_space; j++)//inner for loop for space
            cout<<" ";
            Num_Of_space--;
        for(j=1; j<=2*i-1; j++)//inner for loop for star
            cout<<"*";
        cout<<"\n";
    }
    Num_Of_space=1;
    for(i=1; i<=rows/2; i++){//outer for loop 2
            for(j=1; j<=Num_Of_space; j++)
            cout<<" ";//inner for loop for space
    Num_Of_space++;
        for(j=1; j<=rows-2*i; j++)//inner for loop for star
            cout<<"*";
            cout<<"\n";//move to next line
        }

    return 0;
}
