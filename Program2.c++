#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the value of a: ";
    cin >> a;

    int num = 1; // start from the first odd number
    for (int i = 0; i < a; ++i) {
        cout << num;
        if (i != a - 1) {
            cout << ", ";
        }
        num += 2;
    }

    cout << endl;
    return 0;
}
