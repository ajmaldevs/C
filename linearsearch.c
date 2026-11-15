#include <stdio.h>
int linearsearch(int [],int,int);
int main(void){
    int a[10],n,key;
    printf("Enter number of Elements: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        fprintf(stderr, "Enter a number of elements from 1 to 10.\n");
        return 1;
    }
    printf("Array Elements: ");
    for(int i=0;i<n;i++){
        if (scanf("%d", &a[i]) != 1) {
            fprintf(stderr, "Invalid array element.\n");
            return 1;
        }
    }
    printf("Enter Key Element: ");
    if (scanf("%d", &key) != 1) {
        fprintf(stderr, "Invalid key element.\n");
        return 1;
    }
    int res=linearsearch(a,n,key);
    if(res==-1){
        printf("Element not Found");
    }
    else{
        printf("Element found at position %d",res);
    }
    return 0;
}
int linearsearch(int a[],int n,int key){
    for (int i = 0; i < n; i++) {
        if(a[i]==key){
            return i+1;
        }
    }
    return -1;
}