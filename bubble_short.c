#include<stdio.h>
int main()
{
    int arr[100];
    int i,j,k,n,temp;
   while(scanf("%d",&n) !=EOF){

        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
            for(k=0;k<n;k++){
                    printf("%d \n",arr[k]);
                }

    }

    return 0;
}
