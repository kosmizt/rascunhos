#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;

    if (A < 1 || A > 10) {
        cerr << "Error\n";
        return 1;
    }

    cout << A + A*A + A*A*A << '\n';

    return 0;
}
