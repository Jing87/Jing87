#include<iostream>
#include<cmath>

using namespace std;

double InvNorm(int x1, int x2, int x3) {
	return 1/sqrt(pow(x1, 2) + pow(x2, 2) + pow(x3, 2));
}

int main() {
	cout << InvNorm(1, 2, 1) << endl;
	return 0;
}
