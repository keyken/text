public class Solution {
    public boolean isPalindrome(String s) {
        if(s.length()<=1){
            return true;
        }
        int i=0;
        int j=s.length()-1;
        while(i<j){
            char c1=s.charAt(i);
            char c2=s.charAt(j);
            if(Valid(c1)){
                if(Valid(c2)){
                    if(c1!=c2&&Math.abs(c1-c2)!=32){
                        return false;
                    }
                    i++;
                    j--;
                }
                else{
                    j--;
                }
            }
            else if(Valid(c2)){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
     public boolean Valid(char c){
          if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9')){
                return true;
            }
            return false;
        }
}