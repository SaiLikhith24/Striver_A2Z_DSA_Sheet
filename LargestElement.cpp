int largestElement(vector<int> &arr, int n) {
    int maximum = INT_MIN;
    for(int i = 0 ; i < arr.size() ; i++)
        if(arr[i]>maximum)
            maximum = arr[i];
    return  maximum;
}
