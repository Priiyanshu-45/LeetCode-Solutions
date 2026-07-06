class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long reversedNum = 0;
        int temp = x;
        while(temp){
            int ld = temp%10;
            reversedNum = reversedNum*10 + ld;
            temp = temp/10;
        }
        return reversedNum == x;
    }
};