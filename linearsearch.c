#include <stdio.h>
int linearsearch(int [],int,int);
int main(void){
    int a[10],n,key;
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    printf("Array Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter Key Element: ");
    scanf("%d",&key);
    linearsearch(a,n,key);
    return 0;
}
int linearsearch(int a[],int n,int key){
    for(int i =0;i<n;i++){
        if(a[i]==key){
            printf("Element Found at Postion %d",i+1);
            break;
        }
    }
    return 0;
}