bool isPalindrome(int x) {
    
    if(x<0 || (x%10==0 && x!=0)){
        return false;
    }
    if(x==0){
        return true;
    }
    int t=x;
    int c=0;
    while(t>0){
        c++;
        t=t/10;
    }
    char str[c+1];
    sprintf(str,"%d",x);
    char str1[c+1];
    for(int i=0;i<c;i++){
        str1[i]=str[c-i-1];
    }
    str[c]='\0';
    str1[c]='\0';

    return (strcmp(str,str1)==0);
    
}

