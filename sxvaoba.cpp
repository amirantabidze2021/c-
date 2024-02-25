#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    // shesatani monacemebi
    int n;
    cin >> n;
 
    // samnishna ricxvis masivshi chawera
    int digits[3];
    digits[0] = n % 10;  // Units place
    digits[1] = (n / 10) % 10;  // Tens place
    digits[2] = n / 100;  // Hundreds place

    // sortireba udidesi da umciresi ricxvis
    sort(digits, digits + 3);

    // udidessa da umcires shoris sxvaobis povna 
    int largest = digits[2] * 100 + digits[1] * 10 + digits[0];
    int smallest = digits[0] * 100 + digits[1] * 10 + digits[2];
    int difference = largest - smallest;

    // shedegi
    cout << difference << endl;

    return 0;
}

