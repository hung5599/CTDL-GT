#include <bits/stdc++.h>
using namespace std;
typedef struct node{
    int data;
    struct node * left;
    struct node * right;
} *Tree;
void init(Tree *T){
    *T=NULL;
}
Tree GetNode(){
    Tree p;
    p = new node();
    return p;
}
void DeleteTree(Tree p){
    delete(p);
}
int isEmpty(Tree *T){
    if(*T==NULL) return 1;
    return 0;
}
Tree MakeNode(int x){
    Tree p;
    p = GetNode();
    p->data = x;
    p->left=NULL;
    p->right =NULL;
    return p;
}
void add_left(Tree T,int x,int y){
        Tree p,q;
        
}