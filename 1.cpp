// Optimal Path -> https://codeforces.com/contest/1700/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t != 0) {
        long long n, m;
        cin>>n>>m;
        long long ans = ((m - 1 + n + (n * n)) * m) / 2;
        cout<<ans<<endl;
        t--;
    }
    return 0;
}