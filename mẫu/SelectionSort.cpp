#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin >> a[i];
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++) cout <<  a[i] << " ";
}
void SelectionSort(int a[],int n){
    int i,j,t,min;
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(a[j]< a[min]) {
                min = j;
            }
        }
            t = a[i];
            a[i] = a[min];
            a[min]=t;
        cout << "Buoc " << i+1 << ": ";
        xuat(a,n);
        cout << "\n";
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    nhap(a,n);
    SelectionSort(a,n);
}