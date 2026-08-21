class Solution {
public:
int F(int n){
    if(n<=1){
        return n;
    }
    int last = F(n-1);
    int Slast = F(n-2);

    return ( last + Slast);
}
    int fib(int n) {
        return F(n);
    }
};