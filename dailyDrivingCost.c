#include <stdio.h>
// Program : DailyDrivingCost
// Purpose : A program that calculates the daily driving cost by looking at total miles, cost of gas ,average miles per gallon, parking fees and tolls.
// Author : Duran Duman
// Date : 11.03.2022

int main()
{
    double totalMiles;
    double costOfGas;
    double aMilesPGallon;
    double parkingFee;
    double tolls;
    double dailyTotalCost;
    
    printf("Enter the total miles driven per day : ");
    scanf("%lf",&totalMiles);
    printf("Enter the cost per gallon of gasoline : ");
    scanf("%lf",&costOfGas);
    printf("Enter the average miles per gallon : ");
    scanf("%lf",&aMilesPGallon);
    printf("Enter the parking fees per day : ");
    scanf("%lf",&parkingFee);
    printf("Enter the tolls per day : ");
    scanf("%lf",&tolls);
    
    
    dailyTotalCost= ((totalMiles / aMilesPGallon) * costOfGas) + parkingFee + tolls;
    
    printf("Your daily driving cost is %lf",dailyTotalCost);
     
}
