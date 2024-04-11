//
//  4_exercise.c
//  AlgorithmsExercisesFromMyBachelorsDegree
//
//  Created by Kadish Bernardo Ribeiro da Silva on 11/04/24.
//
//  4 - Write a program that receives three numbers and displays the average number on the screen.
//
//  Header Declaration
#include "/Users/kadishsilva/Library/Mobile Documents/com~apple~CloudDocs/MyProfessionalCarrier/MyProjects/GitHub/C_algorithms-exercises-from-bachelor-degree/AlgorithmsExercisesFromMyBachelorsDegree/AlgorithmsExercisesFromMyBachelorsDegree/Header/exercisesHeader.h" // Path of my Header file in my computer

// 4° Exercise
float TheMeadianValue(void) {
    // Variable Declaration
    float x = 0, y = 0, z = 0;
    float TheMedianValueAnswer = 0;
    
    // Input
    printf("Enter 3 numbers to find the median value \n"); // printf() is used to display formatted data on the screen
    printf("X: ");
    scanf("%f", &x); // scanf() is used to read formatted user entries
    
    printf("Y: ");
    scanf("%f", &y);
    
    printf("Z: ");
    scanf("%f", &z);
    
    // Decision Command Structure
    if ((x >= y && x <= z) || (x <= y && x >= z)) { // To find out which number is the median value
        TheMedianValueAnswer = x;
    } else if ((y >= x && y <= z) || (y <= x && y >=z)) {
        TheMedianValueAnswer = y;
    } else {
        TheMedianValueAnswer = z;
    }
    
    return TheMedianValueAnswer; // Function Return
}
