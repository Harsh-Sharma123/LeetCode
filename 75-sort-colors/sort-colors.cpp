class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        int zeroes = 0, ones = 0 , twos = 0;
        for(auto i: nums){
            if(i == 0) zeroes++;
            else if(i==1) ones++;
            else twos++;
        }
        cout << zeroes << " " << ones << " " << twos << endl;
        for(int i=0;i<nums.size();i++){
            if(i<zeroes){
                nums[i] = 0;
            }else if(i>=zeroes && i<ones+zeroes){
                nums[i] = 1;
            }else  nums[i] = 2;
        }
    }
};