#include <stdio.h>
int main(){
    FILE *fp;
    fp=fopen("Data.txt",'w');
    fprintf(fp,"Hello........");
    fclose(fp);
    return 0;
}