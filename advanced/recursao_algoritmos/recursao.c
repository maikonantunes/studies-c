#include <stdio.h>

void print(int x){
    if(x==0){
        printf("zero");

    }else{
        // printf(" valor x %d\n",x);
        // x-=1;
        print(x-1);
        printf(" valor x %d\n",x);
    }
}

int main(){

    int value;
    scanf("%d",&value);
    print(value);

}