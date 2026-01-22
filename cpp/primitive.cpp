#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B) {
        // second player wins
        if (C == 0) cout << "Aoki\n";
        else cout << "Takahashi\n";
    } else if (A > B) {
        cout << "Takahashi\n";
    } else {
        cout << "Aoki\n";
    }

    return 0;
}
