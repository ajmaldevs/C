#include <string.h>
#include <stdio.h>
int main(){
    char s1[50],ch;
    int i=0;
    printf("Enter a String: ");
    while((ch==getchar())!='\n'){
        s1[i]=ch;
        i++;
    }
    int len=strlen(s1);
    for(int i=0;i<len;i++){
        printf("%c",s1[i]);
    }
    return 0;
    
}