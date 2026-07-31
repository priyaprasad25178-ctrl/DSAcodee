class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!= t.length())
            return false;
            int count[26] ={0}; //array banao 0 to25 ka jismi initially sab 0 honge

            for (char c:s)
                count[c-'a']++; //loop first string ke letters count karta hai
            for (char c:t)
                count[c-'a']--;//second string ke characters ko minus karte hain
            for (int i=0;i<26;i++) //check karta hai ki koi letter extra to nahi bacha
            {
                if (count[i]!=0)
                    return false;
            }
        return true;
    }
};