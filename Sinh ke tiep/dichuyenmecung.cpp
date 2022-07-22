#include <bits/stdc++.h>

using namespace std;
int a[10][10],b[10][10], n, ok;
char s[50];
void in(int k)
{
    for(int i=0; i<k; i++) cout << s[i];
    cout << " ";
}
void quaylui(int i, int j, int k)
{
    if(i==n-1 && j==n-1){
        in(k);
        ok=1;
        return;
    }
    if(i+1<n && a[i+1][j]==1 && b[i+1][j]==0){
        s[k]='D'; b[i+1][j]=1;
        quaylui(i+1,j,k+1);
        b[i+1][j]=0;
    }
    if(j-1>=0 && a[i][j-1]==1 && b[i][j-1]==0){
        s[k] = 'L'; b[i][j-1]=1;
        quaylui(i,j-1,k+1);
        b[i][j-1]=0;
    }
    if(j+1 <n && a[i][j+1]==1 && b[i][j+1]==0){
        s[k] = 'R'; b[i][j+1]=1;
        quaylui(i,j+1,k+1);
        b[i][j+1]=0;
    }
    if(i-1>=0 && a[i-1][j]==1 && b[i-1][j]==0){
        s[k]='U'; b[i-1][j]=1;
        quaylui(i-1,j,k+1);
        b[i-1][j]=0;
    }
}
int main()
{
    int i,j,t; cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++) for(j=0;j<n;j++){ cin >> a[i][j]; b[i][j] = 0;}
        ok =0;
        if(a[0][0]==0) cout << -1;
        else{
            quaylui(0,0,0);
            if(!ok) cout << -1;
        }
        cout << endl;
    }
    return 0;
}