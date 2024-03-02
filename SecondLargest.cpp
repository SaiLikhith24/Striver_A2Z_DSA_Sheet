vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    /* Using sorting O(Nlog N)
    sort(a.begin(),a.end());
    vector<int> res;
    res.push_back(a[n-2]);
    res.push_back(a[1]);
    return res;    
    */

    // O(N)
    int small = INT_MAX ,second_small = INT_MAX;
    int large = INT_MIN ,second_large = INT_MIN;
    for (int i = 0; i < n; i++){
        small = min(a[i],small);
        large = max(a[i],large);
    }
    for (int i = 0; i < n; i++){
        if (a[i] < second_small && a[i] != small)
            second_small = a[i];
        else if (a[i] > second_large && a[i] != large)
            second_large = a[i];
    }
    vector<int> temp;
    temp.push_back(second_large);
    temp.push_back(second_small);
    return temp;
}
