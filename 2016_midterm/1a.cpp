#include <iostream>

using namespace std;

int main() {
    int num, output = 0;
    cout << "inputs a five-digit integer: ";
    cin >> num;
    for (int i = 10000; i >= 1; i /= 10) {
        output = num / i;
        cout << output << endl;
        num = num - output * i;
    }
    return 0;
}
