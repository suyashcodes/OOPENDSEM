#include <iostream>
using namespace std;
// Function template for generic addition
template <typename T>
T add(T a, T b) {
    cout << "Generic add function: ";
    return a + b;
}

// Overloaded function template for pointers
template <typename T>
T add(T* a, T* b) {
    cout << "Pointer-specific add function: ";
    return (*a) + (*b);
}

// Overloaded function template for mixed types
template <typename T, typename U>
U add(T a, U b) {
    cout << "Mixed-type add function: ";
    return static_cast<U>(a) + b;
}

int main() {
    // Testing the generic add function
    cout << add(5, 10) << endl;

    // Testing the pointer-specific add function
    int x = 15, y = 20;
    cout << add(&x, &y) << endl;

    // Testing the mixed-type add function
    double result = add(3, 4.5);
    cout << result << endl;

    return 0;
}
