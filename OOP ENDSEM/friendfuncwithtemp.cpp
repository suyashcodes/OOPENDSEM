#include<iostream>
template <typename T>
class MyClass {
private:
    T data;

public:
    MyClass(T value) : data(value) {}

    // Declaration of a friend function inside the class template
    template <typename U>
    friend void display(const MyClass<U> obj);
};
// Definition of the friend function outside the class template
template <typename U>
void display(const MyClass<U> obj) {
    std::cout << "Data inside MyClass: " << obj.data << std::endl;
}
int main() {
    // Instantiating MyClass with int
    MyClass<int> myObj(42);

    // Using the friend function to access private member
    display(myObj);

    return 0;
}
