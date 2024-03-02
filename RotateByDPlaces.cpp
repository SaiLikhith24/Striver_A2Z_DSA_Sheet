vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size();
    k %= n;
    vector<int> temp;
    for (int i = 0; i < k; i++)
        temp.push_back(arr[i]);
    int s=0;
    for (int j = k; j < n; j++)
        arr[s++] = arr[j];
    for (auto i : temp)
        arr[s++] = i;
    return arr;      

}
