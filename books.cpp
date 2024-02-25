#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int height[4], thickness[4];

    // Input
    for (int i = 0; i < 4; ++i) { 
        cin >> height[i] >> thickness[i];
    }

    // Sort books
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (height[i] < height[j] || (height[i] == height[j] && thickness[i] < thickness[j])) {
                swap(height[i], height[j]);
                swap(thickness[i], thickness[j]);
            }
        }
    }

    // Output
    for (int i = 0; i < 4; ++i) {
        cout << height[i] << " " << thickness[i] << endl;
    }

    return 0;
}

