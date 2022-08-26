class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& eff, int k) {
        vector<vector<int>> vec;
        for(int i =0;i<speed.size();i++){
            vec.push_back({eff[i],speed[i]});
        }
        sort(vec.begin(),vec.end());
        priority_queue<int,vector<int>,greater<int>> pq;
        long long sum =0;
        long long maxi =0;
        int mod = 1e9+7;
        for(int i=n-1;i>=n-k+1;i--){
            pq.push(vec[i][1]);
            sum+=vec[i][1];
            maxi = max(maxi,sum*vec[i][0]);
        }
        for(int i=n-k;i>=0;i--){
            pq.push(vec[i][1]);
            sum+=vec[i][1];
            while(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
            maxi = max(maxi,vec[i][0]*sum);
        }
        return maxi%mod;
        
        
    }
};