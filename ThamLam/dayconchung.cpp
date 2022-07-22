#include <bits/stdc++.h>
using namespace std;
int n,m,k,A[100005],B[100005],C[100005];
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        for(int i =0;i<n;i++) cin >> A[i];
        for(int i =0;i<m;i++) cin >> B[i];
        for(int i =0;i<k;i++) cin >> C[i];
        int a=0,b=0,c=0;
        int check=0;
        while(a<n&&b<m&&c<k){
            if(A[a]==B[b]&&B[b]==C[c]&&A[a]==C[c]){
                cout << A[a] <<  " ";
                check =1;
                ++a;++b;++c;
            }
            else if(A[a]<B[b]) ++a;
            else if(B[b]<C[c]) ++b;
            else ++c;
        }
        if(!check) cout << "NO";
        cout << endl;
    }
}