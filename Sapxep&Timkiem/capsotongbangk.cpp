#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        map <int ,int > mp;
        int count =0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++) {
            count += mp[k-a[i]];
            if(a[i]*2==k){
                count --;
            }
        }
        cout << count/2 << "\n";
    }
}