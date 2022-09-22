#include <stdio.h>
// Program : LargestSmallestFinder
// Purpose : A program that finds the largest and the smallest number among the 3 numbers entered.
// Author : Duran Duman
// Date : 11.03.2022

void maxMinFinder(int num1, int num2 ,int num3);

int main()
{
  
    int num1;
    int num2;
    int num3;
    
    printf("Please enter the numbers below : \n");
    scanf("%d %d %d", &num1,&num2,&num3);
    
    maxMinFinder(num1,num2,num3);
} 

void maxMinFinder(int num1, int num2 ,int num3){
    // finds the largest and smallest numbers
    // Parameters : 3 numbers that user entered.
    
    if(num1==num2 && num2==num3 && num1==num3){
        printf("All the numbers are same so the largest and smallest value is %d", num1);
    }
    else if(num1 > num2 && num1 > num3 && num2>num3){    
        printf("The largest number is %d and the smallest number is %d", num1,num3);
    }
    else if(num1 > num2 && num1 > num3 && num3>num2){
        printf("The largest number is %d and the smallest number is %d", num1,num2);
    }
    else if(num2 > num1 && num2 > num3 && num1>num3){
        printf("The largest number is %d and the smallest number is %d", num2,num3);
    }
     else if(num2 > num1 && num2 > num3 && num3>num1){
        printf("The largest number is %d and the smallest number is %d", num2,num1);
    }
    else if(num3 > num1 && num3 > num2 && num1>num2){
        printf("The largest number is %d and the smallest number is %d", num3,num2);
    }
    else if(num3 > num1 && num3 > num2 && num2>num1){
        printf("The largest number is %d and the smallest number is %d", num3,num1);
    }
    else if(num1==num2 && num1>num3){
        printf("The largest number is %d and the smallest number is %d", num1,num3);
    } 
    else if(num1==num2 && num3>num1){
        printf("The largest number is %d and the smallest number is %d", num3,num1);
    } 
    else if(num1==num3 && num1>num2){
        printf("The largest number is %d and the smallest number is %d", num1,num2);
    }
    else if(num1==num3 && num2>num1){
        printf("The largest number is %d and the smallest number is %d", num2,num1);
    }
    else if(num2==num3 && num2>num1){
        printf("The largest number is %d and the smallest number is %d", num2,num1);
    }
    else if(num2==num3 && num1>num2){
        printf("The largest number is %d and the smallest number is %d", num1,num2);
    }
}

