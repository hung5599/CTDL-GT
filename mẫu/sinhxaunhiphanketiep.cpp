#include<bits/stdc++.h>
using namespace std;
int OK=0,a[20]={0},n;
void in(){
    for(int i=1;i<=n;i++) cout << a[i];
    cout << endl;
}
void sinh(){
    //gap cau hinh cuoi gan 0K=1
    int i=n;
    while(a[i]==1) {
        a[i] = 0;
        i--;
    }
    if(i==0) OK = 1;
    else a[i] = 1;
}
int main(){
    cin >> n;
   while(!OK){
       in();
       sinh();
   } 
}