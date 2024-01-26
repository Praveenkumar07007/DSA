#include <iostream>
using namespace std;

// Function to print alternate even numbers from 'a' to 'b'
void func(int a, int b) {
    for (int i = a; i <= b; i+=4) {
        if (i % 2 == 0) {
            cout << i << " ";
            i++; // Skip the next even number
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    if (a < b) {
        func(a, b);
    } else {
        cout << "Invalid input: 'a' must be less than 'b'." << endl;
    }

    return 0;
}