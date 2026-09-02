class Solution {
public:
    int divide(int dividend, int divisor) {
       if(dividend==divisor) return 1;

       bool sign=true;//positive

       if(dividend>0&&divisor<0) sign=false;
       if(dividend<0 && divisor>0) sign=false;

       long long n=dividend;
       long long d=divisor;
       n=abs(n);
       d=abs(d);

        // long long ans=0,sum=0;//Brute force

        // while(n>=sum+d)
        // {
        //     ans++;//increase the count
        //     sum+=d;//sum ko update kro and check kro upar loop m
        // }

        int ans=0;//Optimisation

        while(n>=d)
        {
        int count=0;
        while(n>=(d<<(count+1)))//d*2^(count+1)
        {
            count++;
        }
        ans+=1<<(count);//store kro
        n=n-(d<<(count));//numerator ko reduce kro
       }

       if(ans==(1<<31) && sign==true) return INT_MAX;
       if(ans==(1<<31) && sign==false) return INT_MIN;

       return sign?ans:(-ans);

    }
};
