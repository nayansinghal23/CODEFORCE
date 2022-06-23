// Palindromic Numbers -> https://codeforces.com/contest/1700/problem/B
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t != 0) {
        long long n;
        cin>>n;
        long long num1;
        cin>>num1;
        string firstNum = to_string(num1);
        if(firstNum[0] != '9') {
            long long num2 = 0;
            firstNum = "";
            for(int i = 1; i <= n; i++) {
                firstNum += "9"; 
            }
            num2 = stoi(firstNum);
            cout<<(num2 - num1)<<endl;
        }
        else {
            long long num2 = 0;
            firstNum = "";
            for(int i = 1; i <= n + 1; i++) {
                firstNum += "1"; 
            }
            num2 = stoi(firstNum);
            cout<<(num2 - num1)<<endl;
        }
        t--;
    }
    return 0;
}