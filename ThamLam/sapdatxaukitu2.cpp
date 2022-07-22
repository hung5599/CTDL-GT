#include <bits/stdc++.h>
using namespace std;
int n,d;
main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> d;
        cin.ignore();
        cin >> s;
        int a['Z'+1] = {};
        for(int i =0;i<s.length();i++){
            a[s[i]]++;
        }
        int mx = *max_element(a+'A',a+'Z');
        if((mx-1)*(d-1)<= s.length()-mx ) cout << 1;
        else cout << -1;
        cout << endl;
    }
}   