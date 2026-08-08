class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int h=heights.size()-1;
       int maxArea=0;
        while(l<h){
            maxArea=max(maxArea , min(heights[l], heights[h]) * (h-l));
            if(heights[l]> heights[h]){
                h--;
            }
            else{
                l++;
            }
           
        }
        return maxArea;
    }
};
