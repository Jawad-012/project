#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include <graphic.h>
void border() {
    for(int i = 0 ; i<=123 ; i++){
    	printf("~");
	}
    printf("\n");
}

void Title() {
	printf("\n");
    printf("\t\t\t\t");
    printf("\t $$$$$\t"); // G
    printf(" $     $"); // U
    printf("  $$$$$$"); // E
    printf("   $$$$$$"); // S
    printf("   $$$$$$\n"); // S
    printf("\t\t\t\t");
    printf("\t$\t"); // G
    printf(" $     $"); // U
    printf("  $\t"); // E
    printf("  $  "); // S
    printf("      $ \n"); // S
    printf("\t\t\t\t");
    printf("\t$   $$$\t"); // G
    printf(" $     $"); // U
    printf("  $$$$$$ "); // E
    printf("  $$$$$$ "); // S
    printf("  $$$$$$ \n"); // S
    printf("\t\t\t\t");
    printf("\t$     $\t"); // G
    printf(" $     $"); // U
    printf("  $\t"); // E
    printf("         $ "); // S
    printf("       $\n"); // S
    printf("\t\t\t\t");
    printf("\t $$$$$\t"); // G
    printf("  $ $ $"); // U
    printf("   $$$$$$ "); // E
    printf("  $$$$$$ "); // S
    printf("  $$$$$$ \n"); // S
    
    border();
}

void Title2() {
    printf("\n");
    printf("\t\t\t\t");
    printf("\t\t   $$$$$$$ ");//T
    printf("  $     $  ");//H
    printf("  $$$$$$\n"); // E
    printf("\t\t\t\t");
    printf("\t\t      $  ");//T
    printf("    $     $");//H
    printf("   $\t\n"); // E
    printf("\t\t\t\t");
    printf("\t\t      $ ");//T
    printf("     $$$$$$$ ");//H
    printf("   $$$$$$ \n"); // E
    printf("\t\t\t\t");  
    printf("\t\t      $  ");//T
    printf("    $     $");//H
    printf("   $\t\n"); // E
    printf("\t\t\t\t");
    printf("\t\t      $  ");//T
    printf("    $     $");//H
    printf("    $$$$$$ \n"); // E
    
    border();
}

void Title3() {
    printf("\n");
    printf("\t\t\t\t");
    printf("\t $$$$$$");//P
    printf("   $$$$$$  "); // E
    printf("$$$$$$");//R
    printf("   $$$$$$"); // S
    printf("   $$$$$$");//O
    printf("   $      $   \n"); //N
    printf("\t\t\t\t");
    printf("\t $    $");//P
    printf("  $\t  "); // E
    printf("$    $ ");//R
    printf(" $  "); // S
    printf("\t   $      $");//O
    printf("  $ $    $   \n");//N
    printf("\t\t\t\t");
    printf("\t $$$$$$");//P
    printf("   $$$$$$  "); // E
    printf("$$$$$$");//R
    printf("   $$$$$$ "); // S
    printf(" $      $");//O
    printf("  $   $  $   \n");//N
    printf("\t\t\t\t");
    printf("\t $ ");//P
    printf(" \t $  "); // E
    printf("\t  $  $  ");//R
    printf("\t $"); // S
    printf(" $      $");//O
    printf("  $    $ $   \n");//N
    printf("\t\t\t\t");
    printf("\t $  ");//P
    printf("\t  $$$$$$ "); // E
    printf(" $   $");//R
    printf("    $$$$$$ "); // S
    printf("  $$$$$$");//O
    printf("   $      $   \n");//N
}
void Disclaimer( )
{
    printf("\n");
    printf("    ** DISCLAIMER ** DISCLAIMER ** DISCLAIMER ** DISCLAIMER ** DISCLAIMER ** DISCLAIMER ** DISCLAIMER ** \n");
}
void Rules()
{
    printf("\t\t\t\t\t\t   R***U**L**E***S \n");
    printf("\t\t\t\t * This Game Contains Only Politician Leaders Of Pakistan *");    
}
void Start_the_Game()
{
    char ch;
    printf("\n\t Lets Start The Game? \n");
    printf("\t Press 'Y' for YES \n");
    printf("\t Press 'N' for NO \n");
    printf("\t Option: ");
    scanf(" %c",&ch);
    if( ch=='Y' || ch =='y')
    {
        printf("\nNOTE! TO ANSWER THE QUESTIONS YOU HAVE TO ENTER 'Y'for YES OR 'N' for NO \n");
        //start:
        printf("\nIs your Personality male gender?\n");
        printf("\t Option: ");
        scanf(" %c",&ch);
        if( ch=='Y' || ch =='y')
		{   
            printf("\nIs your character politician?\n");
            printf("\t Option: ");
            scanf(" %c",&ch);
            if( ch=='Y' || ch =='y')
            {
                printf("\n");
          		printf("Did your politician ran away from country?  :D \n\t Option: ");
           		scanf(" %c",&ch);
               	if( ch=='Y' || ch =='y')
               	{
                 	printf("\n");
                 	printf("Is your politician Bald?\n");
                 	printf("\t Option: ");
          			scanf(" %c",&ch);
               		if( ch=='Y' || ch =='y')
               		{
               			printf("\n");
               			printf("You are thinking about nawaz sharif!");	
					}
                }
                else 
                {	
                	printf("\n");
                 	printf("is your politician over 40 years old?\n");
                 	printf("\t Option: ");
          			scanf(" %c",&ch);
               		if( ch=='Y' || ch =='y')
               		{
               			printf("\n");
                 		printf("is your politician a former cricketer?\n");
               			printf("\t Option: ");
          				scanf(" %c",&ch);
               			if( ch=='Y' || ch =='y')
               			{
               				printf("you are thinking about imran khan\n");
                 		}
					}
					else
					{
               			printf("\n");
                 		printf("did your politician studied from abroad?\n");
               			printf("\t Option: ");
          				scanf(" %c",&ch);
               			if( ch=='Y' || ch =='y')
               			{
               				printf("\ndo your politician talk like woman\n");
               				printf("\t Option: ");
          					scanf(" %c",&ch);
               				if( ch=='Y' || ch =='y')
               				{
               					printf("\nyou are thinking about bilawal bhutto :D\n");
                 			}
                 		}
					}
					
                   	//goto start;  // Yahn statements ayegi
                }
            }
            else 
            {
                printf("Is  your character a cricket player?\n");
          		printf("\t Option: ");
           		scanf(" %c",&ch);
               	if( ch=='Y' || ch =='y')
               	{
                 	printf("");
                }
				//goto start;  // Yahn statements ayegi
                
            }
		}
        else
        
        {
            //goto start; //Yahn statements ayegi
        }
	}
    if(ch=='N' || ch =='n')
    {
        exit(0);
    }

}
int main() {
    border();
    Title();
    Title2();
    Title3();
    border();
    Disclaimer();
    printf( "\t\t      (* This Program Is Made For Only Entertainment Purpose & Not To Hurt Someone's Intension *) \n");
    border();
    Rules();
    Start_the_Game();
    return 0;
}