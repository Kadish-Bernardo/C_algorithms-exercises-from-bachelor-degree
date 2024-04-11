//
//  6_exercise.c
//  AlgorithmsExercisesFromMyBachelorsDegree
//
//  Created by Kadish Bernardo Ribeiro da Silva on 11/04/24.
//
//  Header Declaration
#include "/Users/kadishsilva/Library/Mobile Documents/com~apple~CloudDocs/MyProfessionalCarrier/MyProjects/GitHub/C_algorithms-exercises-from-bachelor-degree/AlgorithmsExercisesFromMyBachelorsDegree/AlgorithmsExercisesFromMyBachelorsDegree/Header/exercisesHeader.h" // Path of my Header file in my computer

// 6° Exercise
char* WhichDayIsit(void) {
    // Variable Declaration
    int dayNumber = 0;
    char* dayNameAnswer = (char *)malloc(15 * sizeof(char)); // Here, we are dynamically allocating memory to store the sentence, malloc() is used to allocate a specific amount of memory in bytes, we are allocating space for 14 characters + 1 null character ('\0') at the end of the string to indicate its ending
    
    // Decision Command Structure
    if (dayNameAnswer == NULL) { // To check if the memory allocation was successful, If not, we display an error message and close the program
        printf("Error allocating memory! \n"); // printf() is used to display formatted data on the screen
        exit(1); // exit() is used to finish the execution of the program, 0 = sucess, 1 = failed
    }
    
    // Input
    printf("Enter a day number between 1 and 7 to find out the corresponding day: "); // printf() is used to display formatted data on the screen
    scanf("%i", &dayNumber); // scanf() is used to read formatted user entries
    
    // Decision Comand Structure
    if (dayNumber == 1) { // To find out the corresponding day
        strcpy(dayNameAnswer, "Sunday!\n"); // strcpy() is used to copy the entire string
    } else if (dayNumber == 2) {
        strcpy(dayNameAnswer, "Monday!\n");
    } else if (dayNumber == 3) {
        strcpy(dayNameAnswer, "Tuesday!\n");
    } else if (dayNumber == 4) {
        strcpy(dayNameAnswer, "Wednesday!\n");
    } else if (dayNumber == 5) {
        strcpy(dayNameAnswer, "Thursday!\n");
    } else if (dayNumber == 6) {
        strcpy(dayNameAnswer, "Friday!\n");
    } else if (dayNumber == 7) {
        strcpy(dayNameAnswer, "Saturday!\n");
    } else {
        strcpy(dayNameAnswer, "Wrong Number!\n");
    }
    
    return dayNameAnswer; // Function Return
}
