#include <bits/stdc++.h>
using namespace std;
int s,k;
void check1(int s,int k ){
    vector <int> v;
    if(s>9*k){
        cout << -1 << " ";
        return;
    }
    if(s==0&&k==1) {
        cout << 0 <<" ";
        return;
    }
    if(s==0&&k!=1) {
        cout << -1 <<" " ;
        return;
    }
    int i=9;
    while(k>0){
        if(s>i){
            s-=i;
            v.push_back(i);
            k--;
        }
        else i--;
    }
    for(int i=v.size()-1;i>=0;i--) {
        if(i==v.size()-1) cout << v[i] +s;
        else cout << v[i];
    }
    cout << " ";
}
void check2(int s,int k){
    vector <int> v;
    if(s>9*k){
        cout << -1 <<" ";
        return;
    }
    if(s==0&&k==1) {
        cout << 0 <<" " << 0 ;
        return;
    }
    if(s==0&&k!=1) {
        cout << -1 <<" " ;
        return;
    }
    int i=9;
    while(k>0){
        if(s>=i){
            s-=i;
            v.push_back(i);
            k--;
        }
        else i--;
    }
    for(int i=0;i<v.size();i++) {
        if(i==v.size()-1) cout << v[i] +s;
        else cout << v[i];
    }
    cout << " ";
}
main(){
    
        cin >>k>>s;
        check1(s,k);
        check2(s,k);
        cout << endl;
    }