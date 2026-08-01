class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        
    

        sort(nums.begin(),nums.end());

        vector<vector<int>> ans;


        
        for(int i = 0;i < n;i++){
            int start = i + 1;
            int end = n-1;
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            while(end > start){
                int sum = nums[start] + nums[end] + nums[i];
                if(sum < 0){
                   start++;
                    
                }
                else if(sum > 0){
                    end--;
                    
                }
                else{
                    ans.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    end--;

                    while(start < end && nums[start] == nums[start - 1]){
                        start++;
                    }
                    while(start < end && nums[end] == nums[end + 1]){
                        end--;
                    }
                    
                }
             
                

            }
            
        }
        
        return ans;
    }
};
