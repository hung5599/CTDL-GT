#include<bits/stdc++.h>
using namespace std;
int n,k,a[35],c[35],b;
set <int> s;
vector <int> v;
void in(){
    for(int i=1;i<=k;i++) cout << a[i] << " ";
    cout << "\n";
}
void sinh(int i){
    int j;
    for(j= a[i-1]+1;j<=b-k+i;j++){
        a[i]= j ;
        if(i == k) in();
        else sinh(i+1);  
    }
}
int main(){
        cin >> n >> k;
        for(int i=1;i<=n;i++) {
            cin >> c[i];
            s.insert(c[i]);
        }
        v.push_back(0);
        for(auto x: s){
            v.push_back(x);
        }
        b=s.size();
        sinh(1);
    }