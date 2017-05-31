struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) {
    if(root->left)
        inOrder(root->left);
    printf("%d",root->data);
    printf(" ");
    if(root->right)
        inOrder(root->right);

}
