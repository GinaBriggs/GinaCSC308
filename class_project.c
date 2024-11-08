
#include <stdio.h>
int main(){
    //takes input of experience and age of a person. 
    int age, experience; //adjust this variable
    printf("What's your age?: ");
    scanf("%d", &age);
    printf("What's your experience?: "); // yes or no options maybe?
    scanf("%d", &experience);  //adjust

    /*If the person is experienced and his age is equal to 
    or more than 40, then the salary of the person is N560,000.*/
    if(experience == 1 && age >= 40){
        printf("Your Salary is N560,000");
    }

    /*If the person is experienced and his age is equal to or 
    more than 30 but less than 40, then the salary should be 
    N480,000.*/
    if(experience == 1 && 40 > age >= 30){
        printf("Your Salary is N480,000");
    }

    /*For experienced person below 28 years of age the salary 
    should be N300,000*/
    if(experience == 1 && age < 28){
        printf("Your Salary is N300,000");
    }

    /*for inexperienced person the salary should be N100,000. */
    if(experience == 2){
        printf("Your Salary is N100,000");
    }

    else{
        printf("Incorrect Input");
    }

    return 0;
}
