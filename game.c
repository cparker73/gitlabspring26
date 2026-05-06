//Contributors
//GP+
//LS
//Ryan Rodriguez
//Kristopher Willett
//
//
//
void ANFUN(void);


#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>


//place function prototypes here
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
void room58SM(void);
int getLitCount58SM(int candles[]);
void brooklynstitt(void);
void PogoAM(void);

void room49game(void);

void dleyva14(void);
void printdAfeworkIntials(void);

void kwillett48(void);

void ncInitial(void);



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
				puts("room3");
				break;
			}
			case 4:
			{
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
				puts("room19");
				break;
			}
			case 20:
			{
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
				break;
			}
			case 44:
			{
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
				puts("room55");
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
				room58SM();
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
void room58SM(void)
{
	int candles[6] = {0, 0, 0, 0, 0, 0};
	int choice = 0;
	int decisions = 0;
	int smoke = 0;
	int litCount = 0;
	int randomEvent = 0;
	char *candleNames[6] = {"Candle 1", "Candle 2", "Candle 3", "Candle 4", "Candle 5", "Candle 6"};

	printf("\nYou enter Room 58.\n");
	printf("Six magic candles sit on a stone table.\n");
	printf("You must survive five decisions to unlock the exit.\n");

	while (decisions < 5)
	{
		printf("\nRoom 58 Status\n");
		printf("Decision: %d of 5\n", decisions + 1);
		printf("Smoke level: %d\n", smoke);
		printf("Lit candles: %d\n", getLitCount58SM(candles));

		if (decisions == 0)
		{
			printf("\nDecision 1: You see two candles glowing faintly.\n");
			printf("1. Light Candle 1\n");
			printf("2. Light Candle 2\n");
			printf("Enter choice: ");
			scanf("%d", &choice);

			if (choice == 1)
			{
				candles[0] = 1;
				printf("%s is now lit.\n", candleNames[0]);
			}
			else if (choice == 2)
			{
				candles[1] = 1;
				printf("%s is now lit.\n", candleNames[1]);
			}
			else
			{
				printf("Invalid choice. Smoke rises.\n");
				smoke++;
			}
		}
		else if (decisions == 1)
		{
			printf("\nDecision 2: Smoke begins to fill the room.\n");
			printf("1. Search for a hidden vent\n");
			printf("2. Light Candle 3 quickly\n");
			printf("Enter choice: ");
			scanf("%d", &choice);

			if (choice == 1)
			{
				randomEvent = rand() % 2;

				if (randomEvent == 0)
				{
					printf("You found a vent. The smoke level goes down.\n");

					if (smoke > 0)
					{
						smoke--;
					}
				}
				else
				{
					printf("The vent was blocked. Smoke rises.\n");
					smoke++;
				}
			}
			else if (choice == 2)
			{
				candles[2] = 1;
				printf("%s is now lit.\n", candleNames[2]);
			}
			else
			{
				printf("Invalid choice. Smoke rises.\n");
				smoke++;
			}
		}
		else if (decisions == 2)
		{
			printf("\nDecision 3: You find a hidden spark on the floor.\n");
			printf("1. Use it on Candle 4\n");
			printf("2. Save it and look around\n");
			printf("Enter choice: ");
			scanf("%d", &choice);

			if (choice == 1)
			{
				candles[3] = 1;
				printf("%s is now lit.\n", candleNames[3]);
			}
			else if (choice == 2)
			{
				randomEvent = rand() % 3;

				if (randomEvent == 0)
				{
					printf("The spark jumps to Candle 5.\n");
					candles[4] = 1;
				}
				else if (randomEvent == 1)
				{
					printf("The spark disappears. Smoke rises.\n");
					smoke++;
				}
				else
				{
					printf("The spark reveals a clue on the wall.\n");
				}
			}
			else
			{
				printf("Invalid choice. Smoke rises.\n");
				smoke++;
			}
		}
		else if (decisions == 3)
		{
			printf("\nDecision 4: The wall says, 'The hidden candle opens the way.'\n");
			printf("1. Search for Candle 6\n");
			printf("2. Ignore the clue and wait\n");
			printf("Enter choice: ");
			scanf("%d", &choice);

			if (choice == 1)
			{
				randomEvent = rand() % 2;

				if (randomEvent == 0)
				{
					printf("You found Candle 6 and lit it.\n");
					candles[5] = 1;
				}
				else
				{
					printf("You found dust instead. Smoke rises.\n");
					smoke++;
				}
			}
			else if (choice == 2)
			{
				printf("Waiting was dangerous. Smoke rises.\n");
				smoke++;
			}
			else
			{
				printf("Invalid choice. Smoke rises.\n");
				smoke++;
			}
		}
		else if (decisions == 4)
		{
			printf("\nDecision 5: The exit begins to glow.\n");
			printf("1. Try to open the exit\n");
			printf("2. Light one more candle first\n");
			printf("Enter choice: ");
			scanf("%d", &choice);

			if (choice == 1)
			{
				printf("You try to open the exit.\n");
			}
			else if (choice == 2)
			{
				randomEvent = rand() % 6;
				candles[randomEvent] = 1;
				printf("%s lights up from the final spark.\n", candleNames[randomEvent]);
			}
			else
			{
				printf("Invalid choice. Smoke rises.\n");
				smoke++;
			}
		}

		decisions++;
		litCount = getLitCount58SM(candles);

		if (smoke >= 3)
		{
			printf("The room fills with smoke. You run back to the hallway.\n");
			return;
		}
	}

	litCount = getLitCount58SM(candles);

	if (litCount >= 4)
	{
		printf("The candles glow together and unlock the exit.\n");
		printf("You escape Room 58 and return to the hallway.\n");
	}
	else
	{
		printf("Not enough candles are lit.\n");
		printf("You return to the hallway.\n");
	}
}

int getLitCount58SM(int candles[])
{
	int i = 0;
	int count = 0;

	for (i = 0; i < 6; i++)
	{
		if (candles[i] == 1)
		{
			count++;
		}
	}

	return count;
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
void rgarcia_fun(void)
{
	printf("RJG");
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

void ANFUN(void)
{
    printf("AN");
}
void dleyva14(void)
{
	printf("DL\n");
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






