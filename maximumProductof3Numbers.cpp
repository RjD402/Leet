//https://leetcode.com/problems/maximum-product-of-three-numbers/
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1 = INT_MAX, min2 = INT_MAX;
        int max1 = INT_MIN, max2 = INT_MIN, max3=INT_MIN;
        
        for(int i =0;i<nums.size();i++){
            //maximum check
            if(nums[i]>max1){
                max3 = max2;
                max2 = max1; 
                max1 = nums[i];
            }else if(nums[i]>max2){
                max3 = max2;
                max2 = nums[i];
            }else if(nums[i]>max3){
                max3 = nums[i];
            }
            
            //minimum check 
            if(nums[i]<min1){
                min2 = min1; min1 = nums[i];
            }else if(nums[i]<min2){
                min2 = nums[i];
            }
        }
        // if(min1*min2>0)
        //     return min1*min2*max1;
        // else
        //     return max1*max2*max3;
        return (max(min1*min2*max1, max1*max2*max3));
    }
};