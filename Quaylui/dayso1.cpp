#include<bits/stdc++.h>
using namespace std;
void Arr(int a[], int n)
{
    if (n>0) {
        cout << "[";
        for (int i=0; i<n-1; i++)
            cout << a[i] << " ";
        cout << a[n-1] << "]" << endl;
        for (int i=0; i<n-1; i++)
            a[i]=a[i]+a[i+1];
        Arr(a,n-1);
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        Arr(a,n);
    }
}