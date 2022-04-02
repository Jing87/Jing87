#include<iostream>

using namespace std;

int main() {
	int decimal, binary = 0, remainder, product = 1, digit0 = 0, digit1 = 0; 
	cout << "Please input a decimal interger: ";
	cin >> decimal;
	while(decimal != 0) {
		remainder = decimal % 2;
		if (remainder == 0)
			digit0++;
		else 
			digit1++;
		binary += remainder * product;
		decimal /= 2;
		product *= 10;
	} 
	cout << "The number in the binary form is: " << binary << endl;
	cout << "0: " << digit0 << ", 1: " << digit1 << endl;
	return 0;
}
