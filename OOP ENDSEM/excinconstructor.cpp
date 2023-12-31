#include <iostream>
#include <stdexcept>

class MyClass {
public:
    ~MyClass() {
        std::cout << "Destructor: Throwing exception." << std::endl;
        throw std::runtime_error("Exception in destructor.");
    }
};

int main() {
    try {
        MyClass obj;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // The program terminates here due to the exception thrown in the destructor.

    return 0;
}
