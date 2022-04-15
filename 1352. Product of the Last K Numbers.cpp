class ProductOfNumbers {
    vector<int> v;
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if(num == 0) {
            v.clear();
            return ;
        }
        if(v.size()==0){
            v.push_back(num);
            return ;
        }
        v.push_back(v.back()*num);
    }
    
    int getProduct(int k) {
        if(v.size() < k) return 0;
        if(v.size()==k) return v[k-1];
        return v.back()/v[v.size()-k-1];
    }
};