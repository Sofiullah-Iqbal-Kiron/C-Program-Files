#include <bits/stdc++.h>
#define null NULL
using namespace std;

///Let's create a class for holding nodes.
class node
{
public:
    int data;
    node *next;
};

typedef node* Node;

void pushfront(int value, Node *head)
{
    Node new_node = new node;
    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
}

void pushin(int value, Node pre)
{
    if (pre == null)
    {
        return;
    }
    Node new_node = new node;
    new_node->data = value;
    new_node->next = pre->next;
    pre->next = new_node;
}

void pushend(int value, Node *head)
{
    Node new_node = new node;
    Node last = *head;

    new_node->data = value;
    new_node->next = null;

    if (*head == null)
    {
        *head = new_node;
        return;
    }

    while (last->next != null)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

void deletenode(int key, Node *head)
{
    Node temp = *head, pre;
    if (temp != null && temp->data == key)
    {
        *head = temp->next;
        delete temp;
        return;
    }
    while (temp != null && temp->data != key)
    {
        pre = temp;
        temp = temp->next;
    }
    if (temp->next == null)
    {
        return;
    }
    pre->next = temp->next;
    delete temp;
}

void printList(Node head)
{
    Node demo = head;
    while (demo != null)
    {
        cout << demo->data << " ";
        demo = demo->next;
    }
}

int Length(Node head)
{
    int c = 0;
    while (head != null)
    {
        c++;
        head = head->next;
    }

    return c;
}

int Count(int number, Node head)
{
    int c = 0;
    Node current;
    for(current=head; current!=null; current=current->next)
    {
        if(current->data==number)
        {
            c++;
        }
    }
    return c;
}

int GetNth(int index, Node head)
{
    if (index > Length(head) - 1)
    {
        return -1;
    }
    int pos = 0;
    while (head != null)
    {
        if (pos == index)
        {
            return head->data;
        }
        head = head->next;
        pos++;
    }
    return -1;
}

void DeleteList(Node *head)
{
    Node temp = *head;
    while (*head != null)
    {
        *head = temp->next;
        delete temp;
        temp = *head;
    }
}

int popfront(Node *head)
{
    Node temp = *head;
    int removed = temp->data;
    *head = temp->next;
    delete temp;

    return removed;
}

Node popback(Node *head)
{

}

void InsertNth(Node *head, int index, int value)
{
    if (index == 0)
    {
        pushfront(value, head);
        return;
    }
    Node new_node = new node;
    Node pre_node = *head;
    int preidx = index - 1;
    new_node->data = value;
    for (int i = 0; i < Length(*head); i++)
    {
        if (i == preidx)
        {
            new_node->next = pre_node->next;
            pre_node->next = new_node;
            return;
        }
        pre_node = pre_node->next;
    }
    return;
}

void printmiddle(Node head)
{
    int middle = Length(head)/2;
    for(int i=0; ; i++)
    {
        if(i==middle)
        {
            cout << head->data;
            return;
        }
        head=head->next;
    }
}

int main()
{
    Node head = null;

    pushfront(6, &head);
    pushfront(7, &head);
    pushend(9, &head);
    pushin(8, head->next);
    pushend(10, &head);
    printList(head);
    cout << endl
         << "Length of this linked list: " << Length(head) << endl;
    deletenode(6, &head);
    cout << "After deleting node: " << endl;
    printList(head);
    cout << endl
         << "Number of times 7 appears in the list: " << Count(7, head) << endl
         << "Value in index 1 " << GetNth(1, head) << endl;
    DeleteList(&head);
    cout << "After deleting list the Length is: " << Length(head) << endl;
    pushend(3, &head);
    cout << Length(head) << endl;
    pushfront(2, &head);
    printList(head);
    cout << endl
         << Length(head) << endl;
    cout << "Removed data form head is: " << popfront(&head) << endl
         << "Now the list is: ";
    printList(head);
    InsertNth(&head, 1, 12);
    cout << endl;
    printList(head);
    InsertNth(&head, 0, 1);
    cout << endl;
    printList(head);
    InsertNth(&head, 4, 13);
    cout << endl;
    printList(head);
    DeleteList(&head);
    InsertNth(&head, 0, 13);
    InsertNth(&head, 1, 42);
    InsertNth(&head, 1, 5);
    pushend(5, &head);
    cout << endl;
    printList(head);
    cout << endl;
    cout << "The middle element is: ";
    printmiddle(head);
    cout << endl << Count(5, head) << endl;
}
