#include <stdio.h>
int main(){
    int a[10],n,largest,smallest;
    printf("Enter Number of Elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if (a[0]>a[1]){
         largest=a[0],smallest=a[1];
    }
    else{
        largest=smallest=a[0];
    }
    for(int j=0;j<n;j++){
        if(a[j]>largest){
            smallest=largest;
            largest=a[j];
        }
        else if(a[j]>smallest && a[j]!=largest){
            smallest=a[j];
        }
    }
    printf("Largest : %d",largest);
    printf("Second largest : %d",smallest);
}