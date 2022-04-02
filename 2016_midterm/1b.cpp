#include <iostream>

using namespace std;

int main() {
    cout.precision(2); cout.setf(ios::fixed);
    cout << "N\tN/20\tN/5\tN*5\tN*15" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << "\t";
        cout << i / 20. << "\t";
        cout << i / 5. << "\t";
        cout << i * 5 << "\t";
        cout << i * 15 << endl;
    }
    return 0;
}