#include<iostream>

using namespace std;

int main() {
	int a;
	cout << "Please type a value between [1, 999]: ";
	cin >> a;
	int Max = a, Min = a;
	
	if(a < 1 || a > 999){
		cout << "Stop!\n";
	} else {
		while(true){
			cout << "Please type a value between [1, 999]: ";
			cin >> a;
			if(a < 1 || a > 999){
				cout << "Stop!\n";
				break;
			}
			Max = max(a, Max);
			Min = min(a, Min);
		}
	}
	cout << "The min value is " << Min << endl;
	cout << "The max value is " << Max << endl;
	return 0;
}
