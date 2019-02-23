void leftViewUtil(Node* root, int level,int &prev_level)
{
    if(root==NULL)
    {
        return;
    }
    if(prev_level<level)
    {
        cout<<root->data<<" ";
        prev_level=level;
    }
    
    leftViewUtil(root->left,level+1,prev_level);
    leftViewUtil(root->right,level+1,prev_level);
}
void leftView(Node *root)
{
   int prev_level=0;
   leftViewUtil(root,1,prev_level);
}