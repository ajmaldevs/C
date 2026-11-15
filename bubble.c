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
        if (a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    printf("Sorted Array: ");
    for(int j=0;j<n;j++)
    printf("%d \n",a[j]);
}