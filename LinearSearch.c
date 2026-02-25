#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
        printf("Target position: %d\n",i);
        free(arr);
        return 0;
        }
    }
    printf("Not found");
    free(arr);
}