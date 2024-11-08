
#include <stdio.h>
int main(){
    //takes input of experience and age of a person. 
    int age, experience; 
    printf("What's your age?: ");
    scanf("%d", &age);
    printf("What's your experience? (1 for Yes, 2 for No): "); // yes or no options 
    scanf("%d", &experience);  

    /*If the person is experienced and his age is equal to 
    or more than 40, then the salary of the person is N560,000.*/
    if(experience == 1 && age >= 40){
        printf("\nYour Salary is N560,000\n");
    }

    /*If the person is experienced and his age is equal to or 
    more than 30 but less than 40, then the salary should be 
    N480,000.*/
    if(experience == 1 && 40 > age && age >= 30){
        printf("\nYour Salary is N480,000\n");
    }

    /*For experienced person below 28 years of age the salary 
    should be N300,000*/
    if(experience == 1 && age < 28){
        printf("\nYour Salary is N300,000\n");
    }

    /*for inexperienced person the salary should be N100,000. */
    if(experience == 2){
        printf("\nYour Salary is N100,000\n");
    }

    else{
        printf("\nIncorrect Input\n");
    }

    

    return 0;
}
