#include <bits/stdc++.h>
using namespace std;
int n,A[1005][1005];
main(){
    int n;
    cin >> n;
    cin.ignore();
    memset(A,0,sizeof(A));
    for(int i = 1;i<=n;i++){
        string s;
        getline(cin,s);
        stringstream ss(s) ;
        string word;
        while(ss >> word){
            int a = stoi(word);
            A[i][a] = 1;

        }
    }
    for(int i = 1;i<= n ;i++){
        for(int j =1;j<=n;j++) cout << A[i][j] <<" ";
        cout << endl;
    }
}