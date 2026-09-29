#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Variable declaration
    int clue1 = 0;
    int clue2 = 0;
    int clue3 = 0;
    int clue4 = 0;
    int clue5 = 0;

    int guess, mode;
    int answer;
    int score = 0;

    printf("\n");

    printf("              WELCOME TO THE DETECTIVE GAME\n");

    // Game start point
    printf("\nTo start the game:\n");
    printf("1. Start Game\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &guess);

    if (guess == 2)
    {
        printf("\n nikal !\n");
        return 0;
    }

    if (guess != 1)
    {
        printf("\nInvalid choice!\n");
        return 0;
    }

    // Game level
    printf("\n============================================================\n");
    printf("                    SELECT YOUR LEVEL\n");
    printf("============================================================\n");

    printf("1. EASY\n");
    printf("2. MEDIUM\n");
    printf("3. HARD\n");

    printf("\nEnter your level: ");
    scanf("%d", &mode);



    if (mode == 1)
    {
        printf("\n============================================================\n");
        printf("                    EASY MODE\n");
        printf("               THE MISSING NECKLACE\n");
        printf("============================================================\n");

        printf("\nCASE:\n");
        printf("A valuable necklace disappeared during a family party.\n");
        printf("There are three suspects: Rahul, Sameer and Priya.\n");

        printf("\n---------------------- CLUES -------------------------------\n");

        printf("\nClue 1:\n");
        printf("The necklace was last seen at 8:00 PM.\n");
        clue1 = 1;

        printf("\nClue 2:\n");
        printf("Rahul was in the garden from 7:45 PM to 8:30 PM.\n");
        clue2 = 1;

        printf("\nClue 3:\n");
        printf("Sameer says he was in the kitchen.\n");
        printf("But the cook says Sameer left the kitchen at 7:50 PM.\n");
        clue3 = 1;

        printf("\nClue 4:\n");
        printf("Priya says she was reading a book in the living room.\n");
        clue4 = 1;

        printf("\nClue 5:\n");
        printf("The necklace was kept in the living room.\n");
        clue5 = 1;

        printf("\n");
        printf("                    QUESTIONS\n");
        printf("\n");
        // Question 1
        printf("\nQ1. Who had access to the room where the necklace was kept?\n");
        printf("1. Rahul\n");
        printf("2. Sameer\n");
        printf("3. Priya\n");

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 3)
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! Correct answer is Priya.\n");
        }

        // Question 2
        printf("\nQ2. Who gave a false statement about their location?\n");
        printf("1. Rahul\n");
        printf("2. Sameer\n");
        printf("3. Priya\n");

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 2)
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! Correct answer is Sameer.\n");
        }

        // Question 3
        printf("\nQ3. Who is the main suspect?\n");
        printf("1. Rahul\n");
        printf("2. Sameer\n");
        printf("3. Priya\n");

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 2)
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! Correct answer is Sameer.\n");
        }

         printf("\n");
        printf("                     CASE RESULT\n");
         printf("\n");

        printf("Your Score: %d/3\n", score);

        if (score >= 2)
        {
            printf("\nCONGRATULATIONS DETECTIVE!\n");
            printf("You solved the case!\n");
            printf("The thief was SAMEER.\n");
        }
        else
        {
            printf("\nCASE NOT SOLVED!\n");
            printf("The thief was SAMEER.\n");
        }
    }


    // MEDIUM MODE


    else if (mode == 2)
    {
        score = 0;

        printf("\n");
        printf("                   MEDIUM MODE\n");
        printf("                    STOLEN LAPTOP\n");
         printf("\n");

        printf("\nCASE:\n");
        printf("A laptop disappeared from a college laboratory.\n");
        printf("The laptop disappeared between 2:00 PM and 3:00 PM.\n");
        printf("There are three suspects: Arjun, Rohan and Karan.\n");

        printf("\n---------------------- CLUES -------------------------------\n");

        printf("\nClue 1:\n");
        printf("The laboratory door was locked at 3:00 PM.\n");
        clue1 = 1;

        printf("\nClue 2:\n");
        printf("Arjun says he left the lab at 2:15 PM.\n");
        clue2 = 1;

        printf("\nClue 3:\n");
        printf("CCTV shows Arjun leaving at 2:20 PM.\n");
        clue3 = 1;

        printf("\nClue 4:\n");
        printf("Rohan says he was in the library from 2:00 PM to 3:00 PM.\n");
        clue4 = 1;

        printf("\nClue 5:\n");
        printf("The librarian confirms that Rohan was in the library.\n");
        clue5 = 1;

        printf("\nClue 6:\n");
        printf("Karan says he left the lab at 2:10 PM.\n");

        printf("\nClue 7:\n");
        printf("CCTV shows Karan entering the laboratory again at 2:45 PM.\n");

        printf("\n");
        printf("                    QUESTIONS\n");
         printf("\n");
        // Question 1
        printf("\nQ1. Who was confirmed to be in the library?\n");
        printf("1. Arjun\n");
        printf("2. Rohan\n");
        printf("3. Karan\n");

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 2)
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! Correct answer is Rohan.\n");
        }

        // Question 2
        printf("\nQ2. Who returned to the laboratory at 2:45 PM?\n");
        printf("1. Arjun\n");
        printf("2. Rohan\n");
        printf("3. Karan\n");

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 3)
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! Correct answer is Karan.\n");
        }

        // Question 3
        printf("\nQ3. Who had the opportunity to take the laptop?\n");
        printf("1. Arjun\n");
        printf("2. Rohan\n");
        printf("3. Karan\n");

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 3)
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! Correct answer is Karan.\n");
        }

        printf("\n");
        printf("                     CASE RESULT\n");
        printf("\n");

        printf("Your Score: %d/3\n", score);

        if (score >= 2)
        {
            printf("\nEXCELLENT DETECTIVE WORK!\n");
            printf("You solved the case!\n");
            printf("The thief was KARAN.\n");
        }
        else
        {
            printf("\nCASE NOT SOLVED!\n");
            printf("The thief was KARAN.\n");
        }
    }


    // HARD MODE


    else if (mode == 3)
    {
        score = 0;

         printf("\n");
        printf("                    HARD MODE\n");
        printf("                 MYSTERY OF ROOM 307\n");
         printf("\n");

        printf("\nCASE:\n");
        printf("A professor's confidential research file disappeared\n");
        printf("from Room 307.\n");

        printf("\nThere are four suspects:\n");
        printf("Aman, Vikram, Neha and Sameer.\n");

        printf("\n---------------------- CLUES -------------------------------\n");

        printf("\nClue 1:\n");
        printf("The file was present at 6:00 PM.\n");
        clue1 = 1;

        printf("\nClue 2:\n");
        printf("The security system recorded someone entering Room 307\n");
        printf("at 6:25 PM.\n");
        clue2 = 1;

        printf("\nClue 3:\n");
        printf("Aman says he left the building at 6:10 PM.\n");
        clue3 = 1;

        printf("\nClue 4:\n");
        printf("The security guard confirms Aman left at 6:10 PM.\n");
        clue4 = 1;

        printf("\nClue 5:\n");
        printf("Neha says she was in the cafeteria from 6:00 PM to 6:40 PM.\n");
        clue5 = 1;

        printf("\nClue 6:\n");
        printf("The cafeteria receipt shows Neha purchased coffee at 6:05 PM\n");
        printf("but nothing after that.\n");

        printf("\nClue 7:\n");
        printf("Vikram says he never entered Room 307.\n");

        printf("\nClue 8:\n");
        printf("A fingerprint found on the room's door belongs to Vikram.\n");

        printf("\nClue 9:\n");
        printf("Sameer says he entered Room 307 at 6:15 PM to return a book.\n");

        printf("\nClue 10:\n");
        printf("The security log shows Sameer entered at 6:15 PM\n");
        printf("and left at 6:20 PM.\n");

         printf("\n");
        printf("                    QUESTIONS\n");
         printf("\n");

        // Question 1
        printf("\nQ1. Who definitely left the building before the room was entered?\n");
        printf("1. Aman\n");
        printf("2. Vikram\n");
        printf("3. Neha\n");
        printf("4. Sameer\n");

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 1)
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! Correct answer is Aman.\n");
        }

        // Question 2
        printf("\nQ2. Who has evidence placing them near Room 307?\n");
        printf("1. Aman\n");
        printf("2. Vikram\n");
        printf("3. Neha\n");
        printf("4. Sameer\n");

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 4)
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! Correct answer is Sameer.\n");
        }

        // Question 3
        printf("\nQ3. Who denied entering Room 307 despite a fingerprint\n");
        printf("being found on the door?\n");
        printf("1. Aman\n");
        printf("2. Vikram\n");
        printf("3. Neha\n");
        printf("4. Sameer\n");

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 2)
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! Correct answer is Vikram.\n");
        }

        // Question 4
        printf("\nQ4. Who is the strongest suspect based on the clues?\n");
        printf("1. Aman\n");
        printf("2. Vikram\n");
        printf("3. Neha\n");
        printf("4. Sameer\n");

        printf("Your answer: ");
        scanf("%d", &answer);

        if (answer == 2)
        {
            printf("CORRECT!\n");
            score++;
        }
        else
        {
            printf("WRONG! Correct answer is Vikram.\n");
        }

        printf("\n");
        printf("                     CASE RESULT\n");
        printf("\n");

        printf("Your Score: %d/4\n", score);

        if (score >= 3)
        {
            printf("\nAMAZING DETECTIVE!\n");
            printf("You solved the difficult case!\n");
            printf("The culprit was VIKRAM.\n");
        }
        else
        {
            printf("\nCASE NOT SOLVED!\n");
            printf("The culprit was VIKRAM.\n");
        }
    }

    else
    {
        printf("\nInvalid level selected!\n");
        printf("Please restart the game and select 1, 2 or 3.\n");
    }

     printf("\n");
    printf("             THANK YOU FOR PLAYING!\n");
    printf("\n");

    return 0;
}

