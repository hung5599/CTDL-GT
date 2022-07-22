#include <bits/stdc++.h>
using namespace std;
int n,k;
typedef struct Node{
    int data;
    Node *next;
} * node;
void insertNode(node &head, int x){
    node a = new Node(); 
    a->data = x;
    if(head == NULL) {
        head = a;
    }
    else {
        a->next = head;
        head = a;
    }
}
main(){
    vector <int> v;
    node head = NULL;
    cin >> n;
    for(int i=0;i<n;i++){
        int so;
        cin >> so;
        insertNode(head,so);
    }
    cin >> k;
    while(head!=NULL){
        if(head->data!=k) v.push_back(head->data);
        head = head->next;
    }
    for(int i= v.size()-1;i>=0;i--) cout << v[i] <<" ";
}