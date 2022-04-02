#include<iostream>
#include<cmath>

using namespace std;

int main() {
	double a, b, c;
	cout << "Please three positive integers: ";
	cin >> a >> b >> c;
	double max_side = max(a, max(b, c));
	double min_side = min(a, min(b, c));
	double mid_side = a + b + c - max_side - min_side; 
	if (mid_side + min_side > max_side) {
		if (mid_side * mid_side + min_side * min_side > max_side * max_side)
			cout << "An acute triangle." << endl; 
		if (mid_side * mid_side + min_side * min_side < max_side * max_side)
			cout << "An obtuse triangle." << endl; 
		if (mid_side * mid_side + min_side * min_side == max_side * max_side)
			cout << "A right triangle." << endl; 
	}
	else
		cout << "Error: a, b, c do not satisfy the triangle inequality condition." << endl;
	return 0;
}
