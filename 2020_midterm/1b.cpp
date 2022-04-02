#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	int k;
	cout << "Enter an upper bound k: ";
	cin >> k;
	int CountTriangle = 0;
	int CountNotTriangle = 0;
	int CountIsosceles = 0;
	int CountRegular = 0;
	int CountRight = 0;
	int MaxSide, MidSide, MinSide;
	for(int a = 1; a <= k; a++) {
		for(int b = 1; b <= k; b++) {
			for(int c = 1; c <= k; c++) {
				MaxSide = max(a, max(b, c));
				MinSide = min(a, min(b, c));
				MidSide = a + b + c - MaxSide - MinSide;
				if(MidSide + MinSide <= MaxSide) {	// Not Triangle
					cout << "[" << a << "," << b << "," << c << "]@" << endl;	
					CountNotTriangle++;
				} else {
					CountTriangle++;
					if(MidSide == MinSide || MidSide == MaxSide) {
						if(MidSide == MaxSide) {	// Regular triangle
							cout << "[" << a << "," << b << "," << c << "]!" << endl;
							CountRegular++;
						} else {	// Isosceles triangle
							cout << "[" << a << "," << b << "," << c << "]#" << endl;
							CountIsosceles++;
						}
					} else if(MidSide*MidSide + MinSide*MinSide == MaxSide*MaxSide){  //Right triangle
						cout << "[" << a << "," << b << "," << c << "]*" << endl;
						CountRight++;
					} else {
						cout << "[" << a << "," << b << "," << c << "]" << endl;
					}
				}
			}
		}
	}	
	cout << "========  " << "Summary" << "  ========" << endl;	//the result of each categories
	cout << setiosflags(ios::left) << setw(20) << "1. Not a Triangle" << resetiosflags(ios::left) << setw(5) << CountNotTriangle << endl;
	cout << setiosflags(ios::left) << setw(20) << "2. Triangle" << resetiosflags(ios::left) << setw(5) << CountTriangle << endl;
	cout << setiosflags(ios::left) << setw(20) << "a. Isosceles" << resetiosflags(ios::left) << setw(5) << CountIsosceles << endl;
	cout << setiosflags(ios::left) << setw(20) << "b. Regular" << resetiosflags(ios::left) << setw(5) << CountRegular << endl;
	cout << setiosflags(ios::left) << setw(20) << "c. Right" << resetiosflags(ios::left) << setw(5) << CountRight << endl;		
	return 0;
}
