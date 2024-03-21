#include<stdio.h>
void rightrotate(int r , int c , int arr[r][c]);
int main(){
    int c,r,n;
    printf("Enter the no of rows of the matrix : ");
    scanf("%d", &r);
    printf("Enter the no of columns of the matrix : ");
    scanf("%d", &c);
    int mat[r][c];
    printf("Enter the values of the matrix : ");
    for(int i =0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Enter the no of times that you want to rotate : ");
    scanf("%d", &n);
    for(int i = 0 ; i<n ; i++){
        rightrotate(r,c,mat);
    }
   return 0;



}
void rightrotate(int r, int c ,int arr[r][c]){
    int temp;
    int rotate[c][r];
    for(int i = 0 ; i < c ; i++){
        for(int j = 0 ; j < r ; j++){
            rotate[i][j]=arr[j][r-i-1];
           

        }
    }
     printf("The right rotated matrix is : \n");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            printf("%d\t", rotate[i][j]);
            
        }
        printf("\n");
    }
    



}