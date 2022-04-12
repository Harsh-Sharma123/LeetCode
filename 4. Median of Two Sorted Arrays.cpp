class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m =nums2.size();
        int g=m+n;
        int ans[m+n];
        int i=0, j=0, k=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                ans[k++] = nums1[i++];
            }else{
                ans[k++] = nums2[j++];
            }   
        }
        while(i<n){
            ans[k++] = nums1[i++];
        }
        while(j<m){
            ans[k++] = nums2[j++];
        }
        
        for(int i=0;i<m+n;i++){
            cout << ans[i] << " ";
        }
        
        double mm;
        int t = m+n;
        if((t)%2==0){
            mm = (ans[(t/2)-1]+ans[t/2])/2.0;
        }else{
            mm = ans[t/2];
        }return mm;
        
    }
};