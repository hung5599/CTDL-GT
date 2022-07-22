#include<bits/stdc++.h>
using namespace std;
char quaylui(string s,long long n){
    long long x = s.length();
    if(n<x) return s[n];
    while(2*x <= n ) x = x*2;
    if(x==n) return quaylui(s,n-1);
    else return quaylui(s,n-x-1);
}
main(){
    int t;
    string s;
    long long n;
    while(t--){
        cin >> s >> n;
        cout << quaylui(s,n-1)<<endl;
    }
}