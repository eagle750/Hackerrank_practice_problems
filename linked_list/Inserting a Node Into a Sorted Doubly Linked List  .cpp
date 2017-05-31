struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    struct Node* t=(struct Node*)malloc(sizeof(struct Node));
     t->data=data;
    if(head==NULL)
        return t;
  else 
      if(head->data>data)
      {
      t->next=head;
      t->prev=NULL;
      return t;
  }
   struct Node* ls=(struct Node*)malloc(sizeof(struct Node));
   ls=SortedInsert(head->next,data);
     head->next=ls;
      ls->prev=head;
     return head;

    // Complete this function
   // Do not write the main method. 
}
