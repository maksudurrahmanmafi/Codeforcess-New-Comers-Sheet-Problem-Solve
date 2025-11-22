#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float x;
    cin >> x;
    if (x < 0 || x>100)
    {
        cout << "Out of Intervals";
    }
    else if (x <= 25)
    {
        cout << "Interval [0,25]";
    }
    else if (x <= 50)
    {
        cout << "Interval (25,50]";
    }
    else if (x <= 75)
    {
        cout << "Interval (50,75]";
    }
    else if (x <= 100)
    {
        cout << "Interval (75,100]";
    }
    return 0;
}
