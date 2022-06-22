/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if(n==1) return 1;
        int s=1,e=n;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int x=guess(mid);
            if(x==-1) e=mid-1;
            else if(x==1) s=mid+1;
            else if(x==0) return mid;
        }
        return -1;
        
    }
};