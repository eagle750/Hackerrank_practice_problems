struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    int i=0;
    struct Node* ls=(struct Node*)malloc(sizeof(struct Node));
    ls=head;
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
    t->data=data;
    t->next=NULL;
    if(position==0)
        {
        t->next=head;
        head=t;
    }
    else
        {
    for(i=0;i<position-1;i++)
        {
        ls=ls->next;
    }
    t->next=ls->next;
        ls->next=t;}
    return (head);
 
}
