#include<bits/stdc++.h>
using namespace std;
int n, a[10],b[10]={0},c[10];
string s,str = "0" ;
void in(){
    for(int i=1;i<=n;i++) cout << s[a[i]] ;
    cout << " ";
}
void quaylui(int i){
    int j;
    for(j=1;j<=n;j++){
        if(b[j]==0) {
            a[i]=j;
            b[j] = 1;
            if(i==n) {
                in();
            }
            else quaylui(i+1);
            b[j]=0;
        }
    }

}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        n = s.length();
        s = str + s;

        quaylui(1);
        s.clear();
        cout << endl;
    }
}
