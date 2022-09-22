#include <stdio.h>
// Program : EvenOrOddFinder
// Purpose : A program that determines if the entered number is odd or even number.
// Author : Duran Duman
// Date : 11.03.2022

void oddOrEven(int);

int main(){
    
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num);
    
    oddOrEven(num);
} 

void oddOrEven(int num){
    // finds the entered number if it is odd or even number.
    // Parameters : a integer that user enters.
    
    if(num % 2 ==0){
        printf("The entered number %d is even ", num);
    }
    else{
        printf("The entered number %d is odd ", num);
    }
}