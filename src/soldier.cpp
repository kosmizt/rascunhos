#include <iostream>
using namespace std;

int main(){
    long long K, N, W;
    cin >> K >> N >> W;

    long long total = K * W * (W+1)/2;
    long long borrow = total - N;

    if (borrow < 0) borrow = 0;
    cout << borrow << '\n';
}
