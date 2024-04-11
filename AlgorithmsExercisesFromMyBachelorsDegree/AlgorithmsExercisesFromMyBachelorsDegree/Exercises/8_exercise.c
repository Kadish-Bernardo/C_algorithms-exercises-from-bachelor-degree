//
//  8_exercise.c
//  AlgorithmsExercisesFromMyBachelorsDegree
//
//  Created by Kadish Bernardo Ribeiro da Silva on 11/04/24.
//
//  8 - Each egg costs R$3.50. However, if you buy a carton with 10 eggs, the unit costs R$2.50. Write a program that reads the number of eggs purchased, calculates and writes the total purchase value.
//
//  Header Declaration
#include "/Users/kadishsilva/Library/Mobile Documents/com~apple~CloudDocs/MyProfessionalCarrier/MyProjects/GitHub/C_algorithms-exercises-from-bachelor-degree/AlgorithmsExercisesFromMyBachelorsDegree/AlgorithmsExercisesFromMyBachelorsDegree/Header/exercisesHeader.h" // Path of my Header file in my computer

// 8° Exercise
float HowMuchIsTheEggs(void) {
    // Variable Declaration
    int eggs = 0;
    float eggsPrice = 0.0;
    float unitPrice = 3.5;
    float cartonPrice = 2.5;
    
    // Input
    printf("How many eggs do you want? "); // printf() is used to display formatted data on the screen
    scanf("%i", &eggs); // scanf() is used to read formatted user entries
    
    // Decision Command Structure
    if (eggs >= 0) { // To find out what's the price of the eggs
        if (eggs >=  10) {
            eggsPrice = eggs;
            eggs = eggs % 10;
            eggsPrice = (eggsPrice - eggs) * cartonPrice + eggs * unitPrice;
        } else {
            eggsPrice = eggs * unitPrice;
        }
    } else {
        printf("Error: Please enter a non-negative integer value for the number of eggs.\n");
        exit(1); // exit() is used to finish the execution of the program, 0 = sucess, 1 = failed
    }
    
    return eggsPrice; // Function Return
}
