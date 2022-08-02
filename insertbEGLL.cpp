#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node* insertbeg(Node* head,int x)
{
    Node* temp=new Node(x);
    temp->next = head;
    return temp;
}
void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}
int main()
{
    Node* head=NULL;
    head= insertbeg(head,20);
    head= insertbeg(head,60);
    head= insertbeg(head,10);
    head= insertbeg(head,70);
    printlist(head);
    return 0;
}