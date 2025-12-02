#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // Declaration 
    float x,y;
    float sum, diff, pro, qot;
    cout << "Enter two numbers ";
    cin >> x >> y;
    // Calculations
    sum = (x + y);
    diff = (x-y);
    pro = (x*y);
    qot = (x/y);
    // Every number will be displayed with 3 decimel places 
    cout << " Sum is:         " << fixed << setprecision(3) << sum << endl;
    cout << " Difference is:  " << fixed <<  setprecision(3) << diff << endl;
    cout << " Product is:     " << fixed << setprecision(3) << pro << endl;
    cout << " Quotient is:    " << fixed << setprecision(3) << qot << endl;

    cout << endl;

    int a,b;
    int sum1, pro1, diff1, qot1;
    cout << "Enter two numbers ";
    cin >> a >> b;
    sum1 = (a + b);
    diff1 = (a-b);
    pro1 = (a*b);
    qot1 = (a/b);
    // Each number will be displayed in whole number so no accuracy while dividing 
    cout << " Sum is:        " << sum1 << endl;
    cout << " Difference is: " << diff1 << endl;
    cout << " Product is:    " << pro1 << endl;
    cout << " Quotient is:   " << qot1 << endl;
    return 0;
}