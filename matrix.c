#include <stdio.h>
int main(){
    int a[10][10],n,row,col,dia,sum=0;
    printf("Enter number of Rows: ");
    scanf("%d",&row);
    printf("Enter number of Coulmns: ");
    scanf("%d",&col);
    printf("Enter Array Elements: ")
    for(int i=0;i<row;i++){
        sum=0;
        for(int j=0;j<col;j++){
            sum+=a[i][j];
        }
        printf("Row %d Sum : %d",i+1,sum);
    }
    for(int j=0;j<row;j++){
        sum=0;
        for(int i=0;i<col;i++){
            sum+=a[i][j];
        }
        printf("Column %d Sum : %d",j+1,sum);
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            dia+=a[i][i];
        }
    }
    printf("Matrix Sum = %d",dia);
}