//STRCPY() SIMULATION
#include <stdio.h>
int cpointer(char *d,char *s){
    for(int i=0;s[i]!='\0';i++){
        d[i]=s[i];
    }
}
int main(){
    char s1[50],s2[50];
    printf("Enter a string: ");
    fgets(s1,sizeof(s1),stdin);
    cpointer(s2,s1);
    printf("String : %s",s2);
}