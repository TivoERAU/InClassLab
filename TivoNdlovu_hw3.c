/*
*   File:Homework 3
*   Author:Tivo Ndlovu
*   Course:CS 125
*   Assignment:Homework 3
*   references: None
*   Date:26/01/25
*/

#include <stdio.h>

int main()
{
    float hoursWorked;
    int employID;
    float hourRate;
    int employType;
    int managerFlag=0;
    int menuChoice;
    float currentPay;
    int choice1;
    int choice2;
    printf("Enter Employee ID:\t");
    scanf("%d",&employID);
    while(employID<1000||employID>1000000){
        printf("Invalid employee ID. Please select value between 1000 and 1000000\n");
        printf("Enter Employee ID:\t");
        scanf("%d",&employID);
    }
    printf("Enter hourly rate:\t");
    scanf("%f",&hourRate);
    while(hourRate>100){
        printf("Invalid hourly rate. Maximum pay is $100/hr\n");
        printf("Enter hourly rate:\t");
        scanf("%f",&hourRate);
    }
    printf("Please Enter employee type(1 for Hourly and 2 for Salary):\t");
    scanf("%d",&employType);
    while(employType<1||employType>2){
        printf("Invalid Employee type selection. Please enter 1 or 2\n");
        printf("Please Enter employee type(1 for Hourly and 2 for Salary):\t");
        scanf("%d",&employType);
    }
    printf("Enter the hours worked:\t");
    scanf("%f",&hoursWorked);
    if(hoursWorked>60&&employType==1){
        printf("Talk to manager");
        hoursWorked=60;
        managerFlag=1;
    }
    if(employType==2&& hoursWorked>40){
        hoursWorked=40;
    }
    printf("\nSUMMARY:\n");
    printf("Hello employee %d, here is your summary:\n",employID);
    printf("Hourly Rate: %.2f\n",hourRate);
    if (employType==1){
        printf("Type of Employee: Hourly\n");
        
    }else{
        printf("Type of Employee: Salary\n");
    }
    
    printf("Hours Worked: %.2f\n",hoursWorked);
    printf("Would you like to (1) Request current pay (2) Change values (3) Show summary (4) See manager status or (5) Quit program?:\t");
    scanf("%d",&menuChoice);
    while(menuChoice<1||menuChoice>5){
        printf("Invalid selection, please select 1,2,3,4 or 5.\n");
        printf("Would you like to (1) Request current pay (2) Change values (3) Show summary (4) See manager status or (5) Quit program?:\t");
        scanf("%d",&menuChoice);
    }
    while(menuChoice!=5){
        switch (menuChoice) {
        case 1:
            printf("Would you like pay in whole dollars(1) or exact(2)?:\t");
            scanf("%d", &choice1);
            while (choice1 < 1 || choice1 > 2) {
                printf("Invalid Input, please select 1 or 2.\n");
                printf("Would you like pay in whole dollars(1) or exact(2)?:\t");
                scanf("%d", &choice1);
            }
            if (choice1 == 1) {
                currentPay = (int)(hourRate * hoursWorked);
                printf("Current Pay: $%.0f\n", currentPay);
            } else {
                currentPay = (hourRate * hoursWorked);
                printf("Current Pay: $%.2f\n", currentPay);
            }
            break;

        case 2:
            printf("Would you like to change (1)Hourly rate,(2)Hours worked, or (3)Employee Type?:\t");
            scanf("%d", &choice2);
            while (choice2 < 1 || choice2 > 3) {
                printf("Invalid input, please select 1, 2, or 3\n");
                printf("Would you like to change (1)Hourly rate,(2)Hours worked, or (3)Employee Type?:\t");
                scanf("%d", &choice2);
            }
            if (choice2 == 1) {
                printf("Enter hourly rate:\t");
                scanf("%f", &hourRate);
                while (hourRate > 100) {
                    printf("Invalid hourly rate. Maximum pay is $100/hr\n");
                    printf("Enter hourly rate:\t");
                    scanf("%f", &hourRate);
                }
                printf("Hourly rate updated!\n");
            } else if (choice2 == 2) {
                printf("Enter the hours worked:\t");
                scanf("%f", &hoursWorked);
                if (hoursWorked > 60 && employType == 1) {
                    printf("Talk to manager");
                    hoursWorked = 60;
                    managerFlag = 1;
                } else {
                    managerFlag = 0;
                }
                if(employType==2&& hoursWorked>40){
                    hoursWorked=40;
                }
                printf("Hours worked updated! \n");
            } else if (choice2 == 3) {
                printf("Please Enter employee type(1 for Hourly and 2 for Salary):\t");
                scanf("%d", &employType);
                while (employType < 1 || employType > 2) {
                    printf("Invalid Employee type selection. Please enter 1 or 2\n");
                    printf("Please Enter employee type(1 for Hourly and 2 for Salary):\t");
                    scanf("%d", &employType);
                }
                printf("Employee Type Updated!\n");
            }
            break;

        case 3:
            printf("\nSUMMARY:\n");
            printf("Hello employee %d, here is your summary:\n", employID);
            printf("Hourly Rate: %.2f\n", hourRate);
            if (employType == 1) {
                printf("Type of Employee: Hourly\n");
            } else {
                printf("Type of Employee: Salary\n");
            }
            printf("Hours Worked: %.2f\n", hoursWorked);
            break;

        case 4:
            if (managerFlag == 1) {
                printf("Talk to manager.\n");
            } else {
                printf("You do not need to see manager.\n");
            }
            break;

        case 5:
            break;
    }

    
        printf("Would you like to (1) Request current pay (2) Change values (3) Show summary (4) See manager status or (5) Quit program?:\t");
        scanf("%d", &menuChoice);
                
        }
    }
  
   