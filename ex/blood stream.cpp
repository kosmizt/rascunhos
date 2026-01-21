#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

     if (B<50 || B>A || A>300) {
        cerr << "Error\n";
        return 1;
    }

    double result = (A - B) / 3.0 + B;
    cout << result << '\n';
}