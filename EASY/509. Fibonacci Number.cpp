class Solution {
public:
    int fib(int n) {
        if(n <= 1){
            return n;
        }else{
            return fib(n - 1) + fib(n - 2);
        }
    }
};

//DP
class Solution {
public:
    int fib(int n) {
        if(n == 0){
            return 0;
        }
        vector<int> ans(n + 1);
        ans[0] = 0;
        ans[1] = 1;
        for(int i = 2;i <= n;i++){
            ans[i] = ans[i - 1] + ans[i - 2];
        }
        return ans[n];
    }
};
