#include <iostream>
using namespace std;

int main() {
    int W, K;
    cin >> W >> K;

    if (W < 0 || W > K || K > 1e9) {
        cerr << "Error\n";
        return 1;
    }

    int Y = 2*K - W;
    cout << Y << '\n';

    return 0;
}
