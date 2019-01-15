class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int ,int > m;
        
        for(auto i : nums)
        {
            if(!m[i])
                m[i]=1;
            else
                m[i]++;
        }
        nums.clear();
        if(m[2])
            nums.insert(nums.begin(),m[2],2);
        if(m[1])
            nums.insert(nums.begin(),m[1],1);
        if(m[0])
            nums.insert(nums.begin(),m[0],0);
        }
};