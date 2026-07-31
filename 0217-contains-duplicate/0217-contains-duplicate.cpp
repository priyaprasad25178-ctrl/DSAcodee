class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s; //empty hash set create krga s means starting {}
        for (int num:nums) { // range based for loop
            if (s.count(num)) //check krga no already exist 
            return true;

            s.insert(num); //agr same no. nhi toh store kro
        }
        return false; //kch nhi mila toh
    }
};