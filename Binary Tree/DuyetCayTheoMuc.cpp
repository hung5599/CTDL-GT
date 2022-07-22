#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int x){
        this->data = x;
        left = right = NULL;
    }
};
typedef struct Node* node;
void MakeNode(node root, int n1,int n2, char c){
    switch (c){
        case 'L' : root->left =new Node(n2); break;
        case 'R' : root->right =new Node(n2);break;
    }
}
int main(){

    return 0;
}