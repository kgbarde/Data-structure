/* write a program menu driven for simple bank token system
that allows the user to issue the token, display all tokens, 
serve customer and exit the program */

#include <iostream>
using namespace std;

int main() {
    int queue[100], front = 0, rear = 0;
    int choice, token = 1;

    do {
        cout << "\n1.Issue Token\n2.Display Tokens\n";
        cout << "3.Serve Customer\n4.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (rear < 100) {
                    queue[rear++] = token;
                    cout << "Token issued: " << token++ << endl;
                } else
                    cout << "Queue is full!\n";
                break;

            case 2:
                if (front == rear)
                    cout << "No waiting tokens!\n";
                else {
                    for (int i = front; i < rear; i++)
                        cout << queue[i] << " ";
                    cout << endl;
                }
                break;

            case 3:
                if (front == rear)
                    cout << "No customers!\n";
                else
                    cout << "Serving token: " << queue[front++] << endl;
                break;

            case 4:
                cout << "Exit\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
