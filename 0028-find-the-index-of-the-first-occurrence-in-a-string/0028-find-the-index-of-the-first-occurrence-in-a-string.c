int strStr(char* haystack, char* needle) {
    int n1=strlen(needle);
    int n2=strlen(haystack);
    if(n1>n2){
        printf("Substring can't be bigger than parent string");
        return -1;
    }
    else{
      char *target=strstr(haystack,needle);
      if(target==NULL){
        return -1;
      }
      int k=target-haystack;
      char test[n1];
      for(int i=0;i<n1;i++){
        test[i]=haystack[i+k];
      }
      for(int j=0;j<n1;j++){
        if(test[j]!=needle[j]){
            return -1;
        }
      }
      return k;
    }
}