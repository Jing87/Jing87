#include<iostream>

using namespace std;

int main() {
	int decimal, binary = 0, remainder, product = 1; 
	cout << "Please input a decimal interger: ";
	cin >> decimal;
	while(decimal != 0) {
		remainder = decimal % 2;
		binary += remainder * product;
		decimal /= 2;
		product *= 10;
	} 
	cout << "The number in the binary form is: " << binary;
	return 0;
}
