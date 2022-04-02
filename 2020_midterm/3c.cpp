#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Please input a positive integer n: ";
	cin >> n;
	for (int i = n; i >= 1; i--) {	
		for(int j = 1; j <= (n+i-1); j++) {
			if(j <= (n-i))
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}
