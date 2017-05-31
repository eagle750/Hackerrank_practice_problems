
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
    if(root==NULL)
        return -1;
        int h1=height(root->left);
        int h2=height(root->right);
  return (h1>h2?h1:h2)+1;
}
  
