#include<bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin>>n;
    //solution 1
    int yens=ceil((double )n/1000);
    // solution 2
    yens=n/1000;
    if(n>yens*1000)yens++;
    //////////////
    int changes =yens*1000-n;
    cout<<changes;
    return 0;
}
