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
int helper(Node *head,int n,int start)
{
    if(head==NULL)
        //head->data!=n)
        return -1;
   else if(head->data==n)
        return start;
    else
        return helper(head->next,n,start+1);
}


int indexOfNRecursive(Node *head, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
  return  helper(head,n,0);
}


