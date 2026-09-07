#include <limits.h>
#include <stdlib.h>
long int reverse(long int x){
    
    long long int t=labs(x);
    long long int rev=0;
    while(t>0){
        int d=t%10;
        rev=rev*10+d;
        t=t/10;
    }
    if(x<0){
        rev=-rev;
    }
    if(rev > INT_MAX || rev < INT_MIN){
        return 0;
    }
    return (long int)rev;
}