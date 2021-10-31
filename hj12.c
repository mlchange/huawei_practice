#include <stdio.h>

int main() {
   char a[1000];
   int i;
   while (scanf("%s", a) != EOF) {
       for(i=0;i<1000;i++){
           if(a[i]=='\0'){
               i--;
           break;}
       }
        for(;i>=0;i--){
            printf("%c",a[i]);
        }
       printf("\n");
   }
   return 0;
}