int indexOfNIter(Node *head, int n) {
    Node *p=head;
    int count=0;
    if(p->data==n)
    {
        return 0;
    }
    while(p != NULL)
    {
        if(p->data == n)
            return count;
        count++;
        p = p->next;
    }
    return -1;
}


