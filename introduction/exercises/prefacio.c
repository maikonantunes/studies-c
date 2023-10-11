#include <stdio.h>

int main(){
    int a,b;
    printf("");
    scanf("%d",&a);
    printf("");
    scanf("%d",&b);
    // if((a>=-1.000) && (b<1.000)){
        
    // }
    if(a){
        int q,r,x;
        q=a/b;
        r=a%b;
        x=q*(b+r);
        printf("%d %d %d\n", q,r,x);

    }
    return printf("valores invalidos");
}