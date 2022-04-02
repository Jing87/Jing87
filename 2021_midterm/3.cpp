#include<iostream>

using namespace std;

int main() {
	int a, b;
	cout << "Please input an integer for a: ";
	cin >> a;
	cout << "Please input an integer for b: ";
	cin >> b;
	int tmp, gcd = a, div = b;
	while(div > 0) {
		tmp = div;
		div = gcd % div;
		gcd = tmp;
	}
	cout << "The GCD of a and b is: " << gcd << endl;
	cout << "The LCM of a and b is: " << a*b/gcd << endl;
	return 0;
}
