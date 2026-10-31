#include<stdio.h>
int main()
{
    int chocolates;
    printf("Enter the total chocolates: ");
    scanf("%d",&chocolates);
    printf("---------------------------\n");
    if(chocolates>0)
    {
        do
        {
            printf("Player 1 turn (O_O):\n");
            printf("\n");
            int pick1;
            printf("Pick chocolates (0 to 3): ");
            scanf("%d",&pick1);

            if(pick1>=0 && pick1<=3)
            {
                chocolates=chocolates-pick1;
                if(chocolates>0)
                {
                    printf("Chocolates remaining = %d\n",chocolates);
                    printf("---------------------------\n");
                }
                else
                {
                    printf("---------------------------\n");
                    printf("---------------------------\n");
                    printf("Only Chilly remains!\n");
                    printf("Player 1 gets CHILLY\n");
                    printf("Player 1 LOST(O_O)\n");
                    printf("Player 2 WON (-_-)\n");
                    printf("---------------------------\n");
                    printf("---------------------------\n");
                    break;
                }

            }
            else
            {
                printf("---------------------------\n");
                printf("pick chocolates between 0 and 3\n");
            }

            printf("Player 2 turn (-_-):\n");
    
            int pick2;
            printf("Pick chocolates (0 to 3): ");
            scanf("%d",&pick2);

            if(pick2>=0 && pick2<=3)
            {
                chocolates=chocolates-pick2;
                if(chocolates>0)
                {
                    printf("Chocolates remaining = %d\n",chocolates);
                    printf("---------------------------\n");
                }
                else
                {
                    printf("---------------------------\n");
                    printf("---------------------------\n");
                    printf("Only Chilly remains!\n");
                    printf("Player 1 gets CHILLY\n");
                    printf("Player 1 LOST(O_O)\n");
                    printf("Player 2 WON(-_-)\n");
                    printf("---------------------------\n");
                    printf("---------------------------\n");
                    break;
                }
            }
            else
            {
                printf("---------------------------\n");
                printf("pick chocolates between 0 and 3\n");
            }
        }while(chocolates>0);
    }
    else
    {
        printf("Invalid number\n");
    }
    
    return 0;
}