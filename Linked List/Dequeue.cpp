#include<bits/stdc++.h>
using namespace std;
typedef struct Node{
    int data;
    Node *next;
    Node *pre;
} *node;
struct Dq{
    Node *head,*tail;
};
void Init(Dq &D){
    D.head = D.tail = NULL;
}
Node *makeNode(int x){
    Node *p = new Node();
    p->data = x;
    p->next = NULL;
    return p;
}
void push_back(Dq &D,Node *p){
    if( D.head ==NULL ) D.head = D.tail = p;
    else {
        D.tail->next = p;
        D.tail = p;
    }
}   
void push_front(Dq &D,Node *p){
    if(D.head == NULL ) D.head = D.tail = p;
    else {
        p->next = D.head;
        p = D.head;
    }
}
void pop_front(Dq &D){
    D.head = D.head->next;
}
void pop_back(Dq &D){

}
