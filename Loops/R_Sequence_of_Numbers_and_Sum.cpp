#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int N, M;
        cin>>N>>M;
        
        if (N <= 0 || M <= 0) break;  // terminate condition

        int sum = 0;

       
        if (N > M) swap(N, M);

        for (int i = N; i <= M; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << "\n";
    }
}
