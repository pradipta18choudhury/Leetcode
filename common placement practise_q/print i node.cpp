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

void printIthNode(Node *head, int i) {
    
    Node *p=head;
    int count=0;
    while(p!=NULL)
    {
        if(count==i)
        {
            cout<<p->data;
        }
        p=p->next;
        count++;
    }
}


