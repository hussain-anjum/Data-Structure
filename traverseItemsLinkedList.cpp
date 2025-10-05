// Traversing items in a linked list data structure

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void push_back(int newElement)
    {
        Node *newNode = new Node();
        newNode->data = newElement;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
    void Traverse()
    {
        Node *temp = head;
        if (temp != NULL)
        {
            cout << "The list contains: ";
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        else
        {
            cout << "The list is empty.\n";
        }
    }
};
int main()
{
    LinkedList List1;
    // insert items in the LL
    List1.push_back(1);
    List1.push_back(5);
    List1.push_back(7);
    List1.push_back(35);
    List1.push_back(55);
    // Traverse LL
    List1.Traverse();
    return 0;
}
