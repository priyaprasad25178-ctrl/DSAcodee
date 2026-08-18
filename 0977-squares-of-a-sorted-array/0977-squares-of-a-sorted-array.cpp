class Solution {
public:
    vector<int> sortedSquares(vector<int>& n) {
        vector<int> a;

        for(int x : n)
            a.push_back(x * x);

        sort(a.begin(), a.end());

        return a;
    }
};