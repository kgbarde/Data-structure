#include <iostream>
using namespace std;

int main() {
    int bookID[5];
    int searchID;
    bool found = false;

    
    cout << "Enter the IDs of 5 books:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> bookID[i];
    }

    cout << "Enter book ID to search: ";
    cin >> searchID;

  
    for (int i = 0; i < 5; i++) {
        if (bookID[i] == searchID) {
            found = true;
            break;
        }
    }

   
    if (found)
        cout << "Book found" << endl;
    else
        cout << "Book not found" << endl;

    return 0;
}

