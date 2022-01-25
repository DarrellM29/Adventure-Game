#include <stdio.h>
#include <string.h>

int main()
{
    char play[10];
    
    printf("Welcome to my first game!!!\n");
    
    printf("Would you like to play (Yes/No)? ");
    scanf("%s", play);
    
    if(!strcmp(play, "Yes")||!strcmp(play, "yes"))
    {
        printf("You are lost in a jungle.\n There are 3 paths ahead of you.\n One to the left, another to the right, and a final one down the middle.\n Which one do you choose (Left/Middle/Right)? \n");
        scanf("%s", play);
        
        if(!strcmp(play, "Left")||!strcmp(play, "left"))
        {
            printf("You walk down the path to the left.\n");
            printf("You see a river and in that river you see a boat.\n");
            printf("Do you get into the boat (Yes/No)? \n");
            scanf("%s", play);
            
            if(!strcmp(play, "Yes")||!strcmp(play, "yes"))
            {
                printf("You row up the river and see a mysterious ship\n");
                printf("Do you wave for help (Yes/No)? \n");
                scanf("%s", play);
                
                if(!strcmp(play, "Yes")||!strcmp(play, "yes"))
                {
                    printf("Congratulations!!! You have been rescued!!!");
                }
                
                else
                {
                    printf("You row farther up the river and see another mysterious ship\n");
                    printf("Do you wave for help (Yes/No)? \n");
                    scanf("%s", play);
                    
                    if(!strcmp(play, "Yes")||!strcmp(play, "yes"))
                    {
                        printf("You walk onto the boat and find out it is filled with pirates and theives\n");
                        printf("They murder you in cold blood\n");
                        printf("You have lost :( Better luck next time.");
                    }
                    
                    else if(!strcmp(play, "No")||!strcmp(play, "no"))
                    {
                        printf("You keep rowing and reach the country of Cuba.\n");
                        printf("You borrow the phone of a friendly stranger and call home.\n");
                        printf("You have been saved.\n Congratulations! You win!!!");

                    }
                }
                
            }
            
            else
            {
                printf("You keep walking for hours.\n");
                printf("Now both thristy and hungry, you come across a bush of berries\n");
                printf("Do you eat the berries (Yes/No)? \n");
                scanf("%s", play);
                
                if(!strcmp(play, "Yes")||!strcmp(play, "yes"))
                {
                    printf("The berries were poisonous.\n");
                    printf("You rapidly die hours later\n");
                    printf("You have lost :( Better luck next time.");
                }
                
                else
                {
                    printf("You walk farther and see another mysterious ship.\n");
                    printf("Do you wave for help (Yes/No)? \n");
                    scanf("%s", play);
                    
                    if(!strcmp(play, "Yes")||!strcmp(play, "yes"))
                    {
                        printf("You walk onto the boat and find out it is filled with pirates and theives.\n");
                        printf("They murder you in cold blood.\n");
                        printf("You have lost :( Better luck next time.");
                    }
                    
                    else
                    {
                        printf("The captain of the ship spots you and captures you.\n");
                        printf("You are never seen again.\n");
                        printf("You have lost :( Better luck next time.");
                    }
                
                }
            }
        }
        
        else if(!strcmp(play, "Middle")||!strcmp(play, "middle"))
        {
            printf("You walk down the middle path.\n");
            printf("You come upon a mountain and decide to climb it.\n");
            printf("While climbing you come across a small pond if water.\n");
            printf("Do you drink from the pond (Yes/No)? \n");
            scanf("%s", play);
            
            if(!strcmp(play, "Yes")||!strcmp(play, "yes"))
            {
                printf("Your thirst is now quenched.\n");
                printf("You continue to walk up the mountain and see a plane.\n");
                printf("Do you wave at the plane (Yes/No)? \n");
                scanf("%s", play);
                
                if(!strcmp(play, "Yes")||!strcmp(play, "yes"))
                {
                    printf("The plane's pilot spots you.\n");
                    printf("You have been saved.\n Congratulations! You win!!!");
                }
                
                else
                {
                    printf("You continue climbing up the mountain.\n");
                    printf("You begin getting tired.\n You unfortunately slip and fall to your death.\n");
                    printf("You have lost :( Better luck next time.");
                }
            }
            
            else
            {
                printf("You keep walking for hours.\n");
                printf("Now both thirsty and hungry, you come across a bush of berries\n");
                printf("Do you eat the berries (Yes/No)? \n");
                scanf("%s", play);
                
                if(!strcmp(play, "Yes")||!strcmp(play, "yes"))
                {
                    printf("The berries were poisonous.\n");
                    printf("You rapidly die hours later\n");
                    printf("You have lost :( Better luck next time.");
                }
                
                else
                {
                    printf("You keep on climbing and finally reach the top of the mountain.\n");
                    printf("You see a village near by and decide to walk there for help.\n");
                    printf("The villagers let you borrow a map to the nearest military base.\n");
                    printf("Where you are saved and helped by American soldiers.\n");
                    printf("Congratulations! You win!!!");
                }
            }
        }
        
        else if(!strcmp(play, "Right")||!strcmp(play, "right"))
        {
            printf("You walk down the path to the right.\n");
            printf("While walking you fall into a pit of snakes.\n");
            printf("You see three weapons on the ground.\n");
            printf("A hammer, a spear, and a sword.\n");
            printf("Which one do you choose (Hammer/Spear/Sword)? \n");
            scanf("%s", play);
            
            if(!strcmp(play, "Hammer")||!strcmp(play, "hammer"))
            {
                printf("You try you best fending off the snakes with the hammer.\n");
                printf("But the snakes eventually one by one bite into your flesh.\n");
                printf("Over whelmed you fall unconscious.\n");
                printf("You have lost :( Better luck next time.");
            }
            
            else if(!strcmp(play, "Spear")||!strcmp(play, "spear"))
            {
                printf("You successfully fend off the snakes using the long spear.\n");
                printf("One by one killing them from a safe distance due to the spear's length.\n");
                
                printf("You throw the spear down looking for gear to climb out of the pit with.\n");
                printf("You see an ice pick and shoe spikes.\n");
                printf("You hear faint hissing coming from a dark corner from the pit.\n");
                printf("Scared and exhausted, you only have time to pick up one piece of climbing gear.\n");
                printf("Which piece of gear do you choose (Ice Pick/Shoe Spikes)? \n");
                scanf("%s", play);
                
                if(!strcmp(play, "Ice Pick")||!strcmp(play, "ice pick")||!strcmp(play, "Ice pick")||!strcmp(play, "ice Pick"))
                {
                    printf("You begin slowly climbing using the ice pick.\n");
                    printf("One step at a time you begin to get the hang of climbing.\n");
                    printf("A few hours later you successfully climb out of the pit.\n");
                    printf("At the top of the pit two friendly foreginers await for you with food and a cellphone.\n");
                    printf("You call a friend from the army, who sends for you.\n");
                    printf("You have been saved.\n Congratulations! You win!!!");
                }
                
                else if(!strcmp(play, "Shoe Spikes")||!strcmp(play, "shoe spikes")||!strcmp(play, "Shoe spikes")||!strcmp(play, "shoe Spikes"))
                {
                    printf("You try your best to climb using the show spikes.\n");
                    printf("But you hands begin to slip while trying to grasp onto the sharp rocks.\n");
                    printf("You lose your grip and begin free falling backwards.\n");
                    printf("You hear a large crash and everything goes black.\n");
                    printf("You have lost :( Better luck next time.");
                }
            }
             
            else if(!strcmp(play, "Sword")||!strcmp(play, "sword"))
            {
                printf("You successfully fend off the snakes using the sword.\n");
                printf("Walking away with only a few scratches.\n");
                printf("Unfortunately, you begin to feel weak and see that two snakes bit into you during combat\n");
                printf("You fall unconscious minutes later.\n");
                printf("You have lost :( Better luck next time.");
            }
        }
    
    }
    
    else 
    {
        printf("Ok :( Maybe some other time than.");
    }

    return 0;
}
