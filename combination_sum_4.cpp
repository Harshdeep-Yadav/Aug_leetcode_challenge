class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        if(target<0)
            return 0;
        if(target == 0)
            return 1;
        
        int res=0;
        for(int i=0; i<nums.size(); i++)
            res+= combinationSum4(nums, target-nums[i]);
        
        return res;
    }
};
-> Top-Down (Accepted)
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1, -1);
        dp[0]=1;
        
        func(nums, target, dp);
        return dp[target];
    }
    
    int func(vector<int> &nums, int target, vector<int> &dp){
        if(target<0)
            return 0;
    
        if(dp[target] != -1)
            return dp[target];
        
        int res=0;
        for(int i=0; i<nums.size(); i++)
            res+= func(nums, target-nums[i], dp);
        
        return dp[target] = res;
    }
};
-> Bottom-Up (Accepted)
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector< unsigned int> dp(target+1);
        dp[0]=1;
        
        for(int i=1; i<target+1; i++)
            for(int j=0; j<nums.size(); j++)
                if(nums[j]<=i)
                    dp[i] += dp[i-nums[j]];
        
        return dp[target];
    }
};
