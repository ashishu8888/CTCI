class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node* succ = NULL,*lst = NULL;

    void inorder(Node* root,Node* p)
    {
        if(!root)
        {
            return ;
        }

        inorder(root->left,p);

        if(!lst)
        {
            lst = root;
        }
        else{
            if(lst == p)
            {
                succ = root;
                // this is important to update the "lst" node otherwise this "if" statement will get executed 
                // while backtrack from here once we hit return
                lst = root;
                return ;
            }
            
            lst = root;
        }

        inorder(root->right,p);

    }
    Node * inOrderSuccessor(Node *root, Node *p)
    {
        //Your code here
        inorder(root, p);
        return succ;
    }
