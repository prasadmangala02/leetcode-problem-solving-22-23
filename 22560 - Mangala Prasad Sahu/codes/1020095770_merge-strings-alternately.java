class Solution {
    public String mergeAlternately(String word1, String word2) {
        int s=word1.length();
        int t=word2.length();
        int i=0;
        StringBuilder sb =new StringBuilder();
        while(i<s || i<t){
            if(i<s)
                sb.append(word1.charAt(i));
           if(i<t)
                sb.append(word2.charAt(i));
                i++;
        }
        return sb.toString();
    }

}