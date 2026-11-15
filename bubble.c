#include <stdio.h>
int main(){
    int n,a[10];
    printf("Enter Number of Terms: ");
    scanf("%d",&n);
    printf("Enter Array Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if (a[j]>a[j+1]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
    printf("Sorted Array: ");
    for(int j=0;j<n;j++)
    printf("%d \n",a[j]);
}