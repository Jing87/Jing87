#include<iostream>
#include<iomanip>

using namespace std;

bool isPrime(int x){
	for(int i = 2; i < x; i++){
		if (x % i == 0)
			return false;
	}	
	return true;
}

int main() {
	for(int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; j++)
			if (isPrime(i+j))
				cout << "*** = " << setw(2) << i*j << " | ";
			else
				cout << i << "*" << j << " = "<< setw(2) << i*j << " | ";		
		cout << endl;
	}
	return 0;
}
