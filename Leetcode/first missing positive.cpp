class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int i=1;
        for(int x: s)
        {
            if(s.find(i)==s.end())return i;
            else{
                i++;
            }
        }
        return i;
    }
};