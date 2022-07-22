#include <bits/stdc++.h>
using namespace std;
int n,s,A[25],B[25],kt;
vector <string> v;
void nhap(int A[],int n){
    for(int i=0;i<n;i++) cin >> A[i];
}
void quaylui(int i,int sum){
    int j;
    for(j=0;j<n;j++){
        if(A[j]>=B[i-1]){
        B[i]=A[j];
        sum+=A[j];
        if(sum==s){
            kt=1;
            string s="[";
            for(int j=1;j<=i-1;j++){
                s+= to_string(B[j]);
                s+=" ";
            }
            s+= to_string(B[i]) +"]";
            v.push_back(s);
        }
        else if(sum < s) quaylui(i+1,sum);
        sum-=A[j];
        }
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> s;
        nhap(A,n);
        B[0]=0;
        kt=0;
        quaylui(1,0);
        if(!v.empty()){
            for(int i=0;i<v.size();i++) cout << v[i];
            cout << endl; 
        }
        else cout << -1 << endl;
        v.clear(); 
    }
}