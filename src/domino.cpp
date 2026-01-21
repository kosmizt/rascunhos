#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    if (M < 1 || N < 1 || M > 16 || N > 16) {
        cerr << "Error\n";
        return 1;
    }

    cout << (M * N) / 2 << '\n';
    return 0;
}