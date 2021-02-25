#include <stdio.h>
int main(){

    int row,col,row1,col1,i,j,flag=1;
    int arr1[50][50];
    int arr2[50][50];

    printf("\nInput Rows and Columns of the 1st matrix: ");
    scanf("%d %d",&row,&col);

    printf("\nInput Rows and Columns of the 2nd matrix: ");
    scanf("%d %d",&row1,&col1);
    printf("\nFirst Matrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nSecond Matrix\n");
    for(i=0;i< row1;i++){
        for(j=0;j<col1;j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nFirst Matrix\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix\n");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    if(col==col1 && row==row1){
        printf("\nCan be compared");
        for(i=0;i<row;i++){
            for(j=0;j<col1;j++){
                if(arr1[i][j]==arr2[i][j]){
                    flag =1;
                    break;
                }
            }
        }
    }
    else{
        printf("\nNot Compared");
    }
    if(flag=0){
        printf("\nCan't be compared");
    }
return 0;
}