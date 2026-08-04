class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
       
    //   for(int i=0;i<nums.size();i++) {
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]+ nums[j] == target){
    //             ans.push_back(i);
    //              ans.push_back(j);
    //             break;
    //         } 
    //     }
    //   }
      unordered_map<int, int> mp;
    for(int i=0;i<nums.size();i++){
        int diff=target-nums[i];
        auto it = mp.find(diff);
        if(it!= mp.end()){
            return {it->second ,i};
        }
        mp[nums[i]]=i;
    }
    return {};
    }
};
