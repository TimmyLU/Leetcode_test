class Solution{
public:
    bool isPalindrome(int x){
        if (x < 0 || (x % 10 == 0 && x != 0)){
            return false;
        }
        string s = to_string(x);
        int head = 0;
        int end = s.length() - 1;
        
        while(head < end){
            if (s[head] != s[end]){
                return false;
            }
            head++;
            end--;
        }
        return true;
    }
};