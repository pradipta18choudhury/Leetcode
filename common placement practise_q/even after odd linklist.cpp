#include <bits/stdc++.h>

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

node* arrange_LinkedList(node* head)
{
    //write your code here
    node *estart=NULL;
    node *eEnd=NULL;
    node *ostart=NULL;
    node *oEnd=NULL;
    node *curr=head;
    if(head==NULL || head->next==NULL)
        return head;
    while(curr!=NULL)
    {
        int i=curr->data;
        if(i%2==0)
        {
            if(estart==NULL)
            {
                estart=eEnd=curr;
            }
            else
            {
                eEnd->next=curr;
                eEnd=curr;
            }
        }
        else
        {
            if(ostart==NULL)
            {
                ostart=oEnd=curr;
            }
            else
            {
                oEnd->next=curr;
                oEnd=curr;
            }
        }
        curr=curr->next;
    }
    if(ostart==NULL)
  {  
        eEnd -> next = NULL;
      return estart;
  }
 else if(estart==NULL)
      {
      oEnd -> next = NULL;
      return ostart;
 }
 else 
 {   oEnd->next = NULL;
     eEnd->next = NULL;
     oEnd->next = estart;
     return ostart;
 }
}
