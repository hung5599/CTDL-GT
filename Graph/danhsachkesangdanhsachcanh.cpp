#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        string s, token;
        getline(cin,s);
        stringstream ss(s);
        while(ss >> token){
            int tmp = stoi(token);
            if(tmp>i) cout << i << " " << tmp << endl;
        }
    }
    return 0;
}