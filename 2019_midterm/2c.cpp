#include<iostream>

using namespace std;

int main() {
	int a, b, c, d;
	cout << "Please input four integers: ";
	cin >> a >> b >> c >> d;
	int tmp, gcd = a*d + b*c, div = b*d;
	while(div > 0) {
		tmp = div;
		div = gcd % div;
		gcd = tmp;
	} 
	cout << (a*d + b*c)/gcd << "/" << b*d/gcd << endl;
	return 0;
}
