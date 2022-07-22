#include <bits/stdc++.h>
using namespace std;
int n, a[25];
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        long long s=0;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        string s1,s2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                string k = to_string(a[i]);
                s1 = s1 + k;
            }
            else{
                string y = to_string(a[i]);
                s2 = s2 + y;
            }
        }
        long long n1 = stoll(s1);
        long long n2= stoll(s2);
        cout << n1+n2 <<endl;
    }
}