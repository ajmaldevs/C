#include <stdio.h>
int main(int argc,char *argv[]){
    printf("Count = %d ",argc);
    for(int i=0;i<argc;i++)
        printf("Arguments : %s",argv[i]);
    return 0;
}