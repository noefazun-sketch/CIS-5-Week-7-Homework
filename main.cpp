#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Homework 7 - Noe Zuniga
// CIS 5 Week 07 - Odd and Even

int main() {
    const int N = 20;
    int values[N];

    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < N; ++i) {
        values[i] = rand() % 100;
    }

    int evens[N];
    int odds[N];

    int evenCount = 0;
    int oddCount = 0;

    cout << "Original Array:" << endl;

    for (int i = 0; i < N; ++i) {
        cout << "[" << i << "] " << values[i] << endl;

        if (values[i] % 2 == 0) {
            evens[evenCount] = values[i];
            evenCount++;
        }
        else {
            odds[oddCount] = values[i];
            oddCount++;
        }
    }

    cout << endl;
    cout << "Even: ";

    for (int i = 0; i < evenCount; ++i) {
        cout << evens[i] << " ";
    }

    cout << endl;
    cout << "Odd: ";

    for (int i = 0; i < oddCount; ++i) {
        cout << odds[i] << " ";
    }

    cout << endl;

    return 0;
}