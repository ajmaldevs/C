#include <stdio.h>
#include <string.h>
int main(){
    char s1[100];
    printf("Enter a string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("%i",strlen(s1));
    
}