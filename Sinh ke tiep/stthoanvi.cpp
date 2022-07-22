#include <bits/stdc++.h>

using namespace std;
int a[16],b[16], n,k, dem=1;
bool check(int d[], int e[])
{
    for(int i=1;i<=n;i++){
        if(d[i]!=e[i]){
            return false;
        }
    }
    return true;
}
void quaylui(int i)
{
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
             dem++;
             if(check(a,b)==false) cout << dem <<" ";
        }
        else quaylui(i+1);
    }
}
int main()
{
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1; i<=k; i++) cin>> b[i];
        quaylui(1);
        dem = 1;
    }
    return 0;
}