struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) {
    
        printf("%d",root->data);
    printf(" ");
    if(root->left)
       preOrder(root->left);
    if(root->right)   
    preOrder(root->right);
}
