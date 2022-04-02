#include<iostream>

using namespace std;	

int main(){
	int a, b;
	cout << "Please input the range of positive integers: ";
	cin >> a >> b;
	int LowerBound = min(a, b);
	int UpperBound = max(a, b);
	int num, cycle, MaxCycle = 0;
	for(int i = LowerBound; i <= UpperBound; i++){
		num = i;
		cycle = 1;
		while(num != 1){
			if(num % 2 == 0)
				num = num / 2;
			else
				num = 3*num + 1;
			cycle++;
		}
		MaxCycle = max(MaxCycle, cycle);
	}
	cout << "The max cycle length between [" << a << ", " << b << "] = " << MaxCycle << endl;
	return 0;
}
