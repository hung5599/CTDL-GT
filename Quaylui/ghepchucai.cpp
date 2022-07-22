#include<bits/stdc++.h>
using namespace std;
char c,ch[50];
int k,A[50],B[50]={0},n;
bool kt(string s){
    int len = s.length();
    if(len<=4){
        if(s[0]=='A'||s[len-1]=='A') return true;
    }
    else {
    if((s[0]=='A'&&s[len-1]=='E')||(s[0]=='E'&&s[len-1]=='A')) return true;
    else for(int i=0;i<len-1;i++){
        if((s[i]=='A'&&s[i+1]=='E')||(s[i]=='E'&&s[i+1]=='A')) return true;
    }
    }
    return false;
}
void in(){
    string s ="";
    for(int i=1;i<=n;i++){
       char x = A[i]+64;
       s+= x;
    }
    if(kt(s)) cout << s << endl;
}
void quaylui(int i){
    int j;
    for (j = 1;j<=n;j++){
        if(B[j]==0){
            A[i]=j;
            B[j]=1;
            if(i==n) in();
            else quaylui(i+1);
            B[j]=0;
        }
    }
}
main(){
    cin >> c ;
    n =  c - 64;
    A[0]=1;
    quaylui(1);
}