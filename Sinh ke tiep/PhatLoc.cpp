#include<bits/stdc++.h>
using namespace std;
int a[100],b[2] ={6,8},n;
bool check1(int a[],int n){
    for(int i=1;i<=n-1;i++){
        if(a[i]==8&&a[i+1]==8) return false;
    }
    return true;
}
bool check2(int a[],int n){
    for(int i=1;i<=n-3;i++){
        if(a[i]==6&&a[i+1]==6&&a[i+2]==6&&a[i+3]==6) return false;
    }
    return true ;
}
void in(){
    if(check1(a,n)&&check2(a,n)&&a[1]==8&&a[n]==6){
    for(int i=1;i<=n;i++) cout << a[i] ;
    cout <<endl;
    }
}
void quaylui(int i){
    int j;
    for(j=0;j<=1;j++){
        a[i] = b[j];
        if(i==n) in();
        else quaylui(i+1);
    }
}
int main(){
    cin >> n;
    quaylui(1);
}