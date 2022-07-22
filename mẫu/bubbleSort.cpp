#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++) cout <<  a[i] << " ";
}
void SelectionSort(int a[],int n,vector <string > v){
    int i,j,t,min;
    for(i=0;i<n-1;i++){
        min = true;
        string s = "";
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]) {swap(a[j+1],a[j]);       
            min = false;
            }
        }
        if(min) break;
        for(int k=0;k<n;k++){
            s+= to_string(a[k]) + " ";
        }
        v.push_back(s);
    }
    int len= v.size();
    for (int i = len-1; i >=0 ; i--)
    {
        cout << "Buoc " << i+1 << ": " << v[i] << "\n";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int a[n];
    vector <string> v;
    nhap(a,n);
    SelectionSort(a,n,v);
    }
}