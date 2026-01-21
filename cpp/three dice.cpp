#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A < 1 || A > 6 || B < 1 || B > 6 || C < 1 || C > 6) {
        cerr << "Error\n";
        return 1;
    }

    int a = 7 - A;
    int b = 7 - B;
    int c = 7 - C;

    int sum = a + b + c;
    cout << sum << '\n';

    return 0;
}
