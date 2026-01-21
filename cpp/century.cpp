#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N < 1 || N > 3000) {
        cerr << "Error\n";
        return 1;
    }

    cout << (N - 1) / 100 + 1 << '\n';

    return 0;
}
