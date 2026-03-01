int lengthOfLastWord(char* s) {
    int len=strlen(s);
    int ct=0,i=len-1;
    while(i>=0 && s[i]==' ')
    i--;
    while(i>=0 && s[i]!=' '){
        ct++;
        i--;
    }
    return ct;
}
