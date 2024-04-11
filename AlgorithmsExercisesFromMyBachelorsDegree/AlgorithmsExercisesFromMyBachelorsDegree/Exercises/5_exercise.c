//
//  5_exercise.c
//  AlgorithmsExercisesFromMyBachelorsDegree
//
//  Created by Kadish Bernardo Ribeiro da Silva on 11/04/24.
//
//  Header Declaration
#include "/Users/kadishsilva/Library/Mobile Documents/com~apple~CloudDocs/MyProfessionalCarrier/MyProjects/GitHub/C_algorithms-exercises-from-bachelor-degree/AlgorithmsExercisesFromMyBachelorsDegree/AlgorithmsExercisesFromMyBachelorsDegree/Header/exercisesHeader.h" // Path of my Header file in my computer

// 5° Exercise
float IsItNegativeOrPositive(void) {
    // Variable Declaration
    float number = 0;
    
    // Input
    printf("Enter a number to find out if it's a negative or positive number: "); // printf() is used to display formatted data on the screen
    scanf("%f", &number); // scanf() is used to read formatted user entries
    
    //Decision Command Structure
    if (number < 0) { // To find out it is positive or negative
        number = number * -1;
    } else if (number > 0) {
        number = number * 100;
    } else {
        number = 0;
    }
    
    return number; // Function Return
}
