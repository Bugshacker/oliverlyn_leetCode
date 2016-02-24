class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0)
            return false;
        else if(n >= 1) {
            return pow(3, round(log(n)/log(3))) == n;
        }
    }
   
};
/*************
*power of two*
**************
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        else if(n >= 1) {
            return pow(2, round(log(n)/log(2))) == n;
        }
    }
};*/
