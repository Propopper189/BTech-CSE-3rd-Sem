Node *root = NULL;
    for(int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        root = insert(root, data);
    }