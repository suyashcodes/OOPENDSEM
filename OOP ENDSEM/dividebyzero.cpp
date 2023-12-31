#include <iostream>
using namespace std;
int main() {
        int numerator, denominator, result;
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    try {
        if (denominator == 0) {
            throw runtime_error("Error: Division by zero is not allowedsuyashashashash.");
        }
        result = numerator / denominator;
        cout << "Result of division: " << result << std::endl;
    } catch (exception& e) {
        cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
