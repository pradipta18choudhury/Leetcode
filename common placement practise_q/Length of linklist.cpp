int length(Node *head) {
    
    Node *p=head;
    int count=0;
    while(p!=NULL)
    {
        count++;
        p=p->next;
    }
    return count;
}


