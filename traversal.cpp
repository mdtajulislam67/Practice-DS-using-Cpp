#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node (int val)
    {
        this->val=val;
        this->left= NULL;
        this->right= NULL;
    }
};
void preorder(Node* root)
{
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root)
{
    if(root==NULL){
        return;
    }
    preorder(root->left);
    preorder(root->right);
    cout<<root->val<<" ";
}
void Inorder(Node* root)
{
    if(root==NULL){
        return;
    }
    preorder(root->left);
    cout<<root->val<<" ";
    preorder(root->right);
}
int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c= new Node(40);
    Node* d= new Node(50);

    root->left= a;
    root->right= b;
    a->left = c;
    a->right = d;

    preorder(root);
    postorder(root);
    Inorder(root);
    return 0;
}