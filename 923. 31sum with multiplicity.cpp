class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int count = 0;
        
        long long mod = 1000000007;
        unordered_map<int, int> m;
        
        // for(auto i: arr){
        //     m[i]++;
        // }
        int n = arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int need = target-arr[i]-arr[j];
                count += m[need];
            }
            count %= mod;
            m[arr[i]]++;
        }
        return count%mod;
    }
};