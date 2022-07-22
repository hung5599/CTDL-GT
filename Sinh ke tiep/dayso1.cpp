#include<bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000],k=0;
vector <int > v;
void quaylui(int i){
    int j;
    for(j = 1;j<n-1;j++){
        b[i] = a[j] + a[j+1];
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];

    }

}