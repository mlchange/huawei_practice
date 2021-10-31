#include <stdio.h>

int f(int n){
    if(n==1||n==2)
    return 1;
    else
    return f(n-1)+f(n-2);
}


int main() {
   int a[100],i=0;
   while (scanf("%d", a+i)!=EOF) { 
       i++;
   }
   for(int j=0;j<i;j++){
       printf("%d\n",f(a[j]));
   }
   return 0;
}