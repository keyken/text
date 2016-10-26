public class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length()!=t.length()) return false;
		HashMap<Character,Character> maps=new HashMap<Character,Character>();
		char ch1[]=s.toCharArray();
		char ch2[]=t.toCharArray();
		for(int i=0;i<s.length();i++){
			if(maps.containsKey(ch1[i])){
				if(maps.get(ch1[i])!=ch2[i]) return false;
			}
			else{
				if(maps.containsValue(ch2[i])) return false;
				maps.put(ch1[i], ch2[i]);
			}
		}
		return true;
    }
}
