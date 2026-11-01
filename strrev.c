#include <stdio.h>
#include <string.h>
int main(){
    char s1[50],s2[50];
    printf("Enter a number: ");
    scanf("%s",s1);
    int len=strlen(s1);
    int j=0;
    for(int i=len-1;i>=0;i--){
        s2[j]=s1[i];
        j++;
    }
    printf("Reverse of a string is %s",s2);
    return 0;
}