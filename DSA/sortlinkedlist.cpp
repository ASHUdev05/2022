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

Node_t* mergesort(Node_t *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node_t *slow = head;
    Node_t *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node_t *second = slow->next;
    slow->next = NULL;

    Node_t *left = mergesort(head);
    Node_t *right = mergesort(second);

    Node_t *sorted = NULL;

    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            if (sorted == NULL)
            {
                sorted = left;
                left = left->next;
            }
            else
            {
                sorted->next = left;
                sorted = sorted->next;
                left = left->next;
            }
        }
        else
        {
            if (sorted == NULL)
            {
                sorted = right;
                right = right->next;
            }
            else
            {
                sorted->next = right;
                sorted = sorted->next;
                right = right->next;
            }
        }
    }

    if (left != NULL)
        sorted->next = left;
    if (right != NULL)
        sorted->next = right;

    return sorted;
}

int main()
{
    Node_t n1, n2, n3;
    Node_t *head;

    n1.data = 1;
    n2.data = 7;
    n3.data = 5;

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    printList(head);
    cout << "Sorted list: " << endl;
    mergesort(head);
    printList(head);

    return 0;
}