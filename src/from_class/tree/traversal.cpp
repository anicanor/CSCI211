These working functions demonstrate breadth-first and depth-first
tree traversal

void Tree::breadth()
{
    queue<Node *> all;
    all.push(m_root);

    while (all.size() != 0)
    {
        Node *tmp = all.front(); // returns first element, does not remove
        all.pop(); // remove the element returned by front()
        cout << tmp->m_value << endl;
        if (tmp->m_left)
            all.push(tmp->m_left);
        if (tmp->m_right)
            all.push(tmp->m_right);
    }

}


void Tree::depth()
{   
    depth(m_root);
}

// depth-first traversal
// print every element in tree
void Tree::depth(Node *root)
{
    if (root)
    {
        depth(root->m_left);
        cout << root->m_value << endl;
        depth(root->m_right);
    }
}



