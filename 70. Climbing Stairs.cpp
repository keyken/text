class Solution {
public:
    int climbStairs(int n) {
        int step1=0;
        int step2=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=step1+step2;
            step1=step2;
            step2=sum;
        }
        return sum;
    }
};
