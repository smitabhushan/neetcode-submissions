class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int , int> mp;
        // int n=nums.size();
        // for(int i=0;i<nums.size();i++) {
        //     mp[nums[i]]++;
        // }
        // for(auto it:mp){
        //     if(it.second > n/2){
        //         return it.first;
        //     }
        // }
        // return 0;

        int count=0;
        int candidate=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                candidate=nums[i];
            }
            if(candidate== nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;

    }
};