#include<bits/stdc++.h>
using namespace std;
int n,p,s, A[205],len;
vector <int> v;
vector <string> u;
bool IsPrime(int n)
{
	if(n < 2) return 0;
	if(n < 4) return 1;
	if(n%2==0 || n%3==0) return 0;
	int tmp = sqrt(n);
	for(int i = 5; i <= tmp; i+=6)
		if(n%i==0 || n%(i+2)==0)
			return 0;
	return 1;
}
void khoitao(int p,int s){
    for(int i=p+1;i<s;i++){
        if(IsPrime(i)) v.push_back(i);
    }
}
void quaylui(int i,int sum){
    int j;
    for(j=0;j<len;j++){
        if(v[j]> A[i-1]){
        A[i] = v[j];
        sum+= v[j];
        if(sum==s&&i==n){
            string s="";
            for(int k=1;k<=i;k++) s+= to_string(A[k]) +" ";
            u.push_back(s);
        }
        else if(sum<s) quaylui(i+1,sum);
        sum-= v[j];
        }
    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> p >> s;
        khoitao(p,s);
        len = v.size();
        A[0]=0;
        quaylui(1,0);
        if(u.size()!=0){
            cout << u.size() << endl;
            for(int i=0;i<u.size();i++) cout << u[i] << endl;
        }
        v.clear();
        u.clear();
    }
}