#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map <int ,int > mp;
        int count =0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int max=mp[a[0]];
        int kq = a[0];
        for(int i=0;i<n;i++){
            if(mp[a[i]]> max) kq = a[i];
        }
        if(mp[kq]>n/2) cout << kq ;
        else cout << "NO";
        cout <<"\n";
        
    }
}