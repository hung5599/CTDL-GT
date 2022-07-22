#include <bits/stdc++.h>
using namespace std;
int S,T;
struct ob{
    int value;
    int dem ;
};
int dem(int S, int T){
        set <int> s;
        s.insert(S);
        queue < ob > q;
        q.push({S,0});
        while(q.size()>0){
            ob tp = q.front();
            q.pop();
            if(tp.value == T) return tp.dem;
            if(tp.value*2 == T || tp.value-1 == T) return tp.dem+1;
            if(s.find(tp.value * 2)==s.end()&&tp.value<T){
                q.push({tp.value*2,tp.dem+1});
                s.insert(tp.value*2);
            }
            if(s.find(tp.value - 1)==s.end()&&tp.value - 1 >0){
                q.push({tp.value-1,tp.dem+1});
                s.insert(tp.value-1);
            }
        }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> S >> T;
        cout << dem(S,T) << " "<< endl;

    }
}