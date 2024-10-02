#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int size_linked_list(Node *head)
{
    int count=0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val1;
    int val2;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail(head, tail, val1);
        
    }
    while(true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head, tail, val2);
    }
    int size1=size_linked_list(head);
    int size2=size_linked_list(head);
    if(size1==size2)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}