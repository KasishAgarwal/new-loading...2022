vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map <int,int> mp;
        for(int i=0;i<nums.size() ;i++)
        {
            if(mp.find(target-nums[i] !=mp.end())){
                ans[0]=mp[target-num[i]];
                ans[1]=i;
                break;
                
            }
            mp[nums[i]]=i;
        }
        return ans;
        
    }
