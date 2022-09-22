#include <stdio.h>
// Program : factorial_ConstE
// Purpose : A program that calculates entered number's factorial , mathematical constant e and e power x.
// Author : Duran Duman
// Date : 11.03.2022

int fact(int);
double computeE(double);
double computeEpowerX(double,double);

int main(){
    
    int number;
    printf("Please enter a number to find it's factorial : ");
    scanf("%d",&number);
    printf("the factorial of the %d is %d\n",number,fact(number));
    
    
    
    int LimitOfValE;
    printf("Please enter a number to find mathematical constant e : ");
    scanf("%d",&LimitOfValE);
    printf("the mathematical constant e value of the %d is %f\n",LimitOfValE,computeE(number));
    
    
    int x;
    printf("Please enter a \"x\" value : ");
    scanf("%d",&x);
    printf("the value of e power %d is %f\n",x,computeEpowerX(number,x));
}


int fact(int num){
    if (num == 0){
        return 1;
    }
    
    return num * fact(num-1);
}



double computeE(double LimitOfValE){
    
    double valueOfE=1;
    int counter=1;
    
    while(counter <= LimitOfValE){
        
        valueOfE += 1.0 / fact(counter);
		counter ++;
		}
	return valueOfE;
}



double computeEpowerX(double LimitOfValE, double x){
    
    double valueOfEpowerX=1;
    int counter=1;
    double powerOfX=x;
   
    while(counter <= LimitOfValE){
        
        valueOfEpowerX += powerOfX / fact(counter);
        powerOfX*=x;
		counter ++;
		}
	return valueOfEpowerX;
}

    
    