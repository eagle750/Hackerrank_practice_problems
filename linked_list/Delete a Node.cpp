 struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    
    struct Node* ls=(struct Node*)malloc(sizeof(struct Node));
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
    ls=head;
    if(head==NULL)
        return NULL;
    if(position==0)
       return(head->next);
       int i;
    for(i=0;i<position-1;i++)
        {
        ls=ls->next;
    }
        t=ls->next;
       ls->next=t->next;
        
    return(head);
}
