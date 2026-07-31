class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string prefix = strs[0]; // pehle string ko dla flower

        for (int i = 1; i < strs.size(); i++) {

            int j = 0; //remaining str

            while (j < prefix.size() &&
                   j < strs[i].size() &&
                   prefix[j] == strs[i][j]) {
                j++; // matching kiya letters by let
            }

            prefix = prefix.substr(0, j); // sirf match part rkha baki out

            if (prefix == "") //agr kch match nhi hua toh
                return "";
        }

        return prefix;
    }
};