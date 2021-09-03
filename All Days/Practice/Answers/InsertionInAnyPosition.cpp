#include<bits/stdc++.h>
using namespace std;

struct LL{
    int data;
    LL * next;
}*head = NULL;

void print(LL* head){
    while(head->next != NULL){
        printf("%d->", head->data);
        head = head->next;
    }
    cout << (head->data);
}

void  insert(int a,int val){
    LL *newnode =(LL*)malloc(sizeof(newnode));
    LL *temp = head;
    // LL *a = new LL();
    newnode->data = val;
    newnode->next = NULL;
    if(a == 0){
        newnode->next = head;
        head = newnode;
    }else{
        while(a-1){
            temp = temp->next;
            a--;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

int main(){
    int size;
    cin >> size;
    for (int i = 0; i < size; i++){
        int a,b;
        cin >> a >> b;
        insert(a,b);
    }
    print(head);
    
    return 0;
}