#include <iostream>
#include <stdexcept>

using namespace std;

void func(int num1){
    try {

       if(num1) throw num1;
       else if(num1==0) throw "value is zero";

   } catch (int i) {
       cout << "Exception for number is occured" << endl;
   } catch (const char* str) {
       cout << "Exceotionfor string is handled" << endl;
   } catch (exception &e) { 
       cout << "An generic exception error occurred." << endl;
   } catch (...) {
       cout << "An unexpected error occurred." << endl;
   }

}

int main() {
   func(10);
   func(0);
   cout << "Program execution continues..." << endl;

   return 0;
}

