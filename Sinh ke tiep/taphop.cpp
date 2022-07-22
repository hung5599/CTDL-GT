#include <bits/stdc++.h>
using namespace std;
int a[100],n,k,sum,cnt=0;
int check(int a[],int n,int sum){
    int tong=0;
    for(int i=1;i<=n;i++) tong+= a[i];
    if(tong == sum) return 1;
    else return 0;
}
void in(){
    if(check(a,k,sum)) cnt++;
}
void quaylui(int i){
    int j;
    for(j= a[i-1] +1; j<= n-k+i; j++){
        a[i] = j;
        if(i==k) in();
        else quaylui(i+1);
    }
}
int main(){
    while(cin >> n >> k >> sum){
        if(n==0&&k==0&&sum==0) return 0;
        else{
        for(int i=1;i<=n;i++) a[i] =i ;
        quaylui(1);
        cout  << cnt << endl;
        cnt =0;
        }
    }
}