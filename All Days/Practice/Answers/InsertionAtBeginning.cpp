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
        int a;
        cin >> a;
        LL *newnode = (LL*)malloc(sizeof(LL));
        newnode->data = a;
        newnode->next = head;
        head = newnode;
    }
    print(head);
    return 0;
}