public class Solution {
    public String addBinary(String a, String b) {
        int al = a.length()-1;
    int bl = b.length()-1;
    int carry = 0;
    StringBuilder sb = new StringBuilder("");
    while (al>=0||bl>=0||carry!=0){
        int x = (al<0)? 0 : a.charAt(al) - 48;
        int y = (bl<0)? 0 : b.charAt(bl) - 48;
        int sum = carry + x + y;
        carry = sum/2;
        sb.insert(0,String.valueOf(sum%2));
        al--;
        bl--;
    }
    return sb.toString();
    }
}
