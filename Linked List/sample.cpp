#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;
node makeNode(int x){
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp; 
}
bool empty(node a){
    return a==NULL;
}
int size(node a){
    int cnt=0;
    while(a!=NULL) {
        a = a->next;
        cnt++;
    }
    return cnt;
}
void insertFirst(node &a,int x){
    node tmp = makeNode(x);
    if (a == NULL){
       a = tmp; 
    }
    else {
        tmp->next = a;
        a = tmp;        
    }
}
void deleteFirst(node &a){
    if (a==NULL) return;
    a = a->next;
}
void deleteLast( node &a){
    if (a== NULL) return;
    node truoc=NULL, sau =a;
    while (a->next!=NULL){
        truoc = sau;
        sau = sau->next;
    }
    if (truoc == NULL) a = NULL;
    else truoc->next = NULL;
}
main(){
    node head = new Node();
    cout << head->next ;
    return 0;
}