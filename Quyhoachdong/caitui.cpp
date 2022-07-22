#include<bits/stdc++.h>
using namespace std;
struct dovat{
    int w,v;
};
int n,s;
dovat dv[100];
int f[105][105];
int kq;
void caitui(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            if(j<dv[i].w) f[i][j]= f[i-1][j];
            else{
                f[i][j]= max(f[i-1][j],f[i-1][j-dv[i].w] + dv[i].v);
            }
            kq = max(kq,f[i][j]);
        }
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> s;
        kq = 0;
        f[105][105] ={0};
        for(int i=1;i<=n;i++){
            cin >> dv[i].w;
        }
        for(int i=1;i<=n;i++){
            cin >> dv[i].v;
        }
        caitui();
        cout << kq <<endl;
    }
}