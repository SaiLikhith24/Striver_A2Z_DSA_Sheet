int removeDuplicates(vector<int>& nums) {
        // O(N) 
        int i = 0;
        for (int j = 1; j < nums.size(); j++){
            if (nums[i] != nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
    return i+1;
}
