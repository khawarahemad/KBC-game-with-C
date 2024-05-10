#include <stdio.h>

int main() {
    int k[5] = {0}; // Initialize an array to store points for each question
    char *questions[] = {
        "What is Python? \n 1--- Programming language : 2--- Snake : \n 3--- Bird : 4--- Animal :",
        "What is Java? \n 1--- Programming language : 2--- A name : \n 3--- List : 4--- Frog :",
        "What is C++? \n 1--- Programming language : 2--- A type of coffee : \n 3--- Fruit : 4--- Fish :",
        "What is JavaScript? \n 1--- Programming language : 2--- A type of drink : \n 3--- Insect : 4--- Reptile :",
        "What is HTML? \n 1--- Programming language : 2--- A type of metal : \n 3--- Vegetable : 4--- Markup language :"
    };
    int answers[] = {1, 1, 1, 1, 4}; // Store correct answers
    int i, answer;

    printf("------------USER GUIDE--------------\n");
    printf("\nThe game has 5 rounds, each with a question about a programming language and four choices. If you answer the question correctly, you get 7 points, and if you answer incorrectly, you get 0 points, and give invalid input, Deduct ---3--- points for invalid answer . The game ends when you have answered all 5 questions.\n");
    printf("____________________________________________________________\nAre you ready? Let's go!\n----------------\n");

    // Loop through each question
    for (i = 0; i < 5; i++) {
        printf("%s\n", questions[i]);
        scanf("%d", &answer);

        if (answer == answers[i]) {
            printf("Correct!\n");
            k[i] = 7;
        } 
        else if(answer >= 1 && answer <= 4) {
            printf("Sorry, you lose this round.\n");
            k[i] = 0;
        }
        else{
            printf("Deduct ---(-3)--- points for invalid input\n");
            k[i] = -3;
        }
        printf("------------------------------------------\n");
    }

    int total_points = 0;
    // Calculate total points
    for (i = 0; i < 5; i++) {
        total_points += k[i];
    }

    printf("Congratulations! You Win!\n--------------\nYour total amount is %d Cr\n", total_points);
    return 0;
}
