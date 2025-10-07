// Searching for a key item in a Linked List

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
    // Insert item at the end of the LL
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
    // Traverse the LL
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
            cout << "The list is empty." << endl;
        }
    }
    Node *searchKeyItem(int key)
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->data == key)
                break;
            ptr = ptr->next;
        }
        return ptr;
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
    // Traverse LL and Search for a key item
    List1.Traverse();
    Node *test = List1.searchKeyItem(7);
    if (test == NULL)
        cout << "Key not found in the list" << endl;
    else
        cout << "value = " << test->data << " is in memory = " << &test << endl;
    return 0;
}
