#include<bits/stdc++.h>

using namespace std;


int main() {
    int a, b, x;
    cin >> a >> b >> x;
    if (a + b < x || a > x)cout << "NO";
    else cout << "YES";
    return 0;
}
