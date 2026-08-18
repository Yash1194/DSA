class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
                return false;
            }
        int orignal = x;
        
        int revNum = 0;
        while(x!=0){
            
            int ld = x%10;

               if (revNum>INT_MAX/10||
               (revNum == INT_MAX/10 && ld > 7)) {
                return 0;
            }
            revNum = (revNum *10)+ld;
            x = x/10;
           
        }
        if(revNum == orignal){
            return true;
        }else{
            return false;
        }
    }
};