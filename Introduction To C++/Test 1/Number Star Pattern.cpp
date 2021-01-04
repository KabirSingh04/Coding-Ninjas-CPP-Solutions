#include <iostream>
using namespace std;

int main()
{
 int i, j, k, m,n;
 cin>>n;
 for(i=n; i>=1; i--)
 {
  for(j=1; j<=i; j++)
   cout << j;
  for(k=i; k<n; k++)
   cout << "**";
  for(m=i; m>=1; m--)
   cout << m;
  cout << "\n";
 }
 return 0;
}
