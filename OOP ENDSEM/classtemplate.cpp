#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class Stack {
private:
    vector<T> elements;  // Note: No std:: prefix

public:
    void push(const T& value) {
        elements.push_back(value);
    }

    T pop() {
        if (!elements.empty()) {
            T last = elements.back();
            elements.pop_back();
            return last;
        } else {
            // Handle error: stack is empty
            // This is a simplified example; you might want to throw an exception or handle it differently.
            return T();
        }
    }

    T size(){
        return elements.size();
    }
};
int main(){
    Stack<int> s;
    s.push(3);
    cout << "Size of the stack after pushing one element :"<<s.size()<<endl;
    int x=s.pop();
    cout << "Popped element:"<<x<<endl;
    cout << "Size of the stack after popping one element :"<<s.size()<<endl;
    return 0;
}