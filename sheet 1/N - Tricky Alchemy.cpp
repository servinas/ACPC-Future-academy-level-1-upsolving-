#include<bits/stdc++.h>

using namespace std;


int main() {
    long long  a, b, x, y, z;
    //x->yellow -> 2 yellow crystals
    //y->green -> 1 yellow crystals and 1 blue crystals
    //z->blue -> 3 blue crystals
    cin >> a >> b >> x >> y >> z;
    long long  blue = z * 3 + y;
    long long  yellow = x * 2 + y;
    long long  ans = 0;
    if (blue > b)
        ans += (blue - b);
    if (yellow > a)
        ans += (yellow - a);
    cout << ans;

    return 0;
}
