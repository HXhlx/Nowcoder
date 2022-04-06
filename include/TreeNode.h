struct TreeNode
{
    int val;
    TreeNode *left = nullptr, *right = nullptr;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
TreeNode *create(std::vector<int> vec)
{
    using namespace std;
    if (vec.empty())
        return nullptr;
    TreeNode *root = new TreeNode(vec.front());
    queue<TreeNode *> nodes;
    nodes.emplace(root);
    for (vector<int>::iterator it = vec.begin() + 1; it != vec.end(); ++it)
    {
        if (*it != INT_MAX)
        {
            nodes.front()->left = new TreeNode(*it);
            nodes.emplace(nodes.front()->left);
        }
        if (++it == vec.end())
            break;
        if (*it != INT_MAX)
        {
            nodes.front()->right = new TreeNode(*it);
            nodes.emplace(nodes.front()->right);
        }
        nodes.pop();
    }
    return root;
}
bool is_equal(TreeNode *A, TreeNode *B)
{
    for (TreeNode *curA = A, *curB = B; curA || curB;)
    {
        if (!curA || !curB || curA->val != curB->val)
            return false;
        TreeNode *nodeA = curA->left, *nodeB = curB->left;
        if (nodeA || nodeB)
        {
            if (!nodeA || !nodeB || nodeA->val != nodeB->val)
                return false;
            while (nodeA->right && nodeA->right != curA || nodeB->right && nodeB->right != curB)
            {
                nodeA = nodeA->right;
                nodeB = nodeB->right;
                if (!nodeA || !nodeB || nodeA->val != nodeB->val)
                    return false;
            }
            if (nodeA->right == curA && nodeB->right == curB)
            {
                nodeA->right = nullptr;
                nodeB->right = nullptr;
            }
            else if (nodeA->right == curA || nodeB->right == curB)
                return false;
            else
            {
                nodeA->right = curA;
                nodeB->right = curB;
                curA = curA->left;
                curB = curB->left;
                continue;
            }
        }
        curA = curA->right;
        curB = curB->right;
    }
    return true;
}