#include <iostream>

using namespace std;

class parent {};

class child : public parent {};

int main() {
    child c;

    try {
        cout << "This is an example of exception and inheritance" << endl;
        throw c;
    } catch (parent p) {
        cout << "This is the catch block for the parent exception" << endl;
    } catch (child c) {
        cout << "This is the catch block for the child exception" << endl;
    }

    return 0;
}
