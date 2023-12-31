#include <iostream>
using namespace std;
void innerFunction() {
    try {
        throw "Exception thrown from innerFunction.";

    } catch (char const* e) {
        cout << "Caught exception in innerFunction: " << e << endl;
        throw; 
    }
}

void outerFunction() {
    try {
        innerFunction();

    } catch (char const* e) {
        cout << "Caught rethrown exception in outerFunction: " << e << endl;
        throw;
    }
}

int main() {
    try {
        outerFunction();
    } catch (char const* e) {
        cout << "Exception caught in main function : " << e<<endl;
    }

    return 0;
}
