#include <iostream>

using namespace std;

int main() {
    char season;
    cout << "Enter a character to represent four seasons until the user enters EOF: ";
    while (cin >> season) {
        switch (season) {
            case 's':
            case 'S':
                cout << "Spring" << endl;
                break;
            case 'm':
            case 'M':
                cout << "Summer" << endl;
                break;
            case 'f':
            case 'F':
                cout << "Fall" << endl;
                break;
            case 'w':
            case 'W':
                cout << "Winter" << endl;
                break;
            default:
                cout << "The entered character is illegal" << endl;
                break;
        }
        cout << "Enter a character to represent four seasons until the user enters EOF: ";
    }
    return 0;
}
