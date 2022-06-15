#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void add(node **head, int data) {
    if (*head == NULL) {
        *head = (node *) calloc(1, sizeof(node));
        (*head)->data = data;
        (*head)->next = NULL;
    } else {
        node *temp = (node *) calloc(1, sizeof(node));
        temp->data = data;
        temp->next = *head;
        *head = temp;
    }
}

void display(node *head) {
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
}

int main() {
    node *new_node = NULL;
    while(1){
        int data;
        printf("Enter data: ");
        scanf("%d", &data);
        add(&new_node, data);
        printf("List: ");
        display(new_node);
        printf("Do you want to continue? (y/n) ");
        char ch;
        scanf(" %c", &ch);
        if(ch == 'n'){
            break;
        }
    }
    free(new_node);
    return 0;
}
