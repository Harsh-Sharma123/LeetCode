class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int n = nums1.size(), m=nums2.size();
        for(int i=0;i<n;i++){
            int ele = nums1[i], ind=0;
            for(int j=0;j<m;j++){
                if(nums2[j] == ele){
                    ind = j;
                    break;
                }
            }
            int fact=0;
            for(int k=ind;k<m;k++){
                if(nums2[k]>ele){
                    fact = 1;
                    v.push_back(nums2[k]);
                    break;
                }
            }
            if(fact==0){
                v.push_back(-1);
            }
        }
        return v;
    }
};