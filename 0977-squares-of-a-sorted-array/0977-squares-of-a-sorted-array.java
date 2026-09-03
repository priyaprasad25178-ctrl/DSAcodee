class Solution {
    public int[] sortedSquares(int[] nums) {

        int[] result = new int[nums.length]; // answer array
        int start = 0;                       // left pointer
        int end = nums.length - 1;           // right pointer
        int k = nums.length - 1;             // result ka last

        while (start <= end) {

            if (nums[start] * nums[start] > nums[end] * nums[end]) {
                result[k] = nums[start] * nums[start]; // left ka square bada
                start++;
            } 
            else {
                result[k] = nums[end] * nums[end];     // right ka square bada
                end--;
            }

            k--;
        }

        return result;
    }
}