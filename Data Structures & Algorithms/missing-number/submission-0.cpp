class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int i =0;
        
        while(i < nums.size()){

            int correctIndex = nums[i];

            if(nums[i] < nums.size() && nums[i] != nums[correctIndex]){

                swap(nums[i],nums[correctIndex]);
            }
            else{
                i++;
            }
        }
        for(int i = 0; i < nums.size();i++){
            if(nums[i] != i){
                return i;
            }
        }
        return nums.size();
        
    }
};
