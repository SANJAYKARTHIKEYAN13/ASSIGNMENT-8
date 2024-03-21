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
    printf("Enter the no of times that you want to right rotate the matrix : ");
    scanf("%d", &n);
    for(int i =0 ; i<n ; i++){
        rightrotate(r,c,mat);
    }
    return 0;


}
void rightrotate(int r, int c , int arr[r][c]){
    int trans[c][r];
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            trans[i][j]=arr[j][i];

        }
    }
        printf("The transpose of the given matrix is : ");
        for(int i = 0; i< r ; i++){
            
            for(int j =0 ; j<c ; j++){
                printf("%d \t ",trans[i][j] );
            }
            printf("\n");
        }
    
    for(int i = 0 ; i < r ; i++){
        int temp;
        for(int j = 0 ; j < c/2 ; j++){
            temp=trans[i][j];
            trans[i][j]=trans[i][c-j-1];
            trans[i][c-j-1]=temp;
            
            
        }
    }
    printf("The Right rotated matrix  is : ");
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c; j++){
            printf("%d \t ", trans[i][j]);
    }
    printf("\n");
    }

}
