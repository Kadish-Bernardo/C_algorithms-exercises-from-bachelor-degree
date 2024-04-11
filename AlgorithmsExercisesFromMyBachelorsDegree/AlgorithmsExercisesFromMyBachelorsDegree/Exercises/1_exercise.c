//
//  1_exercise.c
//  AlgorithmsExercisesFromMyBachelorsDegree
//
//  Created by Kadish Bernardo Ribeiro da Silva on 11/04/24.
//
//  1 - Make a program that receives the age of a person and show on the screen "can get a license" if the person is fit or "cannot get a license" otherwise.
//
//  Header Declaration
#include "/Users/kadishsilva/Library/Mobile Documents/com~apple~CloudDocs/MyProfessionalCarrier/MyProjects/GitHub/C_algorithms-exercises-from-bachelor-degree/AlgorithmsExercisesFromMyBachelorsDegree/AlgorithmsExercisesFromMyBachelorsDegree/Header/exercisesHeader.h" // Path of my Header file in my computer


//  1° Exercise
char* CanGetDriversLicense(void) { //char* = a pointer to a character char*, that is, a string.
    // Variable Declaration
    int yearsOld = 0;
    char* driversLicenseAnswer = (char *)malloc(51 * sizeof(char)); // Here, we are dynamically allocating memory to store the sentence, malloc() is used to allocate a specific amount of memory in bytes, we are allocating space for 50 characters + 1 null character ('\0') at the end of the string to indicate its ending
    
    // Decision Command Structure
    if (driversLicenseAnswer == NULL) { // To check if the memory allocation was successful, If not, we display an error message and close the program
        printf("Error allocating memory! \n"); // printf() is used to display formatted data on the screen
        exit(1); // exit() is used to finish the execution of the program, 0 = sucess, 1 = failed
    }
    
    //Input
    printf("Enter your age to find out if you can get a Driver's License or not: ");
    scanf("%i", &yearsOld); // scanf() is used to read formatted user entries
    
    // Decision Command Structure
    if (yearsOld >= 18) { // To check if you can get the Driver's License or not
        strcpy(driversLicenseAnswer, "You can get a Driver's License! \n"); // strcpy() is used to copy the entire string
    } else {
        strcpy(driversLicenseAnswer, "You can't get a Driver's License! \n");
    }
    
    return driversLicenseAnswer; // Fuction return
}
