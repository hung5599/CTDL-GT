#include <bits/stdc++.h>
using namespace std;
int n;
main(){
    int t;
    cin >> t;
    while(t--){
      cin >>n;
      queue <long long> q;
      q.push(9);
      while(!q.empty()){
          long long s = q.front();
          q.pop();
          if(s%n==0){
              cout << s << endl;
              break;
          }
          else{
              q.push(s*10);
              q.push(s*10+9);
          }
      }   
    }
}