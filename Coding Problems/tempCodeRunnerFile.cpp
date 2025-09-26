int ind = 0;
    for(int i = 0; i < n; i++)
    {
        ind = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[ind])
            {
                ind = j;
            }
        }
        swap(arr[i], arr[ind]);
    }