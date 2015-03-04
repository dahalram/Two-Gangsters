#include <iostream>

using namespace std;

int main(){
	int a, b;

	//Take two integers from the input
	cin >> a;
	cin >> b;

	//Print the number that each player misses
	cout << b-1 << " ";
	cout << a-1;
}
