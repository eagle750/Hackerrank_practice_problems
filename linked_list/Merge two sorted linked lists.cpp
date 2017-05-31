 struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    if(headA==NULL||headB==NULL)
        return headA==NULL?headB:headA;
    else
        if(headA->data<headB->data)
        {
        headA->next=MergeLists(headA->next,headB);
        return headA;
        }
        else
            headB->next=MergeLists(headA,headB->next);
    return headB;
}
