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
    int res=linearsearch(a,n,key);
    if(res==-1){
        printf("Element not Found at Position %d",res);
    }
    else{
        printf("Element not found");
    }
    return 0;
}
int linearsearch(int a[],int n,int key){
    for(int i =0;i<n;i++){
        if(a[i]==key){
            return i+1;
        }
        else{
            return -1;
        }
    }
    return 0;
}