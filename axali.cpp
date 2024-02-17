#include <iostream>
using namespace std;

int main() {
    int n, n1, n2, n3, n4, n5, n6;

    // Input
    cout << "Write a number: ";
    cin >> n;

    if (100 <= n && n <= 999) {
        
        n1 = n % 10;
        n2 = (n % 100 - n1) / 10;
        n3 = n / 100;

        if (n3 > n2 && n2 > n1) {
            n5 = n1 * 100 + n2 * 10 + n3;
            n4 = n - n5;
            cout << n4;
        } else if (n3 > n1 && n1 > n2) {
            n5 = n2 * 100 + n1 * 10 + n3;
            n6 = n3 * 100 + n1 * 10 + n2;
            n4 = n6 - n5;
            cout << n4;
        } else if (n1 > n2 && n2 > n3) {
            n5 = n3 * 100 + n2 * 10 + n1;
            n6 = n1 * 100 + n2 * 10 + n3;
            n4 = n6 - n5;
            cout << n4;
        } else {
            n5 = n3 * 100 + n1 * 10 + n2;
            n6 = n2 * 100 + n1 * 10 + n3;
            n4 = n6 - n5;
            cout << n4;
        }
    } else {
        cout << "Invalid input. Please enter a three-digit number." << endl;
    }

    return 0;
}

