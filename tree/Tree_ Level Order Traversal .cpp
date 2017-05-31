struct node
{
    int data;
    node* left;
    node* right;
}*/

   void printheight(node* root,int d)
        {
   if(root==NULL)
        return ;
        if(d==1)
    printf("%d ",root->data);
        else
            if(d>1)
            {
            printheight(root->left,d-1);
            printheight(root->right,d-1);
        }
    }
int height(node* root)
        {
        if(root==NULL)
            return 0;
            int h1=height(root->left);
          int h2=height(root->right);
        return((h1>h2?h1:h2)+1);
    }
void LevelOrder(node * root)
{
  int x=height(root);
     int i;
         for(i=1;i<=x;i++)
         printheight(root,i);    
    }
