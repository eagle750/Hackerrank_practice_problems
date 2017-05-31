struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  struct Node *t=(struct Node*)malloc(sizeof(struct Node));
    t->data=data;
    t->next=NULL;
    if(head==NULL)
        {
        head=t;
    }
    else
        {
        t->next=head;
        head=t;
    }
    return head;
}
