#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int basic  ;
    int allow ;
    char grade ;
    cin >> basic ;
    cin >> grade;
    if(grade == 'A')
    {
      allow = 1700;
    }
     else if(grade == 'B')
     {
       allow = 1500 ;

     }else
     {
       allow = 1300;
     }
   basic = round(1.59*basic) ;
   int total = basic + allow ;
  cout << total ;

}
