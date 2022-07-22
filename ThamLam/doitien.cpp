#include<bits/stdc++.h>
using namespace std;
int n, A[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int i = 9;
        int dem=0;
        while(n>0){
            if(n-A[i]>=0){
                dem++;
                n-=A[i];
            }
            else i--;
        }
        cout << dem << endl;
    }
}