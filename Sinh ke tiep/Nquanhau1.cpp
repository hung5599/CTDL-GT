#include <bits/stdc++.h>
using namespace std;
int N,A[100],cot[100],d1[100],d2[100],dem = 0;
void quaylui(int i){
    int j;
    for(int j=1;j<=N;j++){
        if(cot[j]==1&&d1[i-j+N]==1&&d2[i+j-1]==1) {
            A[i]=j;
            cot[j]=d1[i-j+N]=d2[i+j-1]=0;
            if(i==N) dem++;
            else quaylui(i+1); 
            cot[j]=d1[i-j+N]=d2[i+j-1]=1;
        }
    }

}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> N;
        for(int i=1;i<=99;i++) {
            cot[i]=d1[i]=d2[i] = 1;
        }
        quaylui(1);
        cout << dem <<endl;
        dem =0;

    }
}