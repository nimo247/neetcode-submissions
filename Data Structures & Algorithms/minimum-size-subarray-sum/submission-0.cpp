class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0;

        int windowSum = 0;
        int minSize = INT_MAX;

        for(int right = 0;right < nums.size();right++){

            windowSum += nums[right];

            while(windowSum >= target){
                windowSum -= nums[left];
                minSize = min(minSize,right-left+1);
                left++;
            }
            
            
            
        }
        return (minSize == INT_MAX) ? 0 : minSize;
        
    }
};