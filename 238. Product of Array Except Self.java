public class Solution {
    public int[] productExceptSelf(int[] nums) {
      int[] res=new int[nums.length];
        res[res.length-1]=1;
        for(int i=nums.length-2;i>=0;i--){
            res[i]=res[i+1]*nums[i+1];
        }
        int[] right=new int[nums.length];
        right[0]=1;
        for(int i=1;i<nums.length;i++){
            right[i]=right[i-1]*nums[i-1];
            res[i]*=right[i];
        }        
         return res;

    }
}