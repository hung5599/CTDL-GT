#include<bits/stdc++.h>
using namespace std;
/* Quyhoach
int partition(int a[],int l,int r){
    int pivot = a[r];
    int i = l -1;
    for(int j = l;j <r ;j++){
        if(a[j]<=pivot){
            ++i;
            swap(a[i],a[j]);
        }
    }
    ++i;
    swap(a[i],a[r]);
    return i; 
}*/
int Haore(int a[],int l,int r){
    int x = a[l];
    int i = l-1;
    int j = r + 1;
    while(true){
        do{
            ++i;
        }while(a[i]<x);
        do{
            j--;
        }while(a[j]>x);
        if(i<j) swap(a[i],a[j]);
        else return j;
    }
}
void QuickSort(int a[],int l,int r){
    if(l>=r) return;
    int p = Haore(a,l,r);
    QuickSort(a,l,p);
    QuickSort(a,p+1,r);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++) cout << a[i] <<" ";
}