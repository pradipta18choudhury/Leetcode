// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/
#include <bits/stdc++.h>
using namespace std;
node* eliminate_duplicate(node* head)
{
    //write your code here
    node *p=head;
    node *q;
    node *temp;
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    else{
    while(p!=NULL && p->next!=NULL)
    {
        q=p;
        while(q->next!=NULL)
        {
            if(p->data==q->next->data)
            {
                temp=q->next;
                q->next=q->next->next;
                delete temp;
            }
            else
                q=q->next;
        }
        p=p->next;
     }
    }
    return head;
}




