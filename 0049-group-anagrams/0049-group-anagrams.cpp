class Solution { //hasp map - Sort karo, same sort wale words ko ek group me daal do 
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp; //sorted word ke saare original words
        for (string word : strs){ //Array ke har word ko traverse karo
            string temp = word; //Original word ki copy banao


            sort(temp.begin(), temp.end()); //Copy ko sort karo like eat ko aet

            mp[temp].push_back(word); //Sorted word ko key banao - Original word ko us key ke vector me store karo
        }

            vector<vector<string>> ans; //ans store 
            for(auto it: mp){
                ans.push_back(it.second); //Map ke saare vectors answer me daal do
            
            }
            return ans; //grp anagram show hoga

     }
};