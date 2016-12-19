public class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int expect = (n+1) * n / 2;
        for(int i = 0; i < n; i ++)
            expect -= nums[i];
        return expect;
    }
}