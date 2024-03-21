#include<stdio.h>
void rightshift(int *a , int *b , int *c);
int main(){
    int x,y,z;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    printf("Enter the value of z : ");\
    scanf("%d", &z);
    printf("Before Right shift The value of x= %d , y=%d , z=%d\n", x,y,z);
    rightshift(&x , &y , &z);
    printf("After Right Shift The value of x = %d , y=%d , z= %d",x,y,z);
    return 0;





}
void rightshift(int *a,int *b , int *c){
    int temp;
    temp = *a;
    *a=*c;
    *c=*b;
    *b=temp;



   
}