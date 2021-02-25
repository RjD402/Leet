class Solution {
public:
    //https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
    int findUnsortedSubarray(vector<int>& nums) {
        
        int n = nums.size();
        
        int start = 0;
        int end = n - 1;
        
        while(start < n-1 && nums[start] <= nums[start+1])
            start++;
        while(end > 0 && nums[end] >= nums[end-1])
            end--;
        
        if(start == n-1)
            return 0;

        int minVal = nums[start];
        int maxVal = nums[start];
        
        for(int i=start; i<=end; i++)
        {
            if(nums[i] < minVal)
                minVal = nums[i];
            if(nums[i] > maxVal)
                maxVal = nums[i];
        }
        
        for(int i=0; i<start; i++)
        {
            if(nums[i] > minVal)
                start = i;
        }
        
        for(int i=end; i<n; i++)
        {
            if(nums[i] < maxVal)
                end = i;
        }
        
        return (end - start + 1);
    }
};