class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int k = 0;                         // non-val elements ki position

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val)             // agar val nahi hai
                nums[k++] = nums[i];       // usko starting mein daalo
        }

        return k;                          // total valid elements
    }
};