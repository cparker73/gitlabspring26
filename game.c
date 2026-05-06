//Contributors
//GP+
//LS
//Ryan Rodriguez
//Anthony Farris
//Charles Parker
//Kristopher Willett
//
//
//





#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


//place function prototypes here
void khprinter(void);

void ANFUN(void);
void dcFunc(void);
void cparkerFun(void);
void rgarcia_fun(void);
void ls(void);
void mnFun(void);
void JMfun(void);
void RRlab(void);
void jwFunc(void);
void jsl();
void dcFun(void);
void abFun(void);
void function13AG(void);
void theSigmaMethod(void);
void jbInit(void);
void ip21(void);
void folksamEV(void);
void sonionRH(void);
void ip21(void);
void rtFun(void);
void JLeyva(void);
void fish(void);
void printStudent30(void);
void printInitialsAjewett(void);
void jgFun(void);
void printInitialsSMarkos(void);
void brooklynstitt(void);
void PogoAM(void);
void aaGM(void);
void room49game(void);
void dleyva14(void);
void AMaderaFun(void);
void CAYfrog(void);
void afFun(void);  
void jmItsGameTime(void);
void stanPush(void);
void printdAfeworkIntials(void);
void kwillett48(void);
void ncInitial(void);
void mtorres(void);
void hOsuna(void);


int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to THE RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 75 doors, each labeled with a number.");
		puts("The room starts filling with water and a loud voice tells you that you must choose a door to open and enter or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				puts("room1");
				break;
			}
			case 2:
			{
				puts("room2");
				break;
			}
			case 3:
			{
				cparkerFun();
				puts("room3");
				break;
			}
			case 4:
			{
				CAYfrog();
				puts("room4");
				break;
			}
			case 5:
			{
				puts("room5");
				break;
			}
			case 6:
			{
				puts("room6");
				break;
			}
			case 7:
			{
				jwFunc();
				puts("room7");
				break;
			}
			case 8:
			{
				folksamEV();
				puts("room8");
				break;
			}
			case 9:
			{
				puts("room9");
				printInitialsAjewett();
				break;
			}
			case 10:
			{
				fish();
				puts("room10");
				break;
			}
			case 11:
			{
				dleyva14();
				puts("room11");
				break;
			}
			case 12:
			{
				ANFUN();
				puts("room12");
				break;
			}
			case 13:
			{
				function13AG();
				puts("room13");
				break;
			}
			case 14:
			{
				dcFun();
				puts("room14");
				break;
			}
			case 15:
			{
				ncInitial();
				puts("room15");
				break;
			}
			case 16:
			{
				puts("room16");
				break;
			}
			case 17:
			{
				jbInit();
				puts("room17");
				break;
			}
			case 18:
			{
				puts("room18");
				break;
			}
			case 19:
			{
				dcFunc();
				puts("room19");
				break;
			}
			case 20:
			{
				AMaderaFun();
				puts("room20");
				break;
			}
			case 21:
			{
				ip21();
				puts("room21");
				break;
			}
			case 22:
			{
				puts("room22");
				printdAfeworkIntials();
				break;
			}
			case 23:
			{
				puts("room23");
				break;
			}
			case 24:
			{
				JMfun();
				puts("room24");
				break;
			}
			case 25:
			{

				mnFun(); 
				puts("room25");
				break;
			}
			case 26:
			{
				puts("room26");
				break;
			}
			case 27:
			{
				puts("room27");
     				theSigmaMethod();
				break;
			}
			case 28:
			{
				puts("room28");
				break;
			}
			case 29:
			{	
				abFun();
				puts("room29");
				break;
			}
			case 30:
			{
				puts("room30");
				printStudent30();
				break;
			}
			case 31:
			{
				PogoAM();

				puts("room31");
				break;
			}
			case 32:
			{
				aaGM();
				puts("room32");
				break;
			}
			case 33:
			{
				puts("room33");
				break;
			}
			case 34:
			{
				puts("room34");
				break;
			}
			case 35:
			{
				sonionRH();
				puts("room35");
				break;
			}
			case 36:
			{
				puts("room36");
				break;
			}
			case 37:
			{
				puts("room37");
				break;
			}
			case 38:
			{
				mtorres();
				puts("room38");
				break;
			}
			case 39:
			{
				puts("room39");
				break;
			}
			case 40:
			{      
                                ls();
				puts("room40");
				break;
			}
			case 41:
			{
				puts("room41");
				break;
			}
			case 42:
			{
				jgFun();
				puts("room42");
				break;
			}
			case 43:
			{
				puts("room43");
				stanPush();
				break;
			}
			case 44:
			{
				khprinter();
				puts("room44");
				break;
			}
			case 45:
			{
				puts("room45");
				brooklynstitt();
				break;
			}
			case 46:
			{
				puts("room46");
				break;
			}
			case 47:
			{
				rgarcia_fun();
				puts("room47");
				break;
			}
			case 48:
			{
				kwillett48();
				puts("room48");
				break;
			}
			case 49:
			{
				puts("room49");
				room49game();
				break;
			}
			case 50:
			{
				puts("room50");
				break;
			}
			case 51:
			{
				puts("room51");
				break;
			}
			case 52:
			{
				afFun();
				puts("room52");
				break;
			}
			case 53:
			{
				puts("room53");
				break;
			}
			case 54:
			{
				puts("room54");
				break;
			}
			case 55:
			{
				jmItsGameTime();
				puts("You have entered Room 55!\n");
				break;
			}
			case 56:
			{
                                JLeyva();
				puts("room56");
                                break;
			}
			case 57:
			{
				rtFun();
                                puts("room57");
                                break;
			}
			case 58:
			{
				printInitialsSMarkos();
                                puts("room58");
                                break;
			}
			case 59:
			{
				jsl();
                                puts("room59");
                                break;
			}
			case 60:
			{
				puts("room60");
                                break;
			}
			case 61:
			{
				RRlab();
                                puts("room61");
                                break;
			}
			case 62:
			{
                                puts("room62");
                                break;
			}
			case 63:
			{
                                puts("room63");
                                break;
			}
			case 64:
			{
                                puts("room64");
                                break;
			}
			case 65:
			{
                                puts("room65");
                                break;
			}
			case 66:
			{
                                puts("room66");
                                break;
			}
			case 67:
			{
                                puts("room67");
                                break;
			}
			case 68:
			{
                                puts("room68");
				hOsuna();
                                break;
			}
			case 69:
                        {
                                puts("room69");
                                break;
                        }
			case 70:
                        {
                                puts("room70");
                                break;
                        }
			case 71:
                        {
                                puts("room71");
                                break;
                        }
			case 72:
                        {
                                puts("room72");
                                break;
                        }
			case 73:
                        {
                                puts("room73");
                                break;
                        }
			case 74:
                        {
                                puts("room74");
                                break;
                        }
			case 75:
                        {
                                puts("room75");
                                break;
                        }
			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

//place function definitions below this comment


void afFun(void)
{ 
	puts("AFroom52");
}
void dcFunc(void)
{
    printf("DCroom19\n");
}


void room49game(void)
{
	printf("G.C\n");

}

void mnFun(void)
{
	puts("MNroom25");
}



//place functions here
//
void cparkerFun(void)
{
	printf("C P\n");
}
void rgarcia_fun(void)
{
	printf("RJG");
}

void AMaderaFun(void)
{
	printf("AMadera\n");
}


void ls(void)
{
	printf("LS\n");
       
}
void JMfun(void)
{
	printf("JM");
}


void RRlab(void)
{
	printf("RRroom61\n");
}


void jwFunc(void)
{
	printf("JW\n");
}



void jsl(void)
{
	printf("JSL\n");
}

void khprinter(void)
{
	printf("KDH");
}


void PogoAM(void)
{
	printf("AM\n");
}
void dcFun(void)
{
	printf("DC\n");
}




void function13AG(void)
{
	printf("AG\n");
}
void abFun(void)
{
	printf("AB");
}



void theSigmaMethod(void)
{
  printf("J.Q.\n");

}


void folksamEV(void) 
{
	printf("EV\n");
}

void sonionRH(void) 
{
	printf("RAOOL-HIG\n");
}

void jbInit()
{
	puts("jbRoom17");
}

// Case 45:
void brooklynstitt(void)
{
	printf("Initials: BAS\n\n");
}

void ip21(void)
{
	printf("IP\n");
}

void rtFun(void)
{
	printf("RT");
}

void JLeyva(void)
{
	printf("JL");
}

void fish(void) 
{
	printf("JF");

}

void printStudent30(void)
{
	printf("Student initials CP\n");
}

void printInitialsAjewett(void)
{
	printf("AJ\n");
}

void jgFun(void)
{
	printf("JGB");	

}

void printInitialsSMarkos(void) 
{
	printf("SM\n");
}

void aaGM(void)
{
	printf("AA\n");
}

void ANFUN(void)
{
    printf("AN");
}
void dleyva14(void)
{
	printf("DL\n");
}

void CAYfrog(void)
{
	printf("CAY");
}
//Room 55

void jmItsGameTime(void)
{
	//Starting Variables
	int choice = 0;
	int servantChoice = 0;
	char *servantName = "BLANK";
	int bossHealth = 100;
	int playerHealth = 100;
	int battleOptions = 0;
	char *enemies[] = {"Shadow Saber", "Shadow Lancer", "Shadow Archer"};
	int chooseRandomEnemy = rand() % 3;
	int secretInfo = 0;


	puts("---Welcome to Room of Fate!---");
	puts("You are in a dark grim blue room with futuristic technology that you don't recognize.");
	puts("Yook look around the room and you see staircases leading up to a platform.");
	puts("On the platform you see 3 pedestal, on them you 3 floating cards.");
	puts("The cards shows heroes with different archetypes.");
	puts("Whichever you have chosen they will guide you in your journey.");
	puts("1. Saber");
	puts("2. Archer");
	puts("3. Lancer");
	//Choose 1
	printf("Card chosen: \n");
	scanf("%d", &servantChoice);

	if(servantChoice == 1)
	{
		servantName = "Saber";
	}
	else if(servantChoice == 2)
	{
		servantName = "Lancer";
	}
	else if(servantChoice ==3)
	{
		servantName = "Archer";
	}
	else
	{
		servantName = "Ruler";
	}

	printf("You and %s have been summoned!\n", servantName);
	printf("%s has spawned. \n", enemies[chooseRandomEnemy]);
	printf("You and your partner are stuck in a room with the enemy.\n");
	printf("There are multiple chests in the room.\n");
	printf("---BATTLE ENGAGED---\n");

	//While Loop
	while(bossHealth > 0 && playerHealth >0)
	{
		printf("%s Health: %d | %sHealth %d\n", servantName, playerHealth, enemies[chooseRandomEnemy], bossHealth);
		printf("How would you choose to fight.\n");
        	puts("1. Attack");
        	puts("2. Talk");
        	puts("3. Escape");
        	puts("4. Befriend");
		puts("Choose: ");
		
		scanf("%d", &choice);

		switch (choice)
		{
			//Turn-based Combat
			case 1:
			{
				int damage = rand() % 20 +10;
				bossHealth -= damage;
				printf("You and %s attack the enemy. %d DAMAGE!\n",servantName, damage);
			}
			break;

			//Talk to the enemy to get some information.
			case 2:
			{
				int talkChoice = 0;
				printf("You try to talk to talk with %s\n", enemies[chooseRandomEnemy]);
				printf("1. Try to calm the enemy by singing. \n");
				printf("2. Demean the enemy to submission, \n");
				scanf("%d", &talkChoice);

				if(talkChoice == 1)
				{
					printf("The enemy pauses to sing!\n");
					printf("You learn that it loves to sing.\n");
					secretInfo = 1;
					continue;
				}
				else
				{
					printf("The enemy got enraged. The health increased by 10.\n");
					bossHealth +=10;
				}
			}
			break;
			
			//ESCAPE
			case 3:
			{
				int itemThrown = 0;
				int toEscape = 0;

				printf("You and %s try to escape and got cut off.\n", servantName);
				printf("Next to you, you see a chest.\n");
				printf("You opened it a see a bunch of smokebombs.\n");
				printf("You decided to throw it at the enemy!\n");
				printf("1. Aim at torso \n");
				printf("2. Aim at the ground \n");
				printf("Choose: \n");

				scanf("%d", &itemThrown);
				if(itemThrown != 1 && itemThrown != 2)
				{
					printf("Invalid choice..., the smokebomb slips from your grasp!\n");
					playerHealth -=5;
				}
				else
				{
					toEscape = (rand() % 2) +1;
					printf("You throw the smoke as hard as you can and hope for the best...\n");
					if(itemThrown == toEscape)
					{
						printf("The smokebomb was a direct HIT, the room is filled with smoke.\n");
						bossHealth = 0;
						printf("Now its time to escape back, say goodbye to your partner!\n");
					}
					else
					{
						printf("The smoke did not do anything, rather just stayed as a ball... %s is still looking at you and decided to attack!\n",enemies[chooseRandomEnemy]);
						playerHealth -=10;
					}

				}
			}
			break;
			
			//BEFRIEND
			case 4:
			{
				int beFriendChoice = 0;
				printf("You decided to open your hand and build a connection with%s.\n",enemies[chooseRandomEnemy]);
				printf("1. Try to make sense of the situation.\n");
				printf("2. Make an anecdote of it attire.\n");

				if(secretInfo == 1)
				{
					printf("3.[SECRET INFO] Say the name of the %s, to reveal the identity and bring them to light!\n",enemies[chooseRandomEnemy]);
				}
				printf("Choose: \n");
				scanf("%d", &beFriendChoice);

				if(beFriendChoice == 3 && secretInfo == 1)
				{
					printf("You have revealed the true name of the %s and plegdge your allegiances to you.\n", enemies[chooseRandomEnemy]);
					bossHealth = 0;
				}
				else if(beFriendChoice == 1 && bossHealth<= 40)
				{
					printf("The enemy has formed a bond.\n");
					bossHealth = 0;
				}
				else if (beFriendChoice == 2)
				{
					printf("The bond failed, and decided to attack you!\n");
					playerHealth -= 20;
				}

			}
			break;
				
					
		}//End of while loop
		 
		//Enemy Turn
		if (bossHealth > 0)
		{
			int enemyDamage = rand() %15+5;
			playerHealth-=enemyDamage;
			printf("%s attacks for %d damage: \n", enemies[chooseRandomEnemy],enemyDamage);
		}

		//Health check
		if(playerHealth <= 0)
		{
			printf("You and %s have been defeated...\n", servantName);
		}
		else if (bossHealth <= 0)
		{
			printf("%s has been defeated!\n",enemies[chooseRandomEnemy]);
		}
		

	}
}
void printdAfeworkIntials(void)
{
	puts("DA");
}


void kwillett48(void)
{
	printf("KDW");

}

void ncInitial(void)
{
	printf("NC");
}

void mtorres(void)
{
	printf("MT");
}


void hOsuna(void)
{
        printf("\nHAO\n");
}



void stanPush(void)
{
	puts(" S J \n");
}


