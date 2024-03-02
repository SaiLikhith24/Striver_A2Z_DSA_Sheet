int isSorted(int n, vector<int> a) {
    /* O(Nlog N)
    vector<int> b=a;
    sort(b.begin(),b.end());
    return (a==b);
    */

    //O(N)
    for(int i=0;i<a.size()-1;i++)
        if(a[i]>a[i+1])
            return false;
    return true;
}
