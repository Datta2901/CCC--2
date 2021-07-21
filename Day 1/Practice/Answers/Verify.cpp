#include<bits/stdc++.h>
using namespace std;

struct LL{
    int data;
    LL * next;
};

void print(LL* head){
    while(head->next != NULL){
        printf("%d->", head->data);
        head = head->next;
    }
    cout << (head->data);
}

LL* insertAtBeginning(LL* head, int data) {
    LL *newnode = (LL*)malloc(sizeof(LL));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
    return head;
}

LL* insertAtEnd(LL* head, int data) {
    LL* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    LL *newnode = (LL*)malloc(sizeof(LL));
    newnode->data = data;
    temp->next = newnode;
    newnode->next = NULL;
    return head;
}

LL* insertAtPosition(LL* head, int data, int pos) {
    LL *newnode =(LL*)malloc(sizeof(newnode));
    LL *temp = head;
    // LL *pos = new LL();
    newnode->data = data;
    newnode->next = NULL;
    if(pos == 0){
        newnode->next = head;
        head = newnode;
    }else{
        while(pos-1){
            temp = temp->next;
            pos--;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    return head;
}


int main(){
    int size;
    cin >> size;
    LL *temp,*head = NULL,*prev;
    for(int i = 0; i < size; i++){
        struct LL *new_node = (struct LL*)malloc(sizeof(struct LL));
        int data;
        cin >> data;
        new_node->data = data;
        if(head == NULL){
            head = new_node;
            temp = head;   
        }else{
            temp->next = new_node;
            temp = new_node;
        }
    }
    temp->next = NULL;
    temp = head;
    // cout << "Insert at beginning ---> ";
    // print(insertAtBeginning(head,5));
    // cout << "Insert at ending --> ";
    // print(insertAtEnd(head,5));
    print(insertAtPosition(head,5,4));
    
    return 0;
}