#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int quotient;
    int remainder;
    char continueCalc;

    do {
        cout << "Swag Calc" << endl;
        cout << "Enter a Number: ";
        cin >> x;

        cout << "Enter another number: ";
        cin >> y;

        quotient = x / y;
        remainder = x % y;

        cout << "Your quotient is " << quotient << endl;
        cout << "Your remainder is " << remainder << endl;

        cout << "Would you like to continue calcing? (Y/N): ";
        cin >> continueCalc;
    } while (continueCalc == 'Y' || continueCalc == 'y');

    cout << "Exiting Swag Calc. Goodbye!" << endl;

    return 0;
}







































