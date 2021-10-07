class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int xxx;
        for(auto key:nums){
            if(s.find(key) != s.end())
                xxx= key;
            else 
                s.insert(key);
        }
    return xxx;
    }   
};
/*
Create a set and check if that element is already in set return :) 
*/
