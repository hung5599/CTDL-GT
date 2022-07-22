#include<bits/stdc++.h>
using namespace std;
int a[10][10],B[10][10],n,OK;
char s[50];
void in(int k){
    for(int i=0;i<k;i++) cout << s[i];
    cout << " ";
}
void quaylui(int i,int j,int k){
    if(i==n-1&&j==n-1) {
        in(k);
        OK =1;
        return;
    }
    if( i+1<n && B[i+1][j] == 0 && a[i+1][j]==1){
        s[k] = 'D';
        B[i+1][j] =1 ;
        quaylui(i+1,j,k+1);
        B[i+1][j] = 0 ;
    }
    if(j-1 >=0 && B[i][j-1] == 0 &&  a[i][j-1]==1){
        s[k] = 'L';
        B[i][j-1] =1 ;
        quaylui(i,j-1,k+1);
        B[i][j-1] = 0 ;
    }
    if(j+1 <n && B[i][j+1] == 0 && a[i][j+1]==1){
        s[k] = 'R';
        B[i][j+1] =1 ;
        quaylui(i,j+1,k+1);
        B[i][j+1] = 0 ;
    }
    if(i-1 >= 0 && B[i-1][j] ==0 && a[i-1][j]==1){
        s[k] = 'D';
        B[i-1][j] =1 ;
        quaylui(i-1,j,k+1);
         B[i-1][j] = 0 ;

    }
}
main(){
    int t,i,j;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++) for(j=0;j<n;j++){
             cin >> a[i][j];
             B[i][j]=0;
             }
        if(a[0][0]==0) cout << -1;
        else{
            quaylui(0,0,0);
            if(!OK) cout << -1;
        }
        cout << endl;
    }
}