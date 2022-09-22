#include <stdio.h>
// Program : IsRightTriangle
// Purpose : A program that finds whether the entered 3 lengths of a triangle is a Right triangle or not.
// Author : Duran Duman
// Date : 11.03.2022

void IsRightTriangle(int,int,int);

int main(){
    
    int ln1;
    int ln2;
    int ln3;
    
    printf("Please enter the lengths of a triangle : \n");
    scanf("%d %d %d", &ln1,&ln2,&ln3);
    IsRightTriangle(ln1,ln2,ln3);
}


void IsRightTriangle(int ln1,int ln2,int ln3){
    // Decides if the triangle is a Right triangle or not.
    // Parameters : ln1,ln2,ln3 - the lengths of user's triangle.
    
    if(ln1==0 || ln2==0 || ln3==0){
        printf("The lengths of a triangle can not be zero.");
    }    
    else if( (ln1*ln1)+(ln2*ln2)==(ln3*ln3)||(ln1*ln1)+(ln3*ln3)==(ln2*ln2)||(ln2*ln2)+(ln3*ln3)==(ln1*ln1)){
        printf("%d %d %d creates a Right Triangle.", ln1,ln2,ln3);
    }
    else{
        printf("%d %d %d DO NOT create a Right Triangle.",ln1,ln2,ln3);
    }
     
}
