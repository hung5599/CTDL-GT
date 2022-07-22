#include<bits/stdc++.h>
using namespace std;
int n, a[10],b[10]={0},c[10];
void in(){
    for(int i=1;i<=n;i++) cout << c[a[i]] << " ";
    cout <<"\n";
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
        cin >> n;
        for(int i=1;i<=n;i++) cin >> c[i];
        sort(c+1,c+n+1);
        quaylui(1);

}
