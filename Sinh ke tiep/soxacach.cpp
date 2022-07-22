#include<bits/stdc++.h>
using namespace std;
int n, a[15],b[15]={0};
int check(int a[],int n){
    for(int i=1;i<=n-1;i++){
        if(a[i]-a[i+1]==1 ||a[i]-a[i+1]== -1) return 0;
    }
    return 1;
}
void in(){
    for(int i=1;i<=n;i++) cout << a[i];
    cout <<"\n";
}
void quaylui(int i){
    int j;
    for(j=1;j<=n;j++){
        if(b[j]==0) {
            a[i]=j;
            b[j] = 1;
            if(i==n) {
                if(check(a,n)) in();
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
        cin >> n;
        quaylui(1);
    }
}
