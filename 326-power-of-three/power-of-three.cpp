class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n%3!=0 || n==0)
        {
            if(n==1)
            return true;
            return false;
        }
        return isPowerOfThree(n/3);
    }
};