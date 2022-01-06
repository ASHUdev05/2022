#include <iostream>
using std::cout;
using std::endl;

struct Node
{
    int data;
    struct Node* next;
};

typedef struct Node Node_t;

void printList(Node_t *head)
{
    Node_t *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void reverseList(Node_t *head)
{
    Node_t *prev = NULL;
    Node_t *curr = head;
    Node_t *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    printList(head);
}

int main()
{
    Node_t n1, n2, n3;
    Node_t *head;

    n1.data = 1;
    n2.data = 3;
    n3.data = 5;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    printList(head);
    cout << "After reversing the list:" << endl;
    reverseList(head);

    return 0;
}