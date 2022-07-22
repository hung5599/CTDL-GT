#include<bits/stdc++.h>
using namespace std;
int n;
string s[10000];
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        s[1] = '0';
        s[2] = '1';
        if(n>1){
            int vt=2;
            for(int i=2;i<=n;i++){
                int k = pow(2,i);
                for(int j=1;j<=vt;j++){
                    s[k-j+1] = '1' + s[j];
                    s[j] = '0' + s[j];
                }
                 vt= k;
            }
        }
        for(int i=1;i<=pow(2,n);i++) cout << s[i] <<" ";   
        cout << endl;
        s->clear();
        }
    }
