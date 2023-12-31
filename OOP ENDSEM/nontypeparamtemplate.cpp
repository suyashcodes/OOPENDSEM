#include <iostream>

// Example 1: Non-type template parameter (integer)
template <int N>
class ArrayWrapper {
public:
    int array[N];

    // Constructor initializes the array with consecutive integers
    ArrayWrapper() {
        for (int i = 0; i < N; ++i) {
            array[i] = i;
        }
    }

    // Display the contents of the array
    void display() {
        std::cout << "Array contents: ";
        for (int i = 0; i < N; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Instantiate ArrayWrapper with a non-type template parameter (size = 5)
    ArrayWrapper<5> arrWrapper;

    // Display the contents of the array
    arrWrapper.display();

    return 0;
}
