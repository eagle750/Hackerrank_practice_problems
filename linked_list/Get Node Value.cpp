struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
   struct Node* ls=head;
   struct Node* ls1=head; 
    int c=-1;
    while(ls!=NULL)
        {
        ls=ls->next;
        c++;
    }
    int x=c-positionFromTail;
    while(x--)
        {
        ls1=ls1->next;
    }
    return(ls1->data);
}
