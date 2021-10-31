#include <stdio.h>
#include <string.h>

int main(){
    char a[500][22],m;
    int i=0,h;
    while (1)
    {
        if(scanf("%[a-z||A-Z]",a[i])!=EOF)
            i++;
        m=getchar();
        h=m==EOF;
        if(m=='\n'||m==EOF)
        break;

        
    }
    for(int j=i-1;j>=0;j--){
        printf("%s ",a[j]);
    }
}