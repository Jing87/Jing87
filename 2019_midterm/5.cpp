#include<iostream>

using namespace std;

int lcm(int num1, int num2) {
	int tmp, tmp1 = num1, tmp2 = num2;
	while (tmp2 != 0) {
		tmp = tmp2;
		tmp2 = tmp1 % tmp2;
		tmp1 = tmp;
	}
	return num1* num2/ tmp1;
}

int main() {
	int num1, num2;
	cout << "Please input an arbitrary pairs of integers: ";
	cin >> num1 >> num2;
	cout << "Their least common multiple: " << lcm(num1, num2) << endl;
	return 0;
}
