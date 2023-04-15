#include<bits/stdc++.h>

using namespace std;


int main() {
    int n,k,y,x;
    cin>>n>>k>>x>>y;
    int total=0;
    if(k<=n){
        total=k*x;
        n-=k;
        total+=(n*y);
    }else{
        total=n*x;
    }
    cout<<total;
    return 0;
}
