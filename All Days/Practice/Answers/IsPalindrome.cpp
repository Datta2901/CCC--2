#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    char val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, char val) {
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


/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    char val;
    LinkedListNode *next;
};
*/
bool isPalindrome(LinkedListNode* head) {
    char s[100005];
                int flag=1;
    if(head==NULL)
        return 1;
    else
    {    int i=0;
       
        while(head!=NULL)
        {
            s[i]=head->val;
            head=head->next;
            i++;
        }
        
    }
    int n=0;
    for(int q=0;s[q]!='\0';q++)
         n++;
   
    for(int j=0,k=n-1;j<k;j++,k--)
    {
        if(s[j]!=s[k])
        {flag=0;break;}
        
    }
    if(flag==1)return 1;
    return 0;
}

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    bool res;
    int head_size = 0;

    LinkedListNode* head = NULL;
    LinkedListNode* head_tail = NULL;

    scanf("%d", &head_size);
 	char s[10005];
  	scanf(" %s", s);
    for(int i = 0; i < head_size; i++) {
        char head_item = s[i];
        head_tail = _insert_node_into_singlylinkedlist(head, head_tail, head_item);

        if(i == 0) {
            head = head_tail;
        }
    }


    res = isPalindrome(head);
    fprintf(f, "%d\n", res);

    fclose(f);
    return 0;
}
