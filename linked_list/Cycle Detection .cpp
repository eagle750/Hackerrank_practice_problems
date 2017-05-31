bool has_cycle(Node* head) {
    struct Node* ls=head;
    struct Node* t=head->next;
  while(ls!=NULL&&t!=NULL)
      {
      if(ls==t)
          return 1;
      ls=ls->next;
      t=t->next?t->next->next:t->next;
  }
    return 0;
}
