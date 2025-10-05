class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int area = INT_MIN;
        while(l<r) {
            int h = min(height[l], height[r]);
            area = max(area, h * (r-l));
            // cout<<l<<" "<<r<<" "<<area<<"\n";
            if (height[l] < height[r]) {
                l++;
            }
            else {
                r--;
            }
        }
        return area;
    }
};