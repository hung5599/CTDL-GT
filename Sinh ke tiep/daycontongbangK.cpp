#include<bits/stdc++.h>
using namespace std;
int n,a[20]={0},b[20],k;
vector <string> v;
int dem(int a[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(a[i]) count ++;
    }
    return count;
}
bool check(int a[], int k){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]) sum+=b[i]; 
    }
    if(sum==k) return true;
    else return false;
}
void gan(){
    if(check(a,k)){
    int c = dem(a,n);
    string s;
    for(int i=0;i<n;i++) {
        if(a[i]==1&&c>1) {
        s =  s + to_string(b[i]);
        s = s+ ' ';
        c--;
        }
        else if(a[i]==1&&c==1) s+= to_string(b[i]);
    }
    s = '[' + s;
    s = s + ']';
    v.push_back(s);
    }
}
void quaylui(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-1) gan();
        else quaylui(i+1);

    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
    cin >> n >>k;
    for(int i=0;i<n;i++) cin >> b[i];
    sort(b,b+n);
    quaylui(0);
    int p = v.size();
    if(v.size()!=0){
        for (int i = p-1; i >= 0; i--)
    {
        cout <<v[i] << " ";
    }
    }
    else cout << -1;
        cout << "\n";
        v.clear();
    }
    
}