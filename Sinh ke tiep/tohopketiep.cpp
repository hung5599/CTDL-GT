#include<bits/stdc++.h>
using namespace std;
int ok=0,c[20],n,k;
vector <int> v;
int dem(vector <int > u,vector <int > v){
    int x=0;
    int len = v.size();
    for(int i=1;i<len;i++){
        for(int j=1;j<len;j++){
            if(u[i]==v[j]) x++;
        }
    }
    return x;
}
void gan(){
    for(int i=1;i<=k;i++) v.push_back(c[i]);
}
void next(int c[],int n, int k){
    int i=k,j;
    while(i>=1&&c[i]==n-k+i) {
        i--;
    }
    if(i==0) {
        ok=1;
        cout << k <<"\n";
        return;
    }
        c[i]=c[i]+1;
        for(j=i+1;j<=k;j++) c[j]=c[j-1]+1;
        gan();

}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector <int > u;
        u.push_back(0);
        for(int i=1;i<=k;i++)  {
            cin >> c[i];
            u.push_back(c[i]);
        }

        v.push_back(0);
        next(c,n,k);
        int count  = dem(u,v) ;
        v.clear();
        if(!ok) cout << k - count << "\n";
        ok=0;
    }
}