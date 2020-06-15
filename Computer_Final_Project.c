#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include<string.h>
#include <time.h>
//include"input(new).h"

//Define Board Struct
typedef struct board{
    int timecount;
    char user;
}board;

//Define Set of User Character
typedef struct user{
    char name[50];
    char cha;
    int score;
    int check;
    int level;
    int OK;
}user;

//User Buffer
typedef struct user_buffer{
    int level;
    char name[50];
    int time_count;
    int OK;
}user_buffer;

//Pair of Name and Score
typedef struct name_score{
	int score;
	char name[50];
}name_score;

//Pair int
typedef struct pair_int{
	int number1;
	int number2;
}pair_int;


//Time Delay
void delay(int number_of_seconds){
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
    // Storing start time
    clock_t start_time = clock();
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds) ;
}

void line()
{
HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 7);
printf("			+");
}

//History Print Function
void input0()
{
	HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 12);
	printf("  ####  ####  #####  ####  \n");
	delay(0.5);
	printf("  #      ##      #   #     \n");
	delay(0.5);
	printf("  ####   ##     #    ####  \n");
	delay(0.5);
	printf("     #   ##    #     #     \n");
	delay(0.5);
	printf("  ####  ####  ####   ####  \n");
	delay(0.5);
}
void input1()
{
	int a;
	HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	printf("\n\n	Example the size of board:\n");
	printf("\t    Can be 2x2 to 80x80\n");
	delay(1);
	printf("\n\n\t	+---+---+ size		+---+---+---+\n\t	|   |   |		|   |   |   | size\n\t	+---+---+ is		+---+---+---+\n\t	|   |   |		|   |   |   | is\n\t	+---+---+ 2		+---+---+---+\n\t				|   |   |   | 3\n\t				+---+---+---+\n");
	delay(1);
	printf("\n	Size of Board: ");

}
void input2()
{
	int a;
	printf("\n\n		*=--------=*=--------=*\n		-Obstacle or Barrier-\n		<You can not spread in>\n	 		Example:\n\n");
	HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	printf("			");
SetConsoleTextAttribute(hConsole, 64);
	printf("##");
SetConsoleTextAttribute(hConsole, 7);
printf("	");
SetConsoleTextAttribute(hConsole, 64);
printf("##");
SetConsoleTextAttribute(hConsole, 7);
printf("\n\n		");
SetConsoleTextAttribute(hConsole, 7);
printf("\n		*=--------=*=--------=*\n");

}
void input3()
{
	int a;
	printf("\n");
	printf("			        	<---*= ");
	printf("Dake Mi Yang");
	printf(" =*--->");
	printf("\n					(1): New Game");
	printf("\n					(2): Contineous");
	printf("\n					(3): History");
	printf("\n					(4): Exit");
	printf("\n					-----------=***=----------\n");
}
void input4()
{
	// c is id game
	// man mai print \ hai a
	char c='Q',d[]={'H','a','p','p','y','\0'};
	printf("	+-+ \n");
	printf("	|%c|	%s : Your turn!\n",c,d);
	printf("	-+-\n");
	printf("	 | \n");
	printf("       --|-- \n");
	printf("       __|__ \n");
	delay(1);
	system("CLS");


}

void input5()
{
HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
system("CLS");
delay(1);
char name[20];
char character;



//Print NAME
//First line
SetConsoleTextAttribute(hConsole, 14);
printf("           @@    @   @@@   @@@   @@@  @@@@    @@@@@@            \n");
delay(1);
//Second line
SetConsoleTextAttribute(hConsole, 14);
printf("           @ @   @  @   @  @  @ @  @  @       @@   @@           \n");
delay(1);
//Third line
SetConsoleTextAttribute(hConsole, 14);
printf("           @  @  @  @   @  @   @   @  @@@@         @@           \n");
delay(1);
//Forth line
SetConsoleTextAttribute(hConsole, 14);
printf("           @   @ @  @@@@@  @       @  @            @@           \n");
delay(1);
//Fifth line
SetConsoleTextAttribute(hConsole, 14);
printf("           @    @@  @   @  @       @  @            @@           \n");
delay(1);
//Sixth line
SetConsoleTextAttribute(hConsole, 14);
printf("           @    @@  @   @  @       @  @@@@       @@             \n");
delay(1);
//Seventh line
printf("                                                 @@             \n");
delay(1);
//Eighth line
SetConsoleTextAttribute(hConsole, 15);
printf("          +++++++++++++++++++++++++++++++++                     \n");
delay(1);
//Nineth line
SetConsoleTextAttribute(hConsole, 14);
printf("                                                 @@             \n");
delay(1);
printf("          ---> ");
delay(1);
scanf("%s", &name[0]);
printf("\n");

//Print CHAR
//First line
SetConsoleTextAttribute(hConsole, 3);
printf("           @@@@@@  @   @   @@@    @@@@@      @@@@@@            \n");
delay(1);
//Second line
SetConsoleTextAttribute(hConsole, 3);
printf("           @       @   @  @   @   @   @      @@   @@           \n");
delay(1);
//Third line
SetConsoleTextAttribute(hConsole, 3);
printf("           @       @   @  @   @   @   @           @@           \n");
delay(1);
//Forth line
SetConsoleTextAttribute(hConsole, 3);
printf("           @       @@@@@  @@@@@   @@@@            @@           \n");
delay(1);
//Fifth line
SetConsoleTextAttribute(hConsole, 3);
printf("           @       @   @  @   @   @   @           @@           \n");
delay(1);
//Sixth line
SetConsoleTextAttribute(hConsole, 3);
printf("           @@@@@@  @   @  @   @   @    @        @@             \n");
delay(1);
//Seventh line
printf("                                                @@             \n");
delay(1);
//Eighth line
SetConsoleTextAttribute(hConsole, 15);
printf("          +++++++++++++++++++++++++++++++++                     \n");
delay(1);
//Nineth line
SetConsoleTextAttribute(hConsole, 3);
printf("                                                @@             \n");
delay(1);
printf("          ---> ");
delay(1);
scanf("%c", &character);
}
void input6()
{ printf("     ---------------------");
HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 10);
printf("=");
SetConsoleTextAttribute(hConsole, 12);
printf("**");
SetConsoleTextAttribute(hConsole, 10);
printf("=");
SetConsoleTextAttribute(hConsole, 7);
printf("---------------------\n");
SetConsoleTextAttribute(hConsole, 15);
 printf("   - Mode -   \n\n");
SetConsoleTextAttribute(hConsole, 14);
 printf("      (1): End with limit number player\n");
 printf("      (2): End with have only one player left in board\n\n");
SetConsoleTextAttribute(hConsole, 7);
 printf("     ---------------------");
SetConsoleTextAttribute(hConsole, 10);
printf("=");
SetConsoleTextAttribute(hConsole, 12);
printf("**");
SetConsoleTextAttribute(hConsole, 10);
printf("=");
SetConsoleTextAttribute(hConsole, 7);
printf("---------------------\n");
}

void lin()
{
HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, 7);
printf("			+");
}

void header()
{
HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
system("CLS");
delay(1);
printf("\n			");
for(int a=0;a<73;a++)
{
	printf("+");
}
delay(1);
printf("\n");
lin();
printf("						");
lin();
printf("\n");
//Print dake mi yang
//First line
lin();
SetConsoleTextAttribute(hConsole, 4);
printf("			**** ");
printf("	 *** ");
printf("	*   *");
printf("	*****");
lin();
printf("\n");
delay(1);
//Second line
lin();
SetConsoleTextAttribute(hConsole, 4);
printf("			*   *");
printf("	*   *");
printf("	*  * ");
printf("	*    ");
lin();
printf("\n");
delay(1);
//Third line
lin();
SetConsoleTextAttribute(hConsole, 4);
printf("			*   *");
printf("	*****");
printf("	***  ");
printf("	*****");
lin();
printf("\n");
delay(1);
//Forth line
lin();
SetConsoleTextAttribute(hConsole, 4);
printf("			*   *");
printf("	*   *");
printf("	*  * ");
printf("	*    ");
lin();
printf("\n");
delay(1);
//Fifth line
lin();
SetConsoleTextAttribute(hConsole, 4);
printf("			**** ");
printf("	*   *");
printf("	*   *");
printf("	*****");
lin();
printf("\n");
delay(1);
lin();
printf("						");
lin();
printf("\n");
//Sixth line
SetConsoleTextAttribute(hConsole, 7);
lin();
printf("				*   *");
printf("	*****	");
lin();
printf("\n");
delay(1);
//Seventh line
lin();
printf("				** **");
printf("	  *  	");
lin();
printf("\n");
delay(1);
//Eighth line
lin();
printf("				* * *");
printf("	  *  	");
lin();
printf("\n");
delay(1);
//Nineth line
lin();
printf("				*   *");
printf("	  *  	");
lin();
printf("\n");
delay(1);
//Tenth line
lin();
printf("				*   *");
printf("	*****	");
lin();
printf("\n");
delay(1);
lin();
printf("						");
lin();
printf("\n");
SetConsoleTextAttribute(hConsole, 4);
//Eleventh line
lin();
SetConsoleTextAttribute(hConsole, 4);
printf("			*   *");
printf("	 *** ");
printf("	*   *");
printf("	 *** ");
lin();
printf("\n");
delay(1);
//Twelveth line
lin();
SetConsoleTextAttribute(hConsole, 4);
printf("			 * * ");
printf("	*   *");
printf("	**  *");
printf("	*    ");
lin();
printf("\n");
delay(1);
//Thirtheenth line
lin();
SetConsoleTextAttribute(hConsole, 4);
printf("			  *  ");
printf("	*****");
printf("	* * *");
printf("	* ***");
lin();
printf("\n");
delay(1);
//Fortheenth line
lin();
SetConsoleTextAttribute(hConsole, 4);
printf("			  *  ");
printf("	*   *");
printf("	*  **");
printf("	*   *");
lin();
printf("\n");
delay(1);
//Fiftheenth line
lin();
SetConsoleTextAttribute(hConsole, 4);
printf("			  *  ");
printf("	*   *");
printf("	*   *");
printf("	 *** ");
lin();
printf("\n");
SetConsoleTextAttribute(hConsole, 7);
delay(1);
lin();
printf("						");
lin();
printf("\n");
printf("			");
for(int a=0;a<73;a++)
{
	printf("+");
}
printf("\n\n");
delay(1);
SetConsoleTextAttribute(hConsole, 12);
printf("			   <<Be survive the last player of all or get the most points to win>>		");
printf("\n						_ Project computer 2 _								");
delay(1);
printf("\n");
SetConsoleTextAttribute(hConsole, 7);
delay(3);

system("CLS");
//printf("	D   Y |	+ Board Game\n	A M A |+ Offine game\n	K I N |+Canplay many people\n	E   G | + Relax and fun game\n\n	G A M E");

}

void input8()
{
    printf("    +=-----------------------------------------------=*=-------------------------------------------------=+\n");
    printf("    |                        = How many player play in this game?(2-20) =                                 | \n");
    printf("    +=------------------------------------------------+--------------------------------------------------=+\n\n");
    printf("                                                Number of Player : ");
}
void input9()
{
    printf("    +=-----------------------------------------------=***=-----------------------------------------------=+\n");
    printf("    |              = Maximum number of play [Recommend : It Depend on number of player]                   | \n");
    printf("    +=-------------------------------------------------+-------------------------------------------------=+\n\n");
    printf("                                                Number of Playing : ");

}


void open_main()
{
HANDLE hConsole;
hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
system("CLS");
delay(1);
printf("\n			");
for(int a=0;a<73;a++)
{
	printf("+");
}
delay(1);
printf("\n");
line();
printf("						");
line();
printf("\n");
//Print dake mi yang
//First line
line();
SetConsoleTextAttribute(hConsole, 4);
printf("			**** ");
printf("	 *** ");
printf("	*   *");
printf("	*****");
line();
printf("\n");
delay(1);
//Second line
line();
SetConsoleTextAttribute(hConsole, 4);
printf("			*   *");
printf("	*   *");
printf("	*  * ");
printf("	*    ");
line();
printf("\n");
delay(1);
//Third line
line();
SetConsoleTextAttribute(hConsole, 4);
printf("			*   *");
printf("	*****");
printf("	***  ");
printf("	*****");
line();
printf("\n");
delay(1);
//Forth line
line();
SetConsoleTextAttribute(hConsole, 4);
printf("			*   *");
printf("	*   *");
printf("	*  * ");
printf("	*    ");
line();
printf("\n");
delay(1);
//Fifth line
line();
SetConsoleTextAttribute(hConsole, 4);
printf("			**** ");
printf("	*   *");
printf("	*   *");
printf("	*****");
line();
printf("\n");
delay(1);
line();
printf("						");
line();
printf("\n");
//Sixth line
SetConsoleTextAttribute(hConsole, 7);
line();
printf("				*   *");
printf("	*****	");
line();
printf("\n");
delay(1);
//Seventh line
line();
printf("				** **");
printf("	  *  	");
line();
printf("\n");
delay(1);
//Eighth line
line();
printf("				* * *");
printf("	  *  	");
line();
printf("\n");
delay(1);
//Nineth line
line();
printf("				*   *");
printf("	  *  	");
line();
printf("\n");
delay(1);
//Tenth line
line();
printf("				*   *");
printf("	*****	");
line();
printf("\n");
delay(1);
line();
printf("						");
line();
printf("\n");
SetConsoleTextAttribute(hConsole, 4);
//Eleventh line
line();
SetConsoleTextAttribute(hConsole, 4);
printf("			*   *");
printf("	 *** ");
printf("	*   *");
printf("	 *** ");
line();
printf("\n");
delay(1);
//Twelveth line
line();
SetConsoleTextAttribute(hConsole, 4);
printf("			 * * ");
printf("	*   *");
printf("	**  *");
printf("	*    ");
line();
printf("\n");
delay(1);
//Thirtheenth line
line();
SetConsoleTextAttribute(hConsole, 4);
printf("			  *  ");
printf("	*****");
printf("	* * *");
printf("	* ***");
line();
printf("\n");
delay(1);
//Fortheenth line
line();
SetConsoleTextAttribute(hConsole, 4);
printf("			  *  ");
printf("	*   *");
printf("	*  **");
printf("	*   *");
line();
printf("\n");
delay(1);
//Fiftheenth line
line();
SetConsoleTextAttribute(hConsole, 4);
printf("			  *  ");
printf("	*   *");
printf("	*   *");
printf("	 *** ");
line();
printf("\n");
SetConsoleTextAttribute(hConsole, 7);
delay(1);
line();
printf("						");
line();
printf("\n");
printf("			");
for(int a=0;a<73;a++)
{
	printf("+");
}
printf("\n\n");
delay(1);
SetConsoleTextAttribute(hConsole, 12);
printf("			   <<Be survive the last player of all or get the most points to win>>		");
printf("\n						_ Project computer 2 _								");
delay(1);
printf("\n");
SetConsoleTextAttribute(hConsole, 7);
delay(3);
//printf("	D   Y |	+ Board Game\n	A M A |+ Offine game\n	K I N |+Canplay many people\n	E   G | + Relax and fun game\n\n	G A M E");

}

//Dake Mai Yang V.1
void dake_mai_yang()
{
	printf("               _______________         ____________      _____     ____   ___________                	\n");
	printf("              |               \\       /            \\    |     |   /    | |           \\            	\n");
	printf("              |                \\     /      __      \\   |     |  /     | |       ____/             	\n");
	printf("              |     _____       \\   /      /  \\      \\  |     | /     /  |      |                 	\n");
	printf("              |    |     \\       | |      /    \\      | |     |/     /   |      |_____             	\n");
	printf("              |    |      \\      | |      |____|      | |           /    |            \\            	\n");
	printf("              |    |      /      | |       ____       | |           \\    |       _____/             	\n");
	printf("              |    |_____/       | |      /    \\      | |     |\\     \\   |      |                 	\n");
	printf("              |                 /  |     |      |     | |     | \\     \\  |      |____              	\n");
	printf("              |                /   |     |      |     | |     |  \\     | |           \\             	\n");
	printf("              |_______________/    |_____|      |_____| |_____|   \\____| |___________/              	\n");
	printf("                                                                                                     	\n");
	printf("               ______          ______   __________________                                           	\n");
	printf("              |      \\        /      | |                  |                                          	\n");
	printf("              |       \\      /       | |                  |                                          	\n");
	printf("              |        \\    /        | |_____        _____|                                          	\n");
	printf("              |         \\__/         |       |      |                                                	\n");
	printf("              |     |\\        /|     |       |      |                                                	\n");
	printf("              |     | \\      / |     |       |      |                                                	\n");
	printf("              |     |  \\____/  |     |  _____|      |_____                                           	\n");
	printf("              |     |          |     | |                  |                                          	\n");
	printf("              |     |          |     | |                  |                                          	\n");
	printf("              |_____|          |_____| |__________________|                                          	\n");
	printf("                                                                                                     	\n");
	printf("               ______           ______      ____________      _____      _____   ________________    	\n");
	printf("              |      \\         /      |    /            \\    |     \\    |     | |                |   \n");
	printf("              |        \\      /       |   /      __      \\   |      \\   |     | |     ______     |   \n");
	printf("               \\        \\____/       /   /      /  \\      \\  |       \\  |     | |    |      |    | \n");
	printf("                \\                   /   |      /    \\      | |        \\ |     | |    |      |____|   \n");
	printf("                 \\                 /    |      |____|      | |         \\|     | |    |    _________  	\n");
	printf("                  \\____       ____/     |       ____       | |                | |    |   |         | 	\n");
	printf("                       |     |          |      /    \\      | |     |\\         | |    |   |__     __| 	\n");
	printf("                       |     |          |     |      |     | |     | \\        | |    |______|   |    	\n");
	printf("                       |     |          |     |      |     | |     |  \\       | |               |    	\n");
	printf("                       |_____|          |_____|      |_____| |_____|   \\______| |_______________|   	\n");
	printf("                                                                                                      	\n");
	printf("\n\n");
}


//Define Board Create Function
void constructboard(board board_input[][100],int board_size){
    //Set Main Board
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            board_input[i][j].timecount = -1;
            board_input[i][j].user = '0';
        }
    }
    //Set Used Board
    for(int i=1;i<=board_size;i++){
        for(int j=1;j<=board_size;j++){
            board_input[i][j].timecount = 0;
        }
    }
}


//Define Board Processing Function
void process(board board_input[][100],int y_process,int x_process,char user_input,int x_prev,int y_prev){

    if(board_input[x_process][y_process].timecount==-1){
        process(board_input,x_prev,y_prev,user_input,x_process,y_process);
        return;
    }

    //1st Condition
    if(board_input[x_process][y_process].timecount<=2){
        board_input[x_process][y_process].timecount += 1;
        board_input[x_process][y_process].user = user_input;
        return;
    }

    //2nd Condition
    if(board_input[x_process][y_process].timecount==3){
        board_input[x_process][y_process].timecount = 0;
        board_input[x_process][y_process].user='0';
        process(board_input,y_process,x_process+1,user_input,y_process,x_process);
        process(board_input,y_process+1,x_process,user_input,y_process,x_process);
        process(board_input,y_process,x_process-1,user_input,y_process,x_process);
        process(board_input,y_process-1,x_process,user_input,y_process,x_process);
    }

}

//Define Print Board Function
void board_print(board board_input[][100],int board_size){

    //Clear Screen
    system("CLS");

    printf("     ");

    for(int i=1;i<=( (board_size));i++){

        if(i>=10){
            printf("%d  ",i);
        }else{
            printf(" %d  ",i);
        }
    }

    printf("\n");

    printf("     ");

    for(int i=1;i<=( (board_size));i++){
        printf("__  ");
    }
    printf("\n\n");

    for(int i=1;i<=board_size;i++){

        if(i>=10){
            printf("%d | ",i);
        }else{
            printf(" %d | ",i);
        }

        for(int j=1;j<=board_size;j++){
            if(board_input[i][j].timecount==0){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),96);
                printf("--");
            }else if(board_input[i][j].timecount==-1){
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),64);
                printf("##");
            }else{
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),112);
                printf("%d%c",board_input[i][j].timecount,board_input[i][j].user);
            }
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

            if(j!=board_size)printf("  ");
        }

        if(i>=10){
            printf(" | %d",i);
        }else{
            printf(" |  %d",i);
        }

        if(i!=board_size)printf("\n\n");
        else printf("\n");
    }

    printf("     ");

    for(int i=1;i<=( (board_size));i++){
        printf("__  ");
    }

    printf("\n");

    printf("     ");

    for(int i=1;i<=( (board_size));i++){

        if(i>=10){
            printf("%d  ",i);
        }else{
            printf(" %d  ",i);
        }
    }

    printf("\n\n");

}


//Process Each Time
void process_each_time(board board_input[][100],int x_input,int y_input,char user_input,int board_limit){
    //Process for each condition
    process(board_input,x_input,y_input,user_input,x_input,y_input);
    //Print
    board_print(board_input,board_limit);
}

void create_obstruct(board board_input[][100],int board_limit){

    printf("Do you want to add obstruct[s] [Y/N] : ");

    char drop_ent; scanf("%c",&drop_ent);

    //Yes or No
    char input; scanf("%c",&input);

    if(input=='Y'){
            input2();
        printf("How many obstruct do you want to add [1-any] : ");

        //Number of Obstruct
        int input_obs; scanf("%d",&input_obs);

        for(int i=1;i<=input_obs;i++){

            board_print(board_input,board_limit);

            printf(" - Obstruct Number %d from %d - \n",i,input_obs);
            printf("Input Coordinate X,Y : ");

            //Drop_Enter
            char drp_ent; scanf("%c",&drp_ent);

            //Input Coordinate
            int x_axis,y_axis,comma;

            scanf("%d%c%d",&y_axis,&comma,&x_axis);

            board_input[x_axis][y_axis].timecount = -1;

            system("CLS");

        }

        printf("After You add Obstruct\n");

        board_print(board_input,board_limit);


    }else if(input='N'){
        printf("You don't add any obstruct FINE!\n");
    }else{
        printf("Input is unvalid please input again!!\n");
        create_obstruct(board_input,board_limit);
    }
    delay(2);
    system("CLS");
    board_print(board_input,board_limit);
}

char switchcase_turn(int number_of_play,int number_of_player,user character_of_user[]){

    switch(number_of_play%number_of_player)
        {
            case 0:
                printf("%s ; Your Turn!!\n",character_of_user[1].name);
                return character_of_user[1].cha;
                break;
            case 1:
                printf("%s ; Your Turn!!\n",character_of_user[2].name);
                return character_of_user[2].cha;
                break;
            case 2:
                printf("%s ; Your Turn!!\n",character_of_user[3].name);
                return character_of_user[3].cha;
                break;
            case 3:
                printf("%s ; Your Turn!!\n",character_of_user[4].name);
                return character_of_user[4].cha;
                break;
            case 4:
                printf("%s ; Your Turn!!\n",character_of_user[5].name);
                return character_of_user[5].cha;
                break;
            case 5:
                printf("%s ; Your Turn!!\n",character_of_user[6].name);
                return character_of_user[6].cha;
                break;
            case 6:
                printf("%s ; Your Turn!!\n",character_of_user[7].name);
                return character_of_user[7].cha;
                break;
            case 7:
                printf("%s ; Your Turn!!\n",character_of_user[8].name);
                return character_of_user[8].cha;
                break;
            case 8:
                printf("%s ; Your Turn!!\n",character_of_user[9].name);
                return character_of_user[9].cha;
                break;
            case 9:
                printf("%s ; Your Turn!!\n",character_of_user[10].name);
                return character_of_user[10].cha;
                break;
            case 10:
                printf("%s ; Your Turn!!\n",character_of_user[11].name);
                return character_of_user[11].cha;
                break;
            case 11:
                printf("%s ; Your Turn!!\n",character_of_user[12].name);
                return character_of_user[12].cha;
                break;
            case 12:
                printf("%s ; Your Turn!!\n",character_of_user[13].name);
                return character_of_user[13].cha;
                break;
            case 13:
                printf("%s ; Your Turn!!\n",character_of_user[14].name);
                return character_of_user[14].cha;
                break;
            case 14:
                printf("%s ; Your Turn!!\n",character_of_user[15].name);
                return character_of_user[15].cha;
                break;
            case 15:
                printf("%s ; Your Turn!!\n",character_of_user[16].name);
                return character_of_user[16].cha;
                break;
            case 16:
                printf("%s ; Your Turn!!\n",character_of_user[17].name);
                return character_of_user[17].cha;
                break;
            case 17:
                printf("%s ; Your Turn!!\n",character_of_user[18].name);
                return character_of_user[18].cha;
                break;
            case 18:
                printf("%s ; Your Turn!!\n",character_of_user[19].name);
                return character_of_user[19].cha;
                break;
            case 19:
                printf("%s ; Your Turn!!\n",character_of_user[20].name);
                return character_of_user[20].cha;
                break;
            case 20:
                printf("%s ; Your Turn!!\n",character_of_user[21].name);
                return character_of_user[21].cha;
                break;
            default:
                printf("Error");
        }
}

int ending_process(board board_input[][100],int board_limit,int number_of_player,user user_info[],int max_number_of_play){
    //Reseting Checking Value
    for(int z=1;z<25;z++){
        user_info[z].check=0;
    }

    //Adding for Ending
    for(int i=1;i<100;i++){
        for(int j=1;j<100;j++){
            //Checking each user
                for(int z=1;z<25;z++){
                    if(user_info[z].cha==board_input[i][j].user){
                        user_info[z].check++;
                    }
                }
        }
    }
    //Summary for Ending
    int check_for_ending=0;
    for(int z=1;z<25;z++){
        if(user_info[z].check!=0)check_for_ending+=1;
    }

    //Checking for ending
    if(check_for_ending==1||check_for_ending==0){
        printf("!!Game Over!!\n\n");
        return 1;
    }
}

int first_time_mode_1(board board_input[][100],int number_of_play,int number_of_player,user user_info[25],int board_limit,int max_number_of_play){

    int x_recieve,y_recieve;
    char user_turn;

    for(int i=1;i<=number_of_player;i++){

        printf(" - Time of play %d from %d - \n",number_of_play+1,max_number_of_play);

        user_turn = switchcase_turn(number_of_play,number_of_player,&user_info[0]);

        printf("X axis : ");
        scanf("%d",&x_recieve);

        printf("Y axis : ");
        scanf("%d",&y_recieve);

        //Debug
//        printf("Debug1");

        while(board_input[y_recieve][x_recieve].timecount==-1||(board_input[y_recieve][x_recieve].user!=user_turn&&board_input[y_recieve][x_recieve].user!='0')){

            //Debug
            ////printf("Debug2");

            if(board_input[y_recieve][x_recieve].timecount==-1){

                printf("You Enter Hit wall or obstruct\nPlease Enter Coordinate Again!!\n");

                printf("X axis : ");
                scanf("%d",&x_recieve);

                printf("Y axis : ");
                scanf("%d",&y_recieve);
            }else if(board_input[y_recieve][x_recieve].user!=user_turn&&board_input[y_recieve][x_recieve].user!='0'){

                printf("Your Enter is not available for you\nPlease Enter again!!!\n");

                //Debug

                ////printf("Error : Board_input.user is %c and input is %c\n",board_input[x_rec]);

                //Debug

                printf("X axis : ");
                scanf("%d",&x_recieve);

                printf("Y axis : ");
                scanf("%d",&y_recieve);

            }

        }

        //Debug
       // printf("Debug");

        process_each_time(board_input,x_recieve,y_recieve,user_turn,board_limit);

        //Debug
        //printf("Debug");

        number_of_play += 1;

    }

    return number_of_play;
}

void information_player(char a[],int b,int c)
{
	printf("Name is %s",a);

	HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	printf("\n\n	+---+---+---+- ");
	SetConsoleTextAttribute(hConsole, 9);
	printf("INFORMATION OF PLAYER");
	SetConsoleTextAttribute(hConsole, 15);
	printf(" -+---+---+---+  \n\n\n");
	SetConsoleTextAttribute(hConsole, 12);
	delay(1);
	printf(" SSSSS CCCC OOOO RRRR  EEEE             \n");
	delay(1);
	printf(" S     C    O  O R   R E     00         \n");
	delay(1);
	printf(" SSSSS C    O  O RRRR  EEEE             \n");
	delay(1);
	printf("     S C    O  O R  R  E     00         \n");
	delay(1);
	printf(" SSSSS CCCC OOOO R   R EEEE             \n\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf(" \t------->  ");
	printf("%d", b);
	printf(" <-------\n\n");
	SetConsoleTextAttribute(hConsole, 13);
	delay(1);
	printf(" TTTTT IIIII  M   M   EEEE       \n");
	delay(1);
	printf("   T     I   M M M M  E     00   \n");
	delay(1);
	printf("   T     I   M  M  M  EEEE       \n");
	delay(1);
	printf("   T     I   M     M  E     00   \n");
	delay(1);
	printf("   T   IIIII M     M  EEEE       \n\n");
	SetConsoleTextAttribute(hConsole, 15);
	printf(" \t------->  ");
	printf("%d", c);
	printf(" <-------\n\n");



}

//Function in mode 1

void main_process_mode_1(board board_input[][100],int board_limit,int number_of_player,user user_info[],int max_number_of_play,user_buffer user_dataset){

    //Structure of Program
    int x_recieve,y_recieve;
    int number_of_play=0;
    char user_turn;
    char user_name[50];

    number_of_play = first_time_mode_1(board_input,number_of_play,number_of_player,&user_info[0],board_limit,max_number_of_play);

    do{
        printf(" - Time of play %d from %d - \n",number_of_play+1,max_number_of_play);

        user_turn = switchcase_turn(number_of_play,number_of_player,&user_info[0]);

        printf("X axis : ");
        scanf("%d",&x_recieve);

        printf("Y axis : ");
        scanf("%d",&y_recieve);

        while(board_input[y_recieve][x_recieve].timecount==-1||board_input[y_recieve][x_recieve].user!=user_turn){

            if(board_input[y_recieve][x_recieve].timecount==-1){

                printf("You Enter Hit wall or obstruct\nPlease Enter Coordinate Again!!\n");

                printf("X axis : ");
                scanf("%d",&x_recieve);

                printf("Y axis : ");
                scanf("%d",&y_recieve);
            }else if(board_input[y_recieve][x_recieve].user!=user_turn){

                printf("Your Enter is not available for you\nPlease Enter again!!!\n");

                //Debug

                ////printf("Error : Board_input.user is %c and input is %c\n",board_input[x_rec]);

                //Debug

                printf("X axis : ");
                scanf("%d",&x_recieve);

                printf("Y axis : ");
                scanf("%d",&y_recieve);

            }

        }

        process_each_time(board_input,x_recieve,y_recieve,user_turn,board_limit);

        if(number_of_play+1==max_number_of_play){
            break;
        }

        if(ending_process(board_input,board_limit,number_of_player,&user_info[0],max_number_of_play)==1){
            return;
        }

        number_of_play += 1;
    }while(x_recieve!=0&&y_recieve!=0);

}




//Function in mode 2
void main_process_mode_2(board board_input[][100],int board_limit,int number_of_player,user user_info[],int max_number_of_play, user_buffer user_dataset){

    //Structure of Program
    int x_recieve,y_recieve;
    int number_of_play=0;
    char user_turn;
    char user_name[50];

    max_number_of_play = 100000;

    number_of_play = first_time_mode_1(board_input,number_of_play,number_of_player,&user_info[0],board_limit,max_number_of_play);

    do{
        printf(" - Time of play %d from %d - \n",number_of_play+1,max_number_of_play);

        user_turn = switchcase_turn(number_of_play,number_of_player,&user_info[0]);

        printf("X axis : ");
        scanf("%d",&x_recieve);

        printf("Y axis : ");
        scanf("%d",&y_recieve);

        while(board_input[y_recieve][x_recieve].timecount==-1||board_input[y_recieve][x_recieve].user!=user_turn){

            if(board_input[y_recieve][x_recieve].timecount==-1){

                printf("You Enter Hit wall or obstruct\nPlease Enter Coordinate Again!!\n");

                printf("X axis : ");
                scanf("%d",&x_recieve);

                printf("Y axis : ");
                scanf("%d",&y_recieve);
            }else if(board_input[y_recieve][x_recieve].user!=user_turn){

                printf("Your Enter is not available for you\nPlease Enter again!!!\n");

                //Debug

                ////printf("Error : Board_input.user is %c and input is %c\n",board_input[x_rec]);

                //Debug

                printf("X axis : ");
                scanf("%d",&x_recieve);

                printf("Y axis : ");
                scanf("%d",&y_recieve);

            }

        }

        process_each_time(board_input,x_recieve,y_recieve,user_turn,board_limit);

        if(ending_process(board_input,board_limit,number_of_player,&user_info[0],max_number_of_play)==1){
            return;
        }


        number_of_play += 1;
    }while(x_recieve!=0&&y_recieve!=0);

}

//Function in mode 3


// informaton

int mode_selection(){

    system("CLS");

	input6();
	//Enter Game Mode
	char mode;
	mode = getch();

	switch(mode)
        {
            case '1':
                printf("You Enter is : End with Limit number play\n");
                delay(3);
                system("CLS");
                return 1;
                break;
            case '2':
                printf("You Enter is : End with have only one player left in board\n");
                delay(3);
                system("CLS");
                return 2;
                break;
            case '3':
                printf("You Enter is : End with time limit\n");
                delay(3);
                system("CLS");
                return 3;
                break;
            default:
                printf("Error : Input is %d ",mode);
                //Delay
                delay(3);
                return mode_selection();
        }

}

//File Processing
int file_finding(char user_input[50]){
    //File Bu
    char name_buffer[50];
    int score_buffer;
    int level_buffer;

    //Open File
    FILE *file_ptr;

    file_ptr = fopen("data.bin","rb");

  //  printf("Go though");

    while(fread(name_buffer,sizeof(name_buffer),1,file_ptr)){
        fread(&score_buffer,sizeof(score_buffer),1,file_ptr);
        fread(&level_buffer,sizeof(level_buffer),1,file_ptr);

        //Compare for each time
        if(strcmp(name_buffer,user_input)==0){
            system("CLS");
            information_player(name_buffer,level_buffer,score_buffer);
            return 1;
        }

    }

    printf("!!User is unvalid!!");

    fclose(file_ptr);

    return 0;
}

//Update value to file
void update_file_value(int number_of_participant,user_buffer user_dataset[],int number_of_user_dataset,int olo){

    FILE *file_ptr;

    file_ptr = fopen("data.bin","wb");

    //printf("Number of %d",number_of_participant);

    //printf("OLO : %d",olo);

    for(int i=1;i<=olo;i++){

        //printf("user_dataset[i].name : %s",user_dataset[i].name);

        fwrite(user_dataset[i].name,sizeof(user_dataset[i].name),1,file_ptr);
        fwrite(&user_dataset[i].time_count,sizeof(user_dataset[i].time_count),1,file_ptr);
        fwrite(&user_dataset[i].level,sizeof(user_dataset[i].level),1,file_ptr);

       // printf("Kuay");
    }

    fclose(file_ptr);

}

//reading all file
int reading_all_file(user_buffer user_dataset[]){

    //Run numbering
    int i=1;

    //Open File
    FILE *file_ptr;

    file_ptr = fopen("data.bin","rb");

    while(fread(user_dataset[i].name,sizeof(user_dataset[i].name),1,file_ptr)){
        fread(user_dataset[i].time_count,sizeof(user_dataset[i].time_count),1,file_ptr);
        fread(user_dataset[i].level,sizeof(user_dataset[i].level),1,file_ptr);
        i++;
    }

    //printf("!!User is unvalid!!");

    fclose(file_ptr);

    return i-1;
}

//Summary Score and update it to binary file
void calculate_score_show_result(board board_input[][100],int board_limit,int number_of_player,user user_info[],int max_number_of_play,user_buffer user_dataset[],int number_of_user_dataset){

    //Create Score for sorting
    int set_of_score[25]; int run_set_of_score[25];
	name_score name_score_buffer[25];
	name_score name_score_buffer_new[25];

    //Sum-Up the score
    for(int i=1;i<=board_limit;i++){

        for(int j=1;j<=board_limit;j++){

            for(int z=1;z<=number_of_player;z++){
                if(board_input[i][j].user==user_info[z].cha){
                    user_info[z].score += board_input[i][j].timecount;
                }
            }

        }

    }

	//Claer name_score_buffer
	for(int i=0;i<25;i++){

		strcpy(name_score_buffer[i].name,"\0");
		name_score_buffer[i].score = 0;

	}

    //Print Output
    for(int i=1;i<=number_of_player;i++){
        printf("Name : %s\n",user_info[i].name);
        printf("Score : %d\n",user_info[i].score);

        //Add score into score array
        strcpy(name_score_buffer[i].name,user_info[i].name);
        name_score_buffer[i].score = user_info[i].score;

        printf("\n");
    }


	//Sort Function
    // OLD -> Sort : qsort(arr, N, sizeof(int), compare);
	for(int i=0;i<25;i++){

		//Define
		pair_int max_of_player;
		max_of_player.number1 = 0;
		max_of_player.number2 = 0;
		//Define

		for(int j=0;j<25;j++){

			if((max_of_player.number1<name_score_buffer[j].score&&name_score_buffer[j].score!=-1)&(strcmp(name_score_buffer[j].name,"\0")!=0)){
				max_of_player.number1 = name_score_buffer[j].score;
				max_of_player.number2 = j;



			}


		}

		strcpy(name_score_buffer_new[i].name,name_score_buffer[max_of_player.number2].name);
		name_score_buffer_new[i].score = name_score_buffer[max_of_player.number2].score;

		name_score_buffer[max_of_player.number2].score = -1;


	}


    //checking and update fie in user_dataset
    for(int i=1;i<=number_of_user_dataset;i++){

        for(int j=1;j<=number_of_player;j++){

                //printf("%s , %s\n",user_info[j].name,user_dataset[i].name);

            if(strcmp(user_info[j].name,user_dataset[i].name)==0){

                //printf("0");
                user_info[j].OK = 10;
                user_dataset[i].time_count += 1;

                if(strcmp(name_score_buffer_new[0].name,user_info[j].name)==0){
                   user_dataset[i].level += 1;
                }

            }

            //printf("%s , %s , %d , %d\n",user_info[j].name,user_dataset[i].name,user_info[j].OK,j);

        }

    }


    int i=1;

    for(int j=1;j<=number_of_player;j++){
        if(user_info[j].OK!=10){

            user_info[j].OK = 10;
            user_dataset[number_of_user_dataset+i].time_count = 1;

            strcpy(user_dataset[number_of_user_dataset+i].name,user_info[j].name);


            //Debug

            //printf("Update Data");
            //printf("Name %s Time count %d i %d\n",user_dataset[number_of_user_dataset+i].name,user_dataset[number_of_user_dataset+i].time_count,number_of_user_dataset+i);

            //Debug

            if(strcmp(user_info[j].name,name_score_buffer_new[0].name)==0){
                user_dataset[i].level += 1;
            }

            //printf("%s , %s\n",user_info[j].name,user_dataset[i].name);

            i++;
        }
    //    printf("%s , %s , %d , %d\n",user_info[j].name,user_dataset[number_of_user_dataset+i].name,user_info[j].OK,j);
    }

    int olo = number_of_user_dataset+i-1;

    printf(":: The winner is %s and score is %d ::",name_score_buffer_new[0].name,name_score_buffer_new[0].score);


    for(int i=1;i<=2;i++){
      //  printf("\n%s,%d\n",user_dataset[i].name,user_dataset[i].level);
    }

  //  printf("umber0fue %d",number_of_user_dataset);

    //Updating Score in FILE
    update_file_value(number_of_user_dataset,user_dataset,number_of_user_dataset,olo);
}

int mode_3(int board_limit,int number_of_player,board board_main[][100],user user_info[],int max_number_of_play,user_buffer user_dataset[],int number_of_user_dataset){

    char mode;
   // header();
    input3();

    mode = getch();

    //scanf("%c",&mode);
    switch(mode)
        {
            case '1':
                printf("Start New Game!!\n");
                delay(3);
                system("CLS");

                //Input Setting from user
                input8();

                scanf("%d",&number_of_player);
                delay(1);
                system("CLS");

                //Create user_info dataframe
                for(int i=1;i<=number_of_player;i++){
                    printf("--Player %d Info--\n",i);
                    printf("Player %d name : ",i);

                    /*Avoid Enter*/
                    char avi; scanf("%c",&avi);

                    fgets(user_info[i].name,50,stdin);
                    /*Delete Enter @ the end of game*/
                    user_info[i].name[strlen(user_info[i].name)-1] = 0;
                    printf("Player %d Character : ",i);
                    scanf("%c",&user_info[i].cha);
                    system("CLS");
                }
                //Define Mode
                int mode;
                mode = mode_selection();

                //Receive Board Limit
                input1();
                scanf("%d",&board_limit);
                system("CLS");
                //Receive max_number of play
                input9();
                scanf("%d",&max_number_of_play);

                //Construct Board
                constructboard(&board_main[0][0],board_limit);

                //First Print
                board_print(&board_main[0][0],board_limit);

                //Create Obstruct
                create_obstruct(&board_main[0][0],board_limit);

                //Reading all User Dataset
                number_of_user_dataset = 0;
                //reading_all_file(&user_dataset[0]);

                switch(mode)
                    {
                        case 1:
                            main_process_mode_1(&board_main[0][0],board_limit,number_of_player,&user_info[0],max_number_of_play,user_dataset[100]);
                            break;
                        case 2:
                            main_process_mode_2(&board_main[0][0],board_limit,number_of_player,&user_info[0],max_number_of_play,user_dataset[100]);
                            break;
                        case 3:
                            //main_process_mode_3(&board_main[0][0],board_limit,number_of_player,&user_info[0],max_number_of_play);
                            break;
                        default:
                            printf("Error");
                    }

                calculate_score_show_result(&board_main[0][0],board_limit,number_of_player,&user_info[0],max_number_of_play,&user_dataset[0],number_of_user_dataset);


                return 1;
                break;
            case '2':
                printf("Continued\n");
                delay(3);
                system("CLS");

                //Input Setting from user
                input8();
                scanf("%d",&number_of_player);
                system("CLS");

                //Create user_info dataframe
                for(int i=1;i<=number_of_player;i++){
                    printf("--Player %d Info--\n",i);
                    printf("Player %d name : ",i);

                    /*Avoid Enter*/
                    char avi; scanf("%c",&avi);

                    fgets(user_info[i].name,50,stdin);
                    /*Delete Enter @ the end of game*/
                    user_info[i].name[strlen(user_info[i].name)-1] = 0;
                    printf("Player %d Character : ",i);
                    scanf("%c",&user_info[i].cha);
                    system("CLS");
                }

                //Define Mode
                int mode1;
                mode1 = mode_selection();

                //Receive Board Limit
                input1();
                scanf("%d",&board_limit);

                //Receive max_number of play
                input9();
                scanf("%d",&max_number_of_play);

                //Construct Board
                constructboard(&board_main[0][0],board_limit);

                //First Print
                board_print(&board_main[0][0],board_limit);

                //Create Obstruct
                create_obstruct(&board_main[0][0],board_limit);

                //Reading all User Dataset
                number_of_user_dataset = reading_all_file(&user_dataset[0]);

                switch(mode1)
                    {
                        case 1:
                            main_process_mode_1(&board_main[0][0],board_limit,number_of_player,&user_info[0],max_number_of_play,user_dataset[100]);
                            break;
                        case 2:
                            main_process_mode_2(&board_main[0][0],board_limit,number_of_player,&user_info[0],max_number_of_play,user_dataset[100]);
                            break;
                        case 3:
                            //main_process_mode_3(&board_main[0][0],board_limit,number_of_player,&user_info[0],max_number_of_play);
                            break;
                        default:
                            printf("Error");
                    }

                calculate_score_show_result(&board_main[0][0],board_limit,number_of_player,&user_info[0],max_number_of_play,&user_dataset[0],number_of_user_dataset);



                return 2;
                break;
            case '3':
                printf("!-Find Score-!\n");
                delay(3);
				system("CLS");


                char dropppp;
                scanf("%c",&dropppp);

                printf("\n--Input Name--\n: ");

                char name_input_find[50];
                fgets(name_input_find,50,stdin);

				system("CLS");

                //Debug


                /*Delete Enter @ the end of game*/
                name_input_find[strlen(name_input_find)-1] = 0;

                printf("%s",name_input_find);

                file_finding(name_input_find);

                delay(3);

                system("CLS");
                return 3;
                break;
            case '4':
                system("CLS");

				printf("\n!!Thank You!!\n");
                delay(1);

                return 4;
                break;
            default:
                printf("Error : Input is %d ",mode);
                //Delay
                delay(3);
                system("CLS");
                return 1;
        }

}

//Main Function
//  ||
//  ||
//  XX : T H I S IS  "MAIN"
int main(){

	//Interface Opening
	/*open_main();
	delay(2);
	system("CLS");
	dake_mai_yang();
	delay(2);
	system("CLS");*/
	//Interface Opening

    //Define Initial Condition
    while(1)
    {
    int board_limit,number_of_player;
    board board_main[100][100];
    user user_info[25];
    int max_number_of_play;
    user_buffer user_dataset[100];
    int number_of_user_dataset;

    //Main Mode Game
    if(mode_3(board_limit,number_of_player,&board_main[0][0],user_info,max_number_of_play,user_dataset,number_of_user_dataset)==4)return 0;
    }
    return 0;
}
