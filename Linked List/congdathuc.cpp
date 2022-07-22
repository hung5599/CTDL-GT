#include <bits/stdc++.h>
using namespace std;
struct Node{
    int heso;
    int somu;
    Node *next;
};
struct List{
    Node *head,*tail;
};
void Init(List &l){
    l.head = l.tail =NULL;
}
Node *makeNode(int hs, int sm){
    Node *p = new Node();
    if(p==NULL) exit(1);
    p->heso = hs;
    p->somu = sm;
    p->next = NULL;
    return p;
}
void addTail(List &l, Node *p){
    if(l.head ==NULL) l.head = l.tail = p;
    else {
        l.tail->next = p;
        l.tail = p; 
    }
}
void nhap(List &l){
    string s;
    getline(cin,s);
    vector <string> v;
    stringstream ss(s);
    string word;
    while(ss >> word){
        if(word!="+") v.push_back(word);
    }
    for(int i=0;i<v.size();i++){
        int m1=-1;
        int m2=-1;
        for(int j=0;j<v[i].size();j++){
            if(v[i][j] == '*') m1=j;
            else if(v[i][j] == '^') m2=j;
        }
        string n1;
        for(int j=0;j<m1;j++) n1+= v[i][j];
        int hs = stoi(n1);
        string n2;
        for(int j=m2+1;j<v[i].size();j++) n2+= v[i][j];
        int sm = stoi(n2);
        Node *p = makeNode(hs,sm);
        addTail(l,p);
    }
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    List P,Q,R;
    Init(P);
    nhap(P);
    Init(Q);
    nhap(Q);
    Init(R);
    while(P.head!=NULL&&Q.head!=NULL){
        if(P.head->somu >  Q.head -> somu ) {
            addTail(R,P.head);
            P.head = P.head->next;
        }
        else if (P.head->somu ==  Q.head -> somu){
            Node *p = new Node();
            p->heso = P.head->heso + Q.head->heso;
            p-> somu = P.head-> somu;
            P.head = P.head->next;
            Q.head = Q.head->next;
            addTail(R,p);
        }
        else{
            addTail(R,Q.head);
            Q.head = Q.head->next;
        }
    }
    while(P.head!=NULL){
         addTail(R,P.head);
            P.head = P.head->next;
    }
    while(Q.head!=NULL){
         addTail(R,Q.head);
            Q.head = Q.head->next;
    }
    while(R.head->next != NULL){
        cout << R.head->heso << "*x^" << R.head->somu <<" + ";
        R.head = R.head->next;
    }
    cout << R.head->heso << "*x^" << R.head->somu;
    cout << endl;
    }
}