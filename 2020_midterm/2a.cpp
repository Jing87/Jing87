#include<iostream>

using namespace std;

int gcd( int x, int y) {
	int tmp;
	while(y != 0) {
		tmp = y;
		y = x % y;
		x = tmp;
    }
    return x;
}

int main() { 
	int a, b;
	cout<< "Please input two positive integers: ";
	cin >> a >> b;  
	cout << "The greatest common divider of a and b is: " << gcd(a, b) << endl;
	cout << "The least common multiple of a and b is: " << a * b / gcd(a, b) << endl;
	return 0;
} 
