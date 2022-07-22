#include <bits/stdc++.h>
using namespace std;
int maxCrossingSum(int a[],int l,int m, int r){
    int sum = 0, sum_left = INT_MIN, sum_right = INT_MIN;
    for(int i=m;i>=l;i--){
        sum+= a[i];
        if(sum>sum_left) sum_left=sum;
    }
    sum =0;
    for(int i=m+1;i<=r;i++){
        sum+= a[i];
        if(sum>sum_right) sum_right=sum;
    }
    return sum_left + sum_right;
}
int kq(int a[],int l,int r){
    if(l==r) return a[l];
    int m = (l+r)/2;
    return max(max(kq(a,l,m),kq(a,m+1,r)),maxCrossingSum(a,l,m,r));
}
main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i=0;i<n;i++) cin >> A[i];
        cout << kq(A,0,n-1) << endl;

    }
}