#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int num1, num2, num3, largest = 0, smallest  = 0;
    bool isEqual;
    isEqual = false;
    cout << "Enter Three Numbers" << endl;
    cout << "Number 1: "; cin >> num1;
    cout << "Number 2: "; cin >> num2;
    cout << "Number 3: "; cin >> num3;
    if  (num1 >= num2 && num1 >= num3) {
        largest = num1; 
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }
    if (num1 == num2 && num1 == num3) {
        isEqual = true;
    } else {
        isEqual = false;
    }
    cout << "Largest Number Is " << largest << endl;
    cout << "Smallest Number Is " << smallest << endl;
    if (isEqual == true){
        cout << "All Numbers Are Equal" << endl;
    } else {
        cout << "All Are Not Equal" << endl;
    }
    return 0;
}