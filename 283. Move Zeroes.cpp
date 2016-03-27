class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();  
        int i = 0;  
        int j = 0;  
        for(int i = 0; i < length; i++)  
        {  
            if(nums[i]) {  
                nums[j++] = nums[i];  
            }  
        }  
        for(int i = j; i < length; i++)  
            nums[i] = 0;  
    }  
};
