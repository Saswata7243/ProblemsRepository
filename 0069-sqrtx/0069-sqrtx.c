long long int mySqrt(long long int x) {
    if(x<0){
        printf("Not possible");
        return -1;
    }
    if(x<2){
        return x;
    }
    long long int low=0;
    long long int high=x;
    long long int ans=0;
    while(low<=high){
        long long int mid=low+(high-low)/2;
        long long int sq=mid*mid;
        if(sq==x){
            return mid;
        }
        else if(sq<x){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}