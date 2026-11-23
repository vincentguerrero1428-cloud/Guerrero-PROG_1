#include<stdio.h>

void tryToDouble(int num);


    int main(){

        int num;
        
        printf("\t======DOUBLE THE NUMBER======\n");
        printf("\n\tEnter number: ");
        scanf("%d", &num);

        printf("\n\t•Before calling tryToDouble: num = %d\n", num);
        
        tryToDouble(num);
        
        printf("\n\t•After calling tryToDouble: num = %d\n", num);
        return 0;
    }


void tryToDouble(int num){ 
    
     int timesTwo= num * 2;
         printf("\n\t•Inside tryToDouble, doubled value = %d\n", timesTwo);
}
        
