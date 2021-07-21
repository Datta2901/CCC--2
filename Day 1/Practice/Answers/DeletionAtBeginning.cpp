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

int main(){
    int size;
    cin >> size;
    LL *temp,*head = NULL;
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
    int k;
    cin >> k;

    while(k){
        LL* t = head;
        head = t->next;
        delete(t); 
        k--;
    }
    print(head);
    return 0;
}