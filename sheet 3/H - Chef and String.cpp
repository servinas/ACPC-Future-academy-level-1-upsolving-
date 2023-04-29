#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin>>t;
    string s;
    while (t--){
        cin>>s;
        int ans=0;
        for (int i = 1; i < s.size(); ++i) {
            if(s[i]=='y'&&s[i-1]=='x'){
                ans++;
                s[i]='0';
            }
            if(s[i]=='x'&&s[i-1]=='y'){
                ans++;
                s[i]='0';
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
