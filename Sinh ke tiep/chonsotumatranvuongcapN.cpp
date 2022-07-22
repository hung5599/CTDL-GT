#include <bits/stdc++.h>
using namespace std;
int A[100][100],cot[100]= {0},N,cnt = 0,sum=0,C[100];
void quaylui(int i){
    int j;
    for(int j=1;j<=N;j++){
        if(cot[j]==0){
            C[i]= A[i][j];
            cot[j]=1;
            if(i==N){
                int tong = 0;
                for(int p = 1 ; p<=N;p++){
                    tong += C[p];
                }
                if(sum  == tong ) {
                   for(int p = 1 ; p<=N;p++){
                    cout <<  C[p] << " ";
                } 
                }
            }
            else quaylui(i+1);
            cot[j]=0;
        }
    }
    
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin  >> N >> sum ;
        for(int i = 1 ;i <= N;i++) {
            for(int j = 1; j<=N ; j++) cin >> A[i][j];
        }
        quaylui(1);
        cout << cnt;
    }

}