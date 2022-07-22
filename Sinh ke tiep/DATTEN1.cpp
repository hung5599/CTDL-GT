#include<bits/stdc++.h>
using namespace std;
int ok,n,k,a[35],c;
vector <string> v;
set <string> st;
void in(){
    for(int i=1;i<=k;i++) cout << v[a[i]] << " ";
    cout << "\n";
}
void sinh(int i){
    int j;
    for(j=a[i-1]+1;j<=c-k+i;j++){
        a[i]= j ;
        if(i == k) in();
        else sinh(i+1);  
    }
}
int main(){
        cin >> n >> k;
        cin.ignore();
        string s;
        getline(cin,s);
        stringstream a(s) ;
        string word;
        v.push_back("a");
        while( a >> word){
            st.insert(word);
        }
        for(auto x : st){
            v.push_back(x);
        }
        c = st.size();
        sinh(1);
    }