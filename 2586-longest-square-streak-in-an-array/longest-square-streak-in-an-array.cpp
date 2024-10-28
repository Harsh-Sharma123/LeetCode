class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        map<long, long> m;
        for(auto i: nums) m[i]++;
        sort(nums.begin(), nums.end());
        
        int maxi=-1;
        for(int i=0;i<nums.size();i++){
            int temp=1;
            long a=nums[i];
            while(true){
                long long sq = a*a;
                if(m.find(sq)!=m.end() & m[sq]!=-1){
                    temp++;
                    a=sq;
                }else{
                    m[sq]=-1;
                    break;
                }
            }
            if(temp>1) maxi=max(maxi, temp);
        }
        return maxi;
    }
};