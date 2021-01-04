#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int x=0;
	int num=n;
    int i = 1;
    int temp = num;
    while (temp) {
        int rem = temp % 10;
        temp = temp / 10;

        x += rem * i;

        i = i* 2;
    }
    cout<<x;
    return 0;
}
