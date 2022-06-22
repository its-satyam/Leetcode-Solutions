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
//         int lo = 1, hi = n;
//         while(true)
//         {
//             int mid = (hi - lo)/2 + lo;

//             int res = guess(mid);
//             if (res == 0)
//                 return mid;
        
//             if (res == 1)
//                 lo = mid+1;
//             else
//                 hi = mid;
//         }
        
         int low{1},high{n};
        while(low<=high){
            int mid=low+((high-low)/2);
            if(guess(mid)==0){
                return mid;
            }else if(guess(mid)==1){
                low=mid+1;
            }else if(guess(mid)==-1){
                high=mid-1;
            }
        }
        return -1;
    }
};