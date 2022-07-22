#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++) cout <<  a[i] << " ";
}
int merge(int a[],int l,int m ,int r){
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i=0;
    int j=0;
    int count =0;
    while(i<x.size()&&j<y.size()){
        if(x[i]<=y[j]){
            a[l]= x[i];
            l++;
            ++i;
        }
        else {
            a[l]=y[j];
            count += x.size()-i;
            l++;
            j++;
        }
    }
        while(i<x.size()){
            a[l]= x[i];
            ++l;
            ++i;
        } 
        while(j<y.size()){
            a[l]= y[j];
            ++l;
            ++j;
        } 
        return count;
}
int MergeSort(int a[],int l, int r){
    int cnt =0;
    if(l<r){ 
    int m = (l+r)/2;
    cnt +=MergeSort(a,l,m);
    cnt += MergeSort(a,m+1,r);
    cnt += merge(a,l,m,r);
    }
    return cnt;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[m];
    nhap(a,n+m);
    int kq = MergeSort(a,0,n+m-1);
    cout << kq << "\n";
    }
}