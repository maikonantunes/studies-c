#include <stdio.h>


int fatorial(int numb){
    if(numb==1 || numb==0){
        return 1;
    }else{
       return numb* fatorial(numb-1);
    }
    

}
int main(){
    int value;
    scanf("%d",&value);
    printf("o fatorial de %d e %d ",value,fatorial(value)); 
}