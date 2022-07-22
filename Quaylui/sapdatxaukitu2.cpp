#include <bits/stdc++.h>
using namespace std;
main(){
    int t,i,M,d;
    string s;
    cin >> t;
    while(t--){
        cin >> d ;
        cin.ignore();
        cin >> s;
        int a['Z'+1]={};
        for(i=0;i<s.size();i++) a[s[i]]++;
        M = *max_element(a+'A',a+'Z');
        cout << M <<endl;
        if((d)*M >= s.size()) cout << -1 <<endl;
        else cout << 1 <<endl;
    }
}