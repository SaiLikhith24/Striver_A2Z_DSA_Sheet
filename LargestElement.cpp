int largestElement(vector<int> &arr, int n) {
    
    /*Using Sorting O(NlogN)
        sort(arr.begin(),arr.end());
        return arr[n-1];*/

    //O(N)
    int maximum = INT_MIN;
    for(int i = 0 ; i < arr.size() ; i++)
        if(arr[i]>maximum)
            maximum = arr[i];
    return  maximum;
}
