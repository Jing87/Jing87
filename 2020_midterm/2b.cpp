#include<iostream>

using namespace std;

int gcd(int x, int y) {
	int tmp;
	while(y != 0) {
		tmp = y;
		y = x % y;
		x = tmp;
    }
    return x;
}

int main() { 
	int a, b, c, d;
	cout<< "Please input a/b and c/d respectively: ";
	cin >> a >> b >> c >> d;  
	cout << "a/b * c/d = " << a*c/gcd(a*c, b*d) << "/" << b*d/gcd(a*c, b*d) << endl;
	cout << "a/b + c/d = " << (a*d+b*c)/gcd((a*d+b*c), b*d) << "/" << b*d/gcd((a*d+b*c), b*d)<< endl;
	return 0;
} 
