#include<bits/stdc++.h>
using namespace std;
string s;
main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        cin >> s;
        int n=s.length();
        string str="";
        for(int i=0;i<n;i++){
            if(i==0) str+= s[i];
            else{
                if(s[i]=='1'){
                    if(str[i-1]=='0') str+='1';
                    else str+='0'; 
                }
                else str+= str[i-1];
            }
        }
        cout << str << endl;
    }
}