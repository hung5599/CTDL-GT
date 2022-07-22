#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++) cout <<  a[i] << " ";
}
void InsertionSort(int a[],int n, vector <string > v){
    int i,j,t,key;
    string m;
    m = m + "Buoc 0" +  ": " +  to_string(a[0]) +" ";
    v.push_back(m);
    for(i=1;i<n;i++){
        key = a[i];
        int pos = i-1;
        string s = "";
        while(pos>=0&&key< a[pos]){
            a[pos+1]=a[pos];
            pos --;
        }
        a[pos+1]=key;
        for(int k=0;k<i+1;k++){
            s+= to_string(a[k]) + " ";
        }
        v.push_back(s);
    }
    int len= v.size();
    for (int i = len-1; i >=0 ; i--)
    {
        if(i!=0) cout << "Buoc " << i << ": " << v[i] << "\n";
        else cout << v[i] << "\n";
    }
}
int main(){
    int n;
    cin >> n;
    vector <string> v;
    int a[n];
    nhap(a,n);
    InsertionSort(a,n,v);
}