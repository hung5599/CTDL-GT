#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int newstring1(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='5') s[i]='6';
    }
    return stoi(s);
}
int newstring2(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='6') s[i]='5';
    }
    return stoi(s);
}
main(){
    cin  >> s1 >> s2;
    int n1= newstring2(s1);
    int n2= newstring2(s2);
    cout << n1+n2 <<" ";
    n1= newstring1(s1);
    n2= newstring1(s2);
    cout << n1+n2 << endl;

}