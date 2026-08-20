class Solution {
public:
double power(double x,long long n)
{
    double ans=1;//integer value of anser can be stored
    if(n==0) return 1.0;

    while(n>0)
    {
        if(n&1)
        ans*=x;

        x*=x;
        n/=2;
    }
    return ans;
}
    double myPow(double x, int n) {
        if(n==0 && x==1.0) return 1;//power == 0 and num==1
        long long exp=n;
        if(n<0)
        {
            x=1/x;
            exp=-exp;
        }
        return power(x,exp);
    }
};
