#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int draw() {
    int result = rand() % 10 + 1;
    if (result <= 1)
        return 1;
    else if (result <= 3)
        return 2;
    else if (result <= 6)
        return 3;
    else 
        return 4;
}

int main() {
    srand(time(NULL));
    int count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0, tmp;
    for (int i = 0; i < 100; i++) {
        tmp = draw();
        if (tmp == 1)
            count_1++; 
        else if (tmp == 2)
            count_2++;
        else if (tmp == 3)
            count_3++;
        else if (tmp == 4)
            count_4++;
    }
    cout << "1: " << count_1 << endl;
    cout << "2: " << count_2 << endl;
    cout << "3: " << count_3 << endl;
    cout << "4: " << count_4 << endl;
    return 0;
}
