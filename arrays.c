#include<stdio.h>

int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    int k,m;
    scanf("%d%d",&k,&m);
    int arr1[a];
    int arr2[b];
    for(int i=0 ; i<a ; i++){
        scanf("%d", &arr1[i]);
    }
    for(int i=0 ; i<b ; i++){
        scanf("%d", &arr2[i]);
    }
    //pick the starring k numbers from arr1 and pick last m number from arr2
    if(arr1[k-1] < arr2[b-m]){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
return 0;
}