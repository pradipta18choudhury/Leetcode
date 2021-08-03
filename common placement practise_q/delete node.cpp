/**********
 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/
#include <bits/stdc++.h>

Node* deleteNode(Node *head, int i) {
    
    Node *p=head;
    Node *q;
    int pos=0;
    if(i>pos){
        
       while(pos<i-1)
        {
            p=p->next;
            pos++;
        }
            q=p->next;
        if(q==NULL)
            return head;
            p->next=q->next;
            delete (q);
    }
    else if(i==0)
    {
        Node *temp=head;
        head=head->next;
        delete temp;
    }
   return head; 
}


