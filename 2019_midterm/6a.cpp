#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int draw() {
    int result = rand() % 10 + 1;
    if (result <= 4)
        return 1;
    else if (result <= 7)
        return 2;
    else if (result <= 9)
        return 3;
    else 
        return 4;
}

int main() {
    srand(time(NULL));
    cout << draw() << endl;
    return 0;
}
