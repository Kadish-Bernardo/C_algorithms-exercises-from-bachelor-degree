//
//  7_exercise.c
//  AlgorithmsExercisesFromMyBachelorsDegree
//
//  Created by Kadish Bernardo Ribeiro da Silva on 11/04/24.
//
//  Header Declaration
#include "/Users/kadishsilva/Library/Mobile Documents/com~apple~CloudDocs/MyProfessionalCarrier/MyProjects/GitHub/C_algorithms-exercises-from-bachelor-degree/AlgorithmsExercisesFromMyBachelorsDegree/AlgorithmsExercisesFromMyBachelorsDegree/Header/exercisesHeader.h" // Path of my Header file in my computer

// 7° Exercise
char* WhichMonthisIt(void) {
    // Variable Declaration
    int monthNumber = 0;
    char* monthNameAnswer = (char *)malloc(15 * sizeof(char)); // Here, we are dynamically allocating memory to store the sentence, malloc() is used to allocate a specific amount of memory in bytes, we are allocating space for 14 characters + 1 null character ('\0') at the end of the string to indicate its ending
    
    // Decision Command Structure
    if (monthNameAnswer == NULL) { // To check if the memory allocation was successful, If not, we display an error message and close the program
        printf("Error allocating memory! \n"); // printf() is used to display formatted data on the screen
        exit(1); // exit() is used to finish the execution of the program, 0 = sucess, 1 = failed
    }
    
    // Input
    printf("Enter a month number between 1 and 12 to find out the corresponding month: "); // printf() is used to display formatted data on the screen
    scanf("%i", &monthNumber); // scanf() is used to read formatted user entries
    
    // Decision Command Structure
    if (monthNumber == 1) { // To find out the corresponding month name
        strcpy(monthNameAnswer, "January!\n"); // strcpy() is used to copy the entire string
    } else if (monthNumber == 3) {
        strcpy(monthNameAnswer, "February!\n");
    } else if (monthNumber == 3) {
        strcpy(monthNameAnswer, "March!\n");
    } else if (monthNumber == 4) {
        strcpy(monthNameAnswer, "April!\n");
    } else if (monthNumber == 5) {
        strcpy(monthNameAnswer, "May!\n");
    } else if (monthNumber == 6) {
        strcpy(monthNameAnswer, "June!\n");
    } else if (monthNumber == 7) {
        strcpy(monthNameAnswer, "July!\n");
    } else if (monthNumber == 8) {
        strcpy(monthNameAnswer, "August!\n");
    } else if (monthNumber == 9) {
        strcpy(monthNameAnswer, "September!\n");
    } else if (monthNumber == 10) {
        strcpy(monthNameAnswer, "October!\n");
    } else if (monthNumber == 11) {
        strcpy(monthNameAnswer, "November!\n");
    } else if (monthNumber == 12) {
        strcpy(monthNameAnswer, "December!\n");
    } else {
        strcpy(monthNameAnswer, "Wrong Answer!\n");
    }
    
    return monthNameAnswer; // Function Return
}
