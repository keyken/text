public class Solution {
    public int numberOfArithmeticSlices(int[] A) {
     if(A.length<3) return 0;
        int num1=0;
        int num2=1;
        for(int i=1;i<A.length-1;i++){
        	if(A[i]-A[i-1]==A[i+1]-A[i]){
                num1+=(num2++);
        	}
        	else {
        		num2=1;
        	}
        }
		return num1;
    }
}
