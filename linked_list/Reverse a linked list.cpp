struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    struct Node* ls=head;
     struct Node* t;
    struct Node* t1=head;
    t1=t1->next;
    ls->next=NULL;
    if(head==NULL)
        return NULL;
    else
        {
    while(t1!=NULL)
        {
        t=t1;
       t1=t1->next;
        t->next=ls;
       ls=t;
    }
    head=ls;
    }
    return (head);
}
