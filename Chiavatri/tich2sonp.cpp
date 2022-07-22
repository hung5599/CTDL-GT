#include <bits/stdc++.h>
using namespace std;
string s1,s2;
long long kq;
long long thapphan(string s){
    long long tmp=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        tmp+= (s[i]-'0')*pow(2,n-i-1);
    }
    return tmp;
}

main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        cin >> s1 >> s2;
        kq = thapphan(s1) * thapphan(s2);
        cout << kq << endl;
    }
}