#include<iostream>

using namespace std;

int main() {
	int a, b;
	cout << "Please input two integers: ";
	cin >> a >> b;
	int tmp, gcd = a, div = b;
	while(div > 0) {
		tmp = div;
		div = gcd % div;
		gcd = tmp;
	} 
	cout << a/gcd << "/" << b/gcd << endl;
	return 0;
}
