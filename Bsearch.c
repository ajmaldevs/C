#include <stdio.h>
int bsearch(int a[],int n,int key){
    int high,low,mid;
    high=n-1;
    low=0;
    while(low<=high){
            mid=(low+high)/2;
        if(key==a[mid])
            return mid+1;
        else if(key>a[mid]){
            low=mid+1;
        }
        else if(key<a[mid]){
            high=mid-1;
        }
        else{
            return -1;
        }
    }
}
int main(void){
    int a[10],n,key;
    printf("Enter Number of terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the Key Element: ");
    scanf("%d",&key);
    int res=bsearch(a,n,key);
    if(res==-1){
        printf("Element Not Found");
    }
    printf("The Key Element Found at %d",res);

}