#include <iostream>
#include <stdexcept>
#include <cstdlib>

using namespace std;

// Custom unexpected handler
void customUnexpectedHandler() {
    cerr << "Unexpected exception occurred." << endl;
    exit(EXIT_FAILURE); // Terminate the program
}

// Function that might throw an exception
void riskyFunction() {
    throw runtime_error("This is an unexpected exception.");
}

int main() {
    // Set the custom unexpected handler
    set_unexpected(customUnexpectedHandler);

    try {
        // Call a function that might throw an exception
        riskyFunction();

    } catch (const exception& e) {
        // Catch the exception and handle it
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
