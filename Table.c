#include <stdio.h>
// Program : squareCubeTable
// Purpose : A program that prints the between zero to ten numbers, their squares and cubes in a table form.
// Author : Duran Duman
// Date : 11.03.2022

int main(){

    printf("number\tsquare\tcube\n");
    
    int num=0;
    int square;
    int cube;
    
    while(num !=11){
        square= num*num;
        cube= num*num*num;
        printf("%d\t%d\t%d\n",num,square,cube);
        num+=1;
    }
}