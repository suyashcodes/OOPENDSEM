#include <iostream>
#include <deque>

using namespace std;

deque<int> myDeque;

void displayDeque() {
    cout << "Deque: ";
    for (int value : myDeque) {
        cout << value << " ";
    }
    cout << endl;
}

void pushBack() {
    int element;
    cout << "Enter element to push to the back: ";
    cin >> element;
    myDeque.push_back(element);
}

void pushFront() {
    int element;
    cout << "Enter element to push to the front: ";
    cin >> element;
    myDeque.push_front(element);
}

void popBack() {
    if (!myDeque.empty()) {
        myDeque.pop_back();
        cout << "Element popped from the back." << endl;
    } else {
        cout << "Deque is empty. Nothing to pop." << endl;
    }
}

void popFront() {
    if (!myDeque.empty()) {
        myDeque.pop_front();
        cout << "Element popped from the front." << endl;
    } else {
        cout << "Deque is empty. Nothing to pop." << endl;
    }
}

void displayFront() {
    if (!myDeque.empty()) {
        cout << "Front element: " << myDeque.front() << endl;
    } else {
        cout << "Deque is empty." << endl;
    }
}

void displayBack() {
    if (!myDeque.empty()) {
        cout << "Back element: " << myDeque.back() << endl;
    } else {
        cout << "Deque is empty." << endl;
    }
}

void clearDeque() {
    myDeque.clear();
    cout << "Deque cleared." << endl;
}


int main() {
    int choice;

    do {
        cout << "\nDeque Operations Menu:"
             << "\n1. Push Back"
             << "\n2. Push Front"
             << "\n3. Pop Back"
             << "\n4. Pop Front"
             << "\n5. Display Front"
             << "\n6. Display Back"
             << "\n7. Display Deque"
             << "\n8. Clear Deque"
             << "\n9. Exit"
             << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                pushBack();
                break;
            case 2:
                pushFront();
                break;
            case 3:
                popBack();
                break;
            case 4:
                popFront();
                break;
            case 5:
                displayFront();
                break;
            case 6:
                displayBack();
                break;
            case 7:
                displayDeque();
                break;
            case 8:
                clearDeque();
                break;
            case 9:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }

    } while (choice != 9);

    return 0;
}
