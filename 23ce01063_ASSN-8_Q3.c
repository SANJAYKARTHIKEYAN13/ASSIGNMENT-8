#include<stdio.h>
void reversearray(int *ptr, int n);
int main(){
      int n ;
    printf("Enter the no of elements in an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the values of the array : ");
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
}
printf("The original array is : ");
for(int i= 0 ; i<n; i++){
    printf("%d \t ", arr[i]);
}
printf("\n");
reversearray(arr,n);
printf("The reverse array is : ");
for(int i = 0 ; i < n ; i++){
    printf("%d \t", arr[i]);

}

return 0;



}
void reversearray(int *ptr,int n){
    int temp;
    int *start =ptr;
    int *end=(ptr+n-1);
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;


        start++;
        end--;
        

        
    }
}