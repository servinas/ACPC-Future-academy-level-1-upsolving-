#include<bits/stdc++.h>

using namespace std;


int main() {
    string s;
    getline(cin, s);
    bool smile=0,frow=0;
    for (int i = 0; i < s.size() - 1; ++i) {
        if(s[i]==':'&&s[i+1]==')')smile=1;
        if(s[i]==':'&&s[i+1]=='(')frow=1;
    }
    if(smile&&frow)cout<<"double agent";
    else if(smile)cout<<"alive";
    else if(frow)cout<<"undead";
    else cout<<"machine";
    return 0;
}
