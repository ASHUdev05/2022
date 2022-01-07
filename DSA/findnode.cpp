#include <iostream>
using std::cout;
using std::cin;
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

void findNode(Node_t *head, int data)
{
    Node_t *temp = head;
    while (temp != NULL)
    {
        if (temp->data == data)
        {
            cout << "Found " << data << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not found " << data << endl;
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
    int search;
    cout << "Enter the number to search: ";
    cin >> search;
    findNode(head, search);

    return 0;
}