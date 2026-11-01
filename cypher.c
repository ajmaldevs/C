#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int only_digits(char *a);
int rotate(char*,int);
int main(int argc,char *argv[]){
    if(argc<2||argc>2){
        printf("Usage: ./caesar key");
        return 1;
    }
    int a=only_digits(argv[1]);
    if(a==1)return 1;
    int n=atoi(argv[1]);
    char s[100];
    char *s1=&s;
    printf("Plaintext: ");
    scanf("%99s",s);
    n=n%26;
    rotate(s1,n);
}
int only_digits(char *n){
    for(int i=0;n[i]!='\0';i++){
    if(!isdigit(n[i])){
        printf("Usage: ./caesar key");
        return 1;
    }
}
    return 0;
}
int rotate(char *s1,int n){
    char c;
    printf("ciphertext: ");
    for(int i=0;s1[i]!='\0';i++){
        if(isupper(s1[i])){
            c=(((s1[i]-'A')+n)%26)+'A';
            printf("%c",c);
        }
        else if(islower(s1[i])){
            c=((s1[i]-'a'+n)%26)+'a';
            printf("%c",c);
        }
        else{
            printf("%c",s1[i]);
        }
    }
    printf("\n");
    return 0;
}
