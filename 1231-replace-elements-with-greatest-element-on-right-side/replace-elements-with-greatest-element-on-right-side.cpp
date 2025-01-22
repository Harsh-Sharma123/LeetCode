class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_ele = -1;
        vector<int> ans(arr.size(), 0);
        ans[arr.size()-1] = max_ele;
        for(int i=arr.size()-1;i>0;i--){
            if(arr[i] > max_ele){
                max_ele = arr[i];
            }
            ans[i-1] = max_ele;
        }
        return ans;
    }
};