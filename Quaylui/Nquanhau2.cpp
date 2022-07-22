#include <bits/stdc++.h>
using namespace std;
int N = 8,A[100],C[10][10],cot[100],d1[100],d2[100],lonnhat ;
void quaylui(int i){
    int j;
    for(int j=1;j<=N;j++){
        if(cot[j]==1&&d1[i-j+N]==1&&d2[i+j-1]==1) {
            A[i]=j;
            cot[j]=d1[i-j+N]=d2[i+j-1]=0;
            if(i==N){
                int count =0;
                for(int i=1;i<=N;i++){
                    count += C[i][A[i]];
                }
                lonnhat= max(lonnhat,count);
            }
            else quaylui(i+1); 
            cot[j]=d1[i-j+N]=d2[i+j-1]=1;
        }
    }

}
main(){
    int t;
    cin >> t;
    while(t--){
        for(int i=1;i<=N;i++) for(int j=1;j<=N;j++) cin >> C[i][j];
        for(int i=1;i<=99;i++) {
            cot[i]=d1[i]=d2[i] = 1;
        }
        lonnhat=0;
        quaylui(1);
        cout << lonnhat << endl;

    }
}