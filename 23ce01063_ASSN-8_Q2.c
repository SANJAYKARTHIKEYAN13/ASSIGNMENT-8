#include<stdio.h>
int main(){
    int r1,c1,r2,c2,sum=0;
    printf("Enter the dimensions of the first matrix(rows and columns) : ");
    scanf("%d %d", &r1,&c1);
     int m1[r1][c1];
    printf("Enter the elements of the first matrix");
    for(int i = 0 ; i < r1 ; i++){
        for(int j = 0 ; j < c1 ; j++){
            printf("Enter the %d %d element of matrix-1 : ", i,j);
            scanf("%d", &m1[i][j]);

        }
    }
    printf("The no of columns of the first matrix is equal to no of columns of the second matrix \n ");
    printf("Enter the dimensions of the second matrix(rows and columns) : ");
    scanf("%d %d", &r2,&c2);
   int m2[r2][c2];
    printf("Enter the elements of the second matrix");
     for(int i = 0 ; i < r2 ; i++){
        for(int j = 0 ; j < c2 ; j++){
            printf("Enter the %d %d element of matrix-2 : ", i,j);
            scanf("%d", &m2[i][j]);

        }
    }
    int c[r1][c2];
    for(int i= 0 ; i<r1 ; i++ ){
        for(int j = 0 ; j<c2 ; j++){
            for(int k = 0 ; k < c1 ; k++){
                sum += m1[i][k]*m2[k][j];
            }
            c[i][j]=sum;
            sum=0;

        }
    }
    printf("The resultant matrix is : \n");
    for(int i = 0 ; i < r1  ; i++){
        for(int j = 0 ; j < c2  ; j++){
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
    
    
}