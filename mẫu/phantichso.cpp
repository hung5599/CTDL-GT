#include<bits/stdc++.h>
using namespace std;
int n,k,A[100],ok=0;
vector <string> v;
void in(){
    string s ="(";
    for(int i=1;i<=k-1;i++) s = s + to_string(A[i]) + " ";
    s = s + to_string(A[k]) +")";
    v.push_back(s);
}
void sinh(){
    int i=k,a,b,c,j;
    while(i>0&&A[i]==1) i--;
    if(i==0) ok=1;
    else{
        A[i] = A[i]-1;
        a = k-i+1;
        k = i;
        b = a/A[i];
        c = a%A[i];
        if(b>0) {
            for(j=i+1;j<=i+b;j++)  A[j]= A[i];
            k+=b;
        }
        if(c>0){
            k++;
            A[k]=c;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n ;
        A[1]=n;
        k=1;
        while(!ok){
        in();
        sinh();
        }
        cout << v.size()<<endl;
        for(int i=0;i<v.size();i++) cout << v[i] << " ";
        ok=0; 
        v.clear();
        cout << "\n";
    }
}