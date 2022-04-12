class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                v.pop_back();
            }else if(ops[i]=="D"){
                int last = v.back();
                v.push_back(last*2);
            }else if(ops[i]=="+"){
                int size = v.size();
                v.push_back(v[size-1]+v[size-2]);
            }else{
                cout << stoi(ops[i]) << endl;
                v.push_back(stoi(ops[i]));
            }
        }
        int sum=0;
        for(auto i: v){
            sum += i;
        }
        return sum;
    }
};