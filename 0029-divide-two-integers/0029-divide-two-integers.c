long long int divide(long long int dividend, long long int divisor) {
    long long int t;
    if(dividend<0 && divisor<0){
        long long int k=-1*dividend;
        long long int m=-1*divisor;
        t=k/m;
    }
    else{
        t=dividend/divisor;
    }
    if(t>2147483647){
        return t-1;
    }
    else{
        if(t<-2147483648){
            return t;
        }
    }
    return dividend/divisor;
}