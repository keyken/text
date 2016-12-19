public class Solution {
    public String convertToTitle(int n) {
        String title="";
        while(n!=0){
        title = (char)((n-1)%26+'A') + title;
           n=(n-1)/26;
        }
        return title;
    }
}
