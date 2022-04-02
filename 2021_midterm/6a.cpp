#include<iostream>

using namespace std;	

int main() {
	int num, cycle = 1;
	cout << "Please input a positive integer: ";
	cin >> num;
	while(num != 1){
		if(num % 2 == 0)
			num = num / 2;
		else
			num = 3*num + 1;
		cycle++;
	}
	cout << "The cycle length is " << cycle << endl;
	return 0;
}
