#include<iostream>
#include<cmath>

using namespace std;

double TriArea(double i, double j, double k) {
	double semi = (i + j + k) / 2;
	return sqrt(semi* (semi - i)* (semi - j)* (semi - k));
}

int main() {
	double a, b, c;
	cout << "Please three positive integers: ";
	cin >> a >> b >> c;
	double max_side = max(a, max(b, c));
	double min_side = min(a, min(b, c));
	double mid_side = a + b + c - max_side - min_side; 
	if (mid_side + min_side > max_side) 
		cout << "The area of triangle: " << TriArea(a, b, c) << endl;
	else
		cout << "Error: a, b, c do not satisfy the triangle inequality condition." << endl;
	return 0;
}
