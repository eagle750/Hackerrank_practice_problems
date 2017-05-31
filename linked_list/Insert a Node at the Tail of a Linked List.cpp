{
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    struct Node* ls=(struct Node*)malloc(sizeof(struct Node));
    ls=head;
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
    t->data=data;
    t->next=NULL;
    if(head==NULL)
        head=t;
    else
        {
    while(ls->next!=NULL)
      {
        ls=ls->next;
    }
    ls->next=t;
        t->next=NULL;}
    return(head);
}
