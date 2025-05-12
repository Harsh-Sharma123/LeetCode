class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> v;
        set<int> s;
        int n=digits.size();
        for(int i=0;i<n;i++){
            if(digits[i]==0) continue;
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i!=j && j!=k && i!=k && digits[k]%2==0){
                        s.insert(digits[i]*100+digits[j]*10+digits[k]);
                    }
                }
            }
        }
        for(auto i: s){
            v.push_back(i);
        }
        return v;
    }
};