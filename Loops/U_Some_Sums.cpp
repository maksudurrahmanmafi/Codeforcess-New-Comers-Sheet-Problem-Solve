#include <bits/stdc++.h>
using namespace std;

int digitSum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, A, B;
    cin >> N >> A >> B;

    long long ans = 0;
    for (int i = 1; i <= N; i++) {
        int s = digitSum(i);
        if (s >= A && s <= B) ans += i;
    }

    cout << ans << "\n";
    return 0;
}
