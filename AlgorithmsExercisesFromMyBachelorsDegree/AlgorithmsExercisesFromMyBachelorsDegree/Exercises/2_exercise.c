//
//  2_exercise.c
//  AlgorithmsExercisesFromMyBachelorsDegree
//
//  Created by Kadish Bernardo Ribeiro da Silva on 11/04/24.
//
//  2 - Make a program that receives an integer number and say if it is even or odd.
//
//  Header Declaration
#include "/Users/kadishsilva/Library/Mobile Documents/com~apple~CloudDocs/MyProfessionalCarrier/MyProjects/GitHub/C_algorithms-exercises-from-bachelor-degree/AlgorithmsExercisesFromMyBachelorsDegree/AlgorithmsExercisesFromMyBachelorsDegree/Header/exercisesHeader.h" // Path of my Header file in my computer

//  2° Exercise
char* IsItAnEvenOrOddNumber(void) {
    //  Variable Declaration
    int number = 0;
    char* isItAnEvenOrOddNumberAnswer = (char *)malloc(51 * sizeof(char)); // Here, we are dynamically allocating memory to store the sentence, malloc() is used to allocate a specific amount of memory in bytes, we are allocating space for 50 characters + 1 null character ('\0') at the end of the string to indicate its ending
    
    // Decision Command Structure
    if (isItAnEvenOrOddNumberAnswer == NULL) { // To check if the memory allocation was successful, If not, we display an error message and close the program
        printf("Error allocating memory! \n"); // printf() is used to display formatted data on the screen
        exit(1); // exit() is used to finish the execution of the program, 0 = sucess, 1 = failed
    }
    
    //Input
    printf("Enter an integer number to find out if it is an even or odd number: "); // printf() is used to display formatted data on the screen
    scanf("%i", &number); // scanf() is used to read formatted user entries
    
    // Decision Command Structure
    if ((number % 2) == 0) { // To check if it is an even or odd number
        strcpy(isItAnEvenOrOddNumberAnswer, "It is an even number! \n"); // strcpy() is used to copy the entire string
    } else {
        strcpy(isItAnEvenOrOddNumberAnswer,"It is an odd number! \n");
    }
    
    return isItAnEvenOrOddNumberAnswer; // Fuction return
}
