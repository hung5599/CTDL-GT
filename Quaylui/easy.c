#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        long long b = a*a;
        printf("%lld\n",b);
    }
}