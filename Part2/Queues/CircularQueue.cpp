#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct queueNode{
    int data;
    struct queueNode* next;
};

queueNode* head = NULL;
queueNode* newNode(int val){
    queueNode* t = (queueNode*) malloc(sizeof(queueNode));
    t->data = val;
    t->next = NULL;
    return t;
}

void push(int val){
    queueNode* p,*p1;
    p=newNode(val);
   
      if(head==NULL)
        head=p;
    else
    {
        p1=head;
    while(p1->next!=NULL)
    {
    p1=p1->next;
    }
    p1->next=p;
    }
}
void pop(){
     queueNode* p1;
      
     p1=head;
    head=head->next;
    p1->next=NULL;
}
int top(){
    return head->data;
}
int empty(){
    return (head==NULL);

}

int main() {
    int q;
    cin >> q;
    while(q--){
        string s;
        int ele;
        cin >> s;
        if(s == "push"){
            cin >> ele;                
            push(ele);
        }else if(s == "top"){
            if(empty()) 
                cout << "Invalid" << endl;
            else                
                cout << top() << endl;
        }else{
            if(empty()) 
                cout << "Invalid" << endl;
            else
                pop();
        }  
    }
    return 0;
}


