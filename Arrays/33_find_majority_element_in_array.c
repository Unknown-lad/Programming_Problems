#include <stdio.h>
int main(){

    int i,j,len,count;
    printf("Enter the length: ");
    scanf("%d",&len);
    int arr[len];
    int arr1[len];
    int visit=-1;

    for(i=0;i<len;i++){
        printf("Enter the element [%d]: ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len-j;i++){
        count=0;
        for(j=i;j<len;j++){
            if(arr[i]==arr[j]){
                count++;
                arr1[j]=visit;
            }
        }
        if(arr[i]!=visit){
            arr1[i]=count;
        }
    }

    for(i=0;i<len;i++){
        if(arr[i]!=visit){
         printf("%d | %d",arr[i],arr1[i]);
        }
        printf("\n");
    }

return 0;
}
