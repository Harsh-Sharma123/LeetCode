class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0, first = 0, last = height.size()-1;
        while(first < last){
            area = max(area, min(height[first], height[last]) * (last-first));
            if(height[first] > height[last]) last--;
            else first++;
        }
        return area;
    }
};