#include<bits/stdc++.h>
using namespace std;
int A[15],B[15]={0},n;
vector <string > v;
void dayvao(){
    string s="";
    for(int i=1;i<=n;i++) s+= to_string(A[i]);
    v.push_back(s);
}
void quaylui(int i){
    int j;
    for(j=1;j<=n;j++){
        if(!B[j]){
            A[i]=j;
            B[j]=1;
            if(i==n) dayvao();
            else quaylui(i+1);
            B[j]=0;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
    cin >> n;
    quaylui(1);
    int len = v.size()-1;
    for(int i=len;i>=0;i--){
        cout << v[i] <<" ";
    }
    v.clear();
    cout << "\n";
    }
}