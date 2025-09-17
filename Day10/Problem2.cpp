class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vis=nums[0];
        int count=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            
            if(vis==nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                vis=nums[i];
                count++;
            }
        }
        return vis;
        
        
    }
};