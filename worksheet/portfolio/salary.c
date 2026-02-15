
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Junjie Zheng
 * ID: 201944062
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float salary=36250.0;
    float NI=0.08;
    float tax=0.15;
   
    // calculate the deductions and final take-home salary
    float NI_contribution =salary*(NI);
    float after_NI        =salary-NI_contribution;
    float Tax_contribution=(after_NI-12500.0)*tax;
    if (0>Tax_contribution){
      Tax_contribution=0;
    }
    float Take_home_salary=after_NI-Tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f \n",salary);
    printf("NI contribution £%.2f \n",NI_contribution);
    printf("Tax contribution £%.2f \n",Tax_contribution);
    printf("Take home salary £%.2f \n",Take_home_salary);

    return 0;
 }
