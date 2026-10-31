#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    char s1[100],s2[100];
    char letter;
    int t1=0,t2=0;
    printf("Enter Words: \n");
    printf("Player 1:");
    scanf("%s",s1);
    printf("Player 2:");
    scanf("%s",s2);
    int score[26]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
        5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
        1, 4, 4, 8, 4, 10
    };
    for(int i=0;s1[i]!='\0';i++){
        letter=tolower((unsigned char)s1[i]);
        if(letter >='a'&& letter<='z'){
            t1+=score[letter - 'a'];
        }
    }
    for(int i=0;s2[i]!='\0';i++){
        letter=tolower((unsigned char)s2[i]);
        if(letter >='a'&& letter<='z'){
            t2+=score[letter - 'a'];
        }
    }
    if (t1==t2){
        printf("tie !\n");
    }
    else if(t1>t2){
        printf("Player 1 Wins !\n");
    }
    else{
        printf("Player 2 Wins !\n");
    }
}