struct Node
  {
     int data;
     struct Node *next;
  }
void Print(Node *head)
{
        if(head!=NULL)
        {
    while(head!=NULL)
        {
        printf("%d",head->data);
        printf("\n");
        head=head->next;
    } 
    }}