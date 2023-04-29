#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int first_dig=0,last_dig=0;
        for (int i = 0; i < 3; ++i) {
            first_dig+=(s[i]-'0');
        }
        for (int i = 3; i < s.size(); ++i) {
            last_dig+=(s[i]-'0');
        }
        if(first_dig==last_dig)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
