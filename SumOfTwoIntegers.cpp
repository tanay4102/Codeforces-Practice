class Solution {
public:
    
    int sign(int a, int b) {
        if(a > b) swap(a,b);
        return (a>=0 ^ b>=0) ? abs(a) > abs(b) : (a < 0); 
    }
    
    int getSum(int num1, int num2) {
        int c = 0, mask = 1;
        int ans = sign(num1,num2) << 31; // setting the sign of result
        
        for(int i = 0 ; i < 31 ; i++) {
            int bit1 = (num1 & mask) > 0, bit2 = (num2 & mask) > 0;
            int sum = bit1 ^ bit2 ^ c;
            c = (bit1 & bit2) | (bit2 & c) | (bit1 & c);
            ans |= (sum << i);
            mask = mask << 1;
        }
        
        return ans;
    }
};
