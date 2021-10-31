#include<stdio.h>
#include<stdlib.h>

int t;

int compare(const void *a,const void *b){
    if(t==0){
        return(*(int*)a-*(int*)b);
    }
    if(t==1){
        return(*(int*)b-*(int*)a);
    }
    return 0;
}

int main(){

    int n;
    scanf("%d",&n);
    int data[n];
    for(int i=0;i<n;i++){
        scanf("%d",data+i);
    }
    scanf("%d",&t);

    qsort(data,n,sizeof(int),compare);

    for(int i=0;i<n;i++){
        printf("%d ",data[i]);
    }

}