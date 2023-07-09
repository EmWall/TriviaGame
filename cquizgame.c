#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
void reset_score();
void edit_score(float, char[]);
void print_file(char[]);
int main()
{
	int countr, r, r1, count, i, n;
	float score;
	char choice;
	char playername[20];
mainhome:
	print_file("welcome.txt");
	choice = toupper(getch());
	if (choice == 'V')
	{
		print_file("score.txt");
		goto mainhome;
	}
	else if (choice == 'H')
	{
		print_file("help.txt");
		getch();
		goto mainhome;
	}
	else if (choice == 'R')
	{
		reset_score();
		getch();
		goto mainhome;
	}
	else if (choice == 'Q')
	{
		exit(1);
	}
	else if (choice == 'S')
	{
		printf("\tResister your name:\n");
		fflush(stdin);
		scanf("%s", playername);
		printf("Welcome %s to Trivia!\n", playername);
		fflush(stdout);
		print_file("pregame.txt");

		if (toupper(getch()) == 'Y')
		{
			goto home;
		}
		else
		{
			goto mainhome;
		}

	home:
		count = 0;
		printf("Which of the following is a Palindrome number?\n");
		printf("A.42042\t\tB.101010\n");
		printf("C.23232\t\tD.01234\n");
		if (toupper(getch()) == 'C')
		{
			printf("Correct!!!\n");
			count++;
		}
		else
		{
			printf("Wrong!!! The correct answer is C.23232\n");
		}
		printf("The country with the highest environmental performance index is...\n");
		printf("A.France\t\tB.Denmark\nC.Switzerland\t\tD.Finland\n");
		if (toupper(getch()) == 'C')
		{
			printf("Correct!!!\n");
			count++;
		}
		else
		{
			printf("Wrong!!! The correct answer is C.Switzerland\n");
		}
		printf("Which animal laughs like human being?\n");
		printf("A.Polar Bear\t\tB.Hyena\nC.Donkey\t\tD.Chimpanzee\n");
		if (toupper(getch()) == 'B')
		{
			printf("Correct!!!\n");
			count++;
		}
		else
		{
			printf("Wrong!!! The correct answer is B.Hyena\n");
		}

		if (count >= 2)
		{
			goto test;
		}
		else
		{
			printf("\n\nWOMP WOMP WOMP, BETTER LUCK NEXT TIME");
			goto mainhome;
		}
	test:
		printf("\n*** CONGRATULATIONS %s you are eligible to compete ***\n", playername);
		printf("Press any key to Start the Challenge Round!\n");
		if (toupper(getch()) == 'p')
		{
			goto game;
		}
	game:
		countr = 0;
		for (i = 1; i <= 10; i++)
		{
			r = i;
			switch (r)
			{
			case 1:
				printf("What is the National Game of England?\n");
				printf("A.Football\t\tB.Basketball\nC.Cricket\t\tD.Baseball\n");
				if (toupper(getch()) == 'C')
				{
					printf("Correct!!!\n");
					countr++;
				}
				else
				{
					printf("Wrong!!! The correct answer is C.Cricket\n");
					goto score;
					break;
				}

			case 2:
				printf("Study of Earthquake is called............,\n");
				printf("A.Seismology\t\tB.Cosmology\nC.Orology\t\tD.Etimology\n");
				if (toupper(getch()) == 'A')
				{
					printf("Correct!!!\n");
					countr++;
				}
				else
				{
					printf("Wrong!!! The correct answer is A.Seismology\n");
					goto score;
				}

			case 3:
				printf("Among the top 10 highest peaks in the world, how many lie in Nepal?\n");
				printf("A.6\t\tB.7\nC.8\t\tD.9\n");
				if (toupper(getch()) == 'C')
				{
					printf("Correct!!!\n");
					countr++;
				}
				else
				{
					printf("Wrong!!! The correct answer is C.8\n");
					goto score;
				}

			case 4:
				printf("The Laws of Electromagnetic Induction were given by?\n");
				printf("A.Faraday\t\tB.Tesla\nC.Maxwell\t\tD.Coulomb\n");
				if (toupper(getch()) == 'A')
				{
					printf("Correct!!!\n");
					countr++;
				}
				else
				{
					printf("Wrong!!! The correct answer is A.Faraday\n");
					goto score;
				}

			case 5:
				printf("In what unit is electric power measured?\n");
				printf("A.Coulomb\t\tB.Watt\nC.Power\t\tD.Units\n");
				if (toupper(getch()) == 'B')
				{
					printf("Correct!!!\n");
					countr++;
				}
				else
				{
					printf("Wrong!!! The correct answer is B.Power\n");
					goto score;
				}

			case 6:
				printf("Which element is found in Vitamin B12?\n");
				printf("A.Zinc\t\tB.Cobalt\nC.Calcium\t\tD.Iron\n");
				if (toupper(getch()) == 'B')
				{
					printf("Correct!!!\n");
					countr++;
				}
				else
				{
					printf("Wrong!!! The correct answer is B.Cobalt\n");
					goto score;
				}

			case 7:
				printf("What is the National Name of Japan?\n");
				printf("A.Polska\t\tB.Hellas\nC.Drukyul\t\tD.Nippon\n");
				if (toupper(getch()) == 'D')
				{
					printf("Correct!!!\n");
					countr++;
				}
				else
				{
					printf("Wrong!!! The correct answer is D.Nippon\n");
					goto score;
				}

			case 8:
				printf("How many times a piece of paper can be folded at the most?\n");
				printf("A.6\t\tB.7\nC.8\t\tD.Depends on the size of paper\n");
				if (toupper(getch()) == 'B')
				{
					printf("Correct!!!\n");
					countr++;
				}
				else
				{
					printf("Wrong!!! The correct answer is B.7\n");
					goto score;
				}

			case 9:
				printf("What is the capital of Denmark?\n");
				printf("A.Copenhagen\t\tB.Helsinki\nC.Ajax\t\tD.Galatasaray\n");
				if (toupper(getch()) == 'A')
				{
					printf("Correct!!!\n");
					countr++;
				}
				else
				{
					printf("Wrong!!! The correct answer is A.Copenhagen\n");
					goto score;
				}

			case 10:
				printf("Which is the longest River in the world?\n");
				printf("A.Nile\t\tB.Koshi\nC.Ganga\t\tD.Amazon\n");
				if (toupper(getch()) == 'A')
				{
					printf("Correct!!!\n");
					countr++;
				}
				else
				{
					printf("Wrong!!! The correct answer is A.Nile\n");
					goto score;
				}
			}
		}
	score:
		score = (float)countr * 100000;
		if (score > 0.00 && score < 1000000)
		{
			printf("**************** CONGRATULATIONS *****************");
			printf("\tYou won %.2f points", score);
			goto go;
		}
		else if (score == 1000000.00)
		{
			printf("**************** CONGRATULATIONS ****************");
			printf("\tPERFECTION!!!!!!!!!");
			printf("\tYou won $%.2f", score);
			printf("\t\tThank You!!");
		}
		else
		{
			printf("******** SORRY YOU DIDN'T WIN ANY POINTS ********");
			printf("\t Thanks for your participation");
			printf("\t\t TRY AGAIN");
			goto go;
		}

	go:
		printf("\n Press Y if you want to play next game\n");
		printf("Press any other key if you want to go main menu\n");
		if (toupper(getch()) == 'Y')
			goto home;
		else
		{
			edit_score(score, playername);
			goto mainhome;
		}
	}
}

void print_file(char filename[20])
{
	printf("\n");
	FILE *fptr;
	fptr = fopen(filename, "r");
	if (fptr == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}
	char c = fgetc(fptr);
	while (c != EOF)
	{
		printf("%c", c);
		c = fgetc(fptr);
	}
	fclose(fptr);
	printf("\n");
}

void reset_score()
{
	fclose(fopen("score.txt", "w"));
}

void edit_score(float score, char plnm[20])
{
	char scores[5][2][20];
	char sc[5];
	char nm[20];
	FILE *f;
	f = fopen("score.txt", "r");
	if (!f)
	{
		f = fopen("score.txt", "w");
		fprintf(f, "%s,%.2f", plnm, score);
		fclose(f);
	}
	else
	{
		// read scores
		for (int i = 0; i < 5; i++)
		{
			fscanf(f, "%s,%s", &nm, &sc);
			scanf(scores[i][0], nm);
			scanf(scores[i][1], sc);
		}
		int sclowest = atoi(scores[4][1]);
		if (score > sclowest)
		{
			for (int i = 1; i < 5; i++)
			{
				int scnum = atoi(scores[4 - i][1]);
				if (score > scnum)
				{
					scanf(scores[5 - i][0], scores[4 - i][0]);
					scanf(scores[5 - i][1], scores[4 - i][1]);
				}
				else
				{
					scanf(scores[5 - i][0], plnm);
					scanf(scores[5 - i][1], score);
				}
			}
		}
		for (int i = 0; i < 5; i++)
		{
			f = fopen("score.txt", "w");
			fprintf(f, "%s,%.2f", scores[i][0], scores[i][1]);
		}
		fclose(f);
	}
}
