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
        long int start=1;
        long int end=n;
        while(start <= end)
        {
            long int mid = (start + end) / 2;
            int ret_guess = guess(mid);
            if(ret_guess == -1)
            {
                end = mid -1 ;
            }
            else if(ret_guess == 1)
            {
                start = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;        
    }
};