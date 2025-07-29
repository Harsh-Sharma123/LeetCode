class Solution {
public:
    
    bool check(int &i, int &j, vector<vector<int>> &arr){
        for(int k=0;k<32;k++){
            if(arr[i][k]!=0 && arr[i][k]<=arr[j][k]) return false;
        }
        return true;
    }
    
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> arr(n, vector<int>(32, 0));
        
        for(int i=0;i<n;i++){
            int a= nums[i];
            int j=31;
            while(a>0){
                if(a%2!=0) arr[i][j]=1;
                j--;
                a=a/2;
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<32;j++){
                arr[i][j]+=arr[i+1][j];
            }
        }
        vector<int> ans(n);
        ans[n-1]=1;
        int j=n-1;
        for(int i=n-2;i>=0;i--){
            while(i<j && check(i, j, arr)) j--;
            ans[i]=j-i+1;
        }
        return ans;
    }
};