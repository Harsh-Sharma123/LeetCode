class Solution {
public:
    
    double dist(vector<int> a, vector<int> b){
        int d1 = abs(a[0]-b[0]), d2 = abs(a[1]-b[1]);
        return sqrt(d1*d1 + d2*d2);
    }
    
    double cal(double s, double a, double b, double c){
        double p = s*(s-a)*(s-b)*(s-c);
        return sqrt(p);
    }
    
    double largestTriangleArea(vector<vector<int>>& p) {
        sort(p.begin(), p.end());
        int n = p.size();
        double area = 0;
        double a=0, b=0, c=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                a = dist(p[i], p[j]);
                for(int k=j+1;k<n;k++){
                    b = dist(p[i], p[k]);
                    c = dist(p[j], p[k]);
                    double s = (a+b+c)/2.0;
                    area = max(area, cal(s, a, b, c));
                }
            }
        }
        return area;
    }
};