class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double, pair<int, int>>> h;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                double frac = (double) arr[i]/arr[j];
                h.push({frac, {arr[i], arr[j]}});
                if(h.size() > k){
                    h.pop();
                }
            }
        }
        vector<int> v;
        v.push_back(h.top().second.first);
        v.push_back(h.top().second.second);
        return v;
    }
};