#include<iostream>

using namespace std;

int main() {
	int binary, decimal = 0, remainder, product = 1;
	cout << "Please input an binary number: ";
	cin >> binary;
	while(binary != 0) {
		remainder = binary % 10;
		decimal += remainder * product;
		binary /= 10;
		product *= 2;
	}
	cout << "The decimal equivalent: " << decimal << endl;
	return 0;
}
