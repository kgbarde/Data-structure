#include <iostream>
using namespace std;

int main() {

    int rollNumbers[5] = {55, 56, 57, 58, 59};
    int searchroll;

    cout << "Enter the student roll number to search: ";
    cin >> searchroll;

    for (int i = 0; i < 5; i++) {

        if (rollNumbers[i] == searchroll) {
            cout << "Roll number is present here." << endl;
            return 0;
        }
    }

    cout << "Roll number is not present." << endl;

    return 0;
}