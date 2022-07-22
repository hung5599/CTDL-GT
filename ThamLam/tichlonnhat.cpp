#include <bits/stdc++.h>
using namespace std;
int n, A[1005],am=0,duong=0;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> A[i];
        if(A[i]<0) am++;
        else if(A[i]>0) duong++;
    }
    sort(A,A+n);
    if(am<2&&duong>=3) cout << A[n-1]*A[n-2]*A[n-3];
    else if(duong==1&&am==1) cout << 0;
    else{
        int x = max(A[0]*A[1] ,A[0]*A[1]*A[n-1]);
        int z = A[n-1]*A[n-2]*A[n-3];
        cout << max(x,z);
    }
}