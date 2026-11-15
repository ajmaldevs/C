#include <stdio.h>
#include <string.h>
int main(){
    char s[50],s1[50];
    printf("Enter the String: ");
    fgets(s,sizeof(s),stdin);
    int j=0;
    for(int i=strlen(s);s[i]!='\0';i--){
        s1[j]=s[i];
        j++;
    }
    printf("Reverse of the string: %s",s1);
}