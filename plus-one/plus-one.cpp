class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int index=n-1;
        while(index>=0 && digits[index]==9 )
            digits[index--]=0;
        if(index<0)
            digits.insert(digits.begin(),1,1);
        else
            digits[index]++;
        return digits;
        
    }
};