#include <iostream>

using namespace std;
void riskyFunction(int x) throw(int, double, runtime_error) {
    if (x == 0) {
        throw runtime_error("Runtime error: Cannot divide by zero.");
    } else if (x < 0) {
        throw x; // Throw an integer
    } else {
        throw 3.14; // Throw a double
    }
}

int main() {
    try {
        riskyFunction(55);
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    } catch (int i) {
        cout << "integer thrwon." << endl;
    } catch (double i) {
        cout << "double thrwon." << endl;
    } catch (...) {
        cout << "unknown exception is thrown" << endl;
    }

    return 0;
}
