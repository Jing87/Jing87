#include<iostream>

using namespace std;

int main(){
	double a, b, c, d, e, f;
	double g, h , x, y;
	cout << "ax + by = c" << endl;
	cout << "dx + ey = f" << endl;
	cout << "Input coefficients a, b, c, d, e, f respectively: ";
	cin >> a >> b >> c >> d >> e >> f;
	if (a/b == d/e) {
		if (a/b == c/f) 
			cout << "Infinitely many solutions." << endl;
		else
			cout << "No solution." << endl;
	} else {
		g = a*e - d*b;
		h = c*e - f*b;
		x = h/g;
		y = (c - a*x)/b;
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	return 0;
}
