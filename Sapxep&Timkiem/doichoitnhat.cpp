#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++) cout <<  a[i] << " ";
}
bool check (int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int a[n];
    nhap(a,n);
    int count =0;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j]) min =j;
        }
        if(a[min]!=a[i]){swap(a[i],a[min]);
        count ++;
        }
        if(check(a,n)) break; 
    }
    cout << count <<"\n";
    }
}