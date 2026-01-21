#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    if (N < 100 || N > 200 || A < 1 || A > 100 || B < 1 || B > 100) {
        cerr << "Error\n";
        return 1;
    }

    cout << N - A + B << '\n';
    return 0;   
}
