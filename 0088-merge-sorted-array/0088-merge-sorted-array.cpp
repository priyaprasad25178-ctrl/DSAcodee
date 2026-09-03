class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1; // nums1 ka last actual element
        int j = n - 1;   // nums2 ka last element
        int k = m + n - 1;  // final last position

        while (j >= 0) {   // nums2 khatam hone tak

            if (i >= 0 && nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];   // bada nums1 wala daalo
            else
                nums1[k--] = nums2[j--];   // nums2 wala daalo
        }
    }
};