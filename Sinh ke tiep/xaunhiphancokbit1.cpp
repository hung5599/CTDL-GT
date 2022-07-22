#include<bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000]={0},k, ok =1,so =0;
vector <string> v;
bool check1(int a[],int n,int k){
    int count=0; 
    for(int i=1;i<=n-k+1;i++) {
        if(a[i]==1){
            int dem=1;
            for(int j=1;j<k;j++){
               if(a[i+j]==1) dem++;
            }
            if(dem==k) count ++;
        }
   }
   if(count==1) return true;
   return false;
}
void in(){
    if(check1(a,n,k)){
        so++;
        string s ="";
    for(int i=1;i<=n;i++) {
        if(a[i]==1)  s+='A';
        else  s+='B';
    }
    v.push_back(s); 
    }
}
void next(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) in();
        else next(i+1);
    }
}
int main(){
        cin >> n >> k;
        for(int i=1;i<=n;i++) a[i]= 0;
        next(1);
        v.push_back(to_string(so));
        int len = v.size()-1;
        cout << v[len]<<"\n";
        for(int i=len-1;i>=0;i--){
            cout << v[i]<<"\n";
        }
}