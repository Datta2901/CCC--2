#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    int val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, int val) {
    if(head == NULL) {
        head = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        head->val = val;
        head->next = NULL;
        tail = head;
    }
    else {
        LinkedListNode *node = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        node->val = val;
        node->next = NULL;
        tail->next = node;
        tail = tail->next;
    }
    return tail;
}

//BODY STARTS HERE


/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/
LinkedListNode* MergeLists(LinkedListNode* headA, LinkedListNode* headB) {
 LinkedListNode *answer = NULL,*temp;
    while(headA || headB){
        if(answer == NULL){
            if(headA->val < headB->val){
                LinkedListNode *newnode = (LinkedListNode *)malloc(sizeof(LinkedListNode));
                newnode->val = headA->val;
                answer = newnode;
                temp = answer;
                headA = headA->next;
            }else if(headA->val >= headB->val){
                LinkedListNode *newnode = (LinkedListNode *)malloc(sizeof(LinkedListNode));
                newnode->val = headB->val;
                answer = newnode;
                temp = answer;
                headB = headB->next;
            }
        }
        if(headA && headB){
            if(headA->val < headB->val){
                LinkedListNode *newnode = (LinkedListNode *)malloc(sizeof(LinkedListNode));
                newnode->val = headA->val;
                headA = headA->next;
                temp->next = newnode;
                temp = newnode;
            }else{
                LinkedListNode *newnode = (LinkedListNode *)malloc(sizeof(LinkedListNode));
                newnode->val = headB->val;
                headB = headB->next;
                temp->next = newnode;
                temp = newnode;
            }
        }else if(headA){
            while(headA != NULL){
                LinkedListNode *newnode = (LinkedListNode *)malloc(sizeof(LinkedListNode));
                newnode->val = headA->val;
                headA = headA->next;
                temp->next = newnode;
                temp = newnode;
            }
        }else if(headB){
            while(headB != NULL){
                LinkedListNode *newnode = (LinkedListNode *)malloc(sizeof(LinkedListNode));
                newnode->val = headB->val;
                headB = headB->next;
                temp->next = newnode;
                temp = newnode;
            }
        }
    }
    
    temp->next = NULL;
    return answer;
}


//BODY ENDS HERE

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    LinkedListNode* res;
    int headA_size = 0;

    LinkedListNode* headA = NULL;
    LinkedListNode* headA_tail = NULL;

    scanf("%d", &headA_size);
    for(int i = 0; i < headA_size; i++) {
        int headA_item;
        scanf("%d", &headA_item);
        headA_tail = _insert_node_into_singlylinkedlist(headA, headA_tail, headA_item);

        if(i == 0) {
            headA = headA_tail;
        }
    }


    int headB_size = 0;

    LinkedListNode* headB = NULL;
    LinkedListNode* headB_tail = NULL;

    scanf("%d", &headB_size);
    for(int i = 0; i < headB_size; i++) {
        int headB_item;
        scanf("%d", &headB_item);
        headB_tail = _insert_node_into_singlylinkedlist(headB, headB_tail, headB_item);

        if(i == 0) {
            headB = headB_tail;
        }
    }


    res = MergeLists(headA, headB);
    while (res != NULL) {
        fprintf(f, "%d ", res->val);

        res = res->next;
    }

    fclose(f);
    return 0;
}
