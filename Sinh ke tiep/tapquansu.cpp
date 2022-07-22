#include<bits/stdc++.h>
using namespace std;
int ok,c[100000],n,k;
void in(){
    for(int i=1;i<=k;i++) cout << c[i] <<" ";
    cout <<"\n";
}
void next(int c[],int n, int k){
    int i=k,j;
    while(i>=1&&c[i]==n-k+i) {
        i--;
    }
    if(i==0) ok=1;
    else {
        c[i]=c[i]-1;
        for(j=i+1;j<=k;j++) {
            c[j]=c[j-1]+1;
            }
    }
    if(!ok) in();
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector <int > u;
        for(int i=1;i<=k;i++)  {
            cin >> c[i];
        }
        next(c,n,k);
        cout  << "\n";
    }
}