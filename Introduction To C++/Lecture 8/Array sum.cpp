#include <iostream>
#include <climits>
using namespace std;

int main() {
	// Take array input from the user

	int n;
	cin >> n;

	int input[100];

	for(int i = 0; i < n; i++) {
		cin >> input[i];
	}
int sum=0;
	// Print array
	for(int i = 0; i < n; i++) {
		sum=sum+input[i];

	}
cout << sum<< endl;
	// Largest velement in the array

}
