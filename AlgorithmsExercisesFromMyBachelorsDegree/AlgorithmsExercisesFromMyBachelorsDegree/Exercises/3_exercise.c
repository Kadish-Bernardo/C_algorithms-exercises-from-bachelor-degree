//
//  3_exercise.c
//  AlgorithmsExercisesFromMyBachelorsDegree
//
//  Created by Kadish Bernardo Ribeiro da Silva on 11/04/24.
//
//  3 - Write a program that receives three numbers and displays the greatest of them on the screen.
//
//  Header Declaration
#include "/Users/kadishsilva/Library/Mobile Documents/com~apple~CloudDocs/MyProfessionalCarrier/MyProjects/GitHub/C_algorithms-exercises-from-bachelor-degree/AlgorithmsExercisesFromMyBachelorsDegree/AlgorithmsExercisesFromMyBachelorsDegree/Header/exercisesHeader.h" // Path of my Header file in my computer

//  3° Exercise
float TheGreatest(void) {
    // Variable Declaration
    float x = 0, y = 0, z = 0;
    float theGreatestAnswer = 0;
    
    // Input
    printf("Enter 3 numbers to find the greatest value among the them \n"); // printf() is used to display formatted data on the screen
    printf("X: ");
    scanf("%f", &x); // scanf() is used to read formatted user entries
    
    printf("Y: ");
    scanf("%f", &y);
    
    printf("Z: ");
    scanf("%f", &z);
    
    // Decision Command Structure
    if (x >= y && x >= z) { // To find out the greatest number
        theGreatestAnswer = x;
    } else if (y >= x && y >= z) {
        theGreatestAnswer = y;
    } else {
        theGreatestAnswer = z;
    }
    
    return theGreatestAnswer; // Fuction return
}
