#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int kq;
int C[1005][1005];
void solve(){
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(i==0||j==0) C[i][j]=0;
            else {
                if(s1[i]==s2[j]) C[i][j] = C[i-1][j-1] +1 ;
                else C[i][j] = max(C[i-1][j], C[i][j-1]); 
            }
            kq = max(kq,C[i][j]);
        }
    }
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        cin >> s1 >> s2;
        s1 = " "+s1;
        s2 = " " + s2;
        kq = 0;
        solve();
        cout << kq << endl;
    }
}