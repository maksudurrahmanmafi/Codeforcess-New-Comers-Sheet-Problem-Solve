#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int fib=0,fib1=1;
    if(n>=1) cout<<fib<<" ";
    if(n>=2)cout<<fib1<<" ";
    for (int i = 1; i < n - 1; i++)
    {
        int fibo = fib + fib1;
        cout<<fibo<<" ";
 
        fib = fib1;
        fib1 = fibo;
    }
    
    return 0;
}
