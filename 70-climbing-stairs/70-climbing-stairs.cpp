class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1 || n==2) return n;
        int ar[n+1];
        ar[1]=1;
        ar[2]=2;
        for(int i=3;i<n+1;i++)
            ar[i]=ar[i-1]+ar[i-2];
        return ar[n];
        
    }
};