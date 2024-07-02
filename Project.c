#include <stdio.h>

int main()
{
    int A = 0, B = 0, no_result = 0, total_vote, i, choice;
    printf("Physics Project - Voting System\n");
    printf("How many vote want to count?\n");
    scanf("%d", &total_vote);

    for (i = 1; i <= total_vote; i++)
    {
        printf("\t\tWelcome to the voting system\n");
        printf("Enter 1 to vote for A\n");
        printf("Enter 2 to vote for B\n");
        printf("Enter 3 to press NOTA\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            A++;
        }
        else if (choice == 2)
        {
            B++;
        }
        else if (choice == 3)
        {
            no_result++;
        }
        else
        {
            printf("Invalid vote\n");
        }
    }

    printf("\t\tResult of the vote\n");
    printf("A got %d vote\n", A);
    printf("B got %d vote\n", B);
    printf("NOTA got %d vote\n", no_result);

    if (A > B && A > no_result)
    {
        printf("**A wins the election**\n");
    }
    else if (B > A && B > no_result)
    {
        printf("**B wins the election**\n");
    }
    else if (no_result > A && no_result > B)
    {
        if (A > B)
        {
            printf("**A wins the election**\n");
        }
        else if (B > A)
        {
            printf("**B wins the election**\n");
        }
    }
    else
    {
        printf("The vote result is tied\n");
    }
    printf("The program has ended");

    return 0;
}