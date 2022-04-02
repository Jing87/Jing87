#include <iostream>

using namespace std;

int main() {
	int vote;
	int count1 = 0;
	int count2 = 0;
	bool condition = 1;
	while(condition) {
		cout << "Please enter 1 for candidate 1 or 2 for candidate 2 (Enter -1 to end the vote): ";
		cin >> vote;
		switch(vote) {
			case 1:
				count1++;
				break;
			case 2:
				count2++;
				break;
			case -1:
				condition = false;
				break;
			default:
				cout << "[Error]: Wrong number, please enter again!" << endl;
				break;
		}
	}
	if(count1 > count2)
		cout << "Candidate 1 wins!" << endl;
	else if(count1 < count2)
		cout << "Candidate 2 wins!" << endl;
	else
		cout << "The vote ends in a tie!" << endl;
	return 0;
}
