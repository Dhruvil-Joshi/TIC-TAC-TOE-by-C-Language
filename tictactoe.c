//This is a program for tic-tac-toe game
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>

int checkwin();          //To check which player won
void table();            //To draw table of game

char number[10]={'0','1','2','3','4','5','6','7','8','9'};

int main()
{   system("COLOR 37");  //To change colour of background and text
    int player=1,i,choice;
    char value;
do {
    table();
    player=(player%2)?1:2;
    printf("\n\nEnter the choice to make player %d : ",player);
    scanf("%d",&choice);
    if(player==1)
    {
        value='X';
    }
    if(player==2)
    {
        value='O';
    }
    if(choice==1&&number[1]=='1')
    number[1]=value;
    else if(choice==2&&number[2]=='2')
    number[2]=value;
    else if(choice==3&&number[3]=='3')
    number[3]=value;
    else if(choice==4&&number[4]=='4')
    number[4]=value;
    else if(choice==5&&number[5]=='5')
    number[5]=value;
    else if(choice==6&&number[6]=='6')
    number[6]=value;
    else if(choice==7&&number[7]=='7')
    number[7]=value;
    else if(choice==8&&number[8]=='8')
    number[8]=value;
    else if(choice==9&&number[9]=='9')
    number[9]=value;
    else
    {
        printf("Invalid choice entered !!!");
        player--;
        getch();
    }
    i=checkwin();
    player++;
}while(i==-1);
table();
 if(i==1)
 {
    printf("\n\n==>Player %d has won the game.",--player);
 }
 else
 {
    printf("\n\n==>The game is drawn between both players");
 }
    return 0;
 }

void table()            //Function for drawing table
{
    system("cls");      //To clear screen
    printf("\n\n\t Tic Tac Toe \n\n");
    printf("Player-1 (X) - Player-2 (O) \n\n\n");
    printf("    |    |    \n");
    printf("  %c |  %c |  %c  \n",number[1],number[2],number[3]);
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf("  %c |  %c |  %c  \n",number[4],number[5],number[6]);
    printf("____|____|____\n");
    printf("    |    |    \n");
    printf("  %c |  %c |  %c  \n",number[7],number[8],number[9]);
    printf("    |    |    \n");
}
int checkwin()         //Function to check win
{
    int j;
    if((number[1]==number[2]&&number[2]==number[3])||(number[4]==number[5]&&number[5]==number[6])||(number[7]==number[8]&&number[8]==number[9]))
    {
        return 1;            //Check row wise;
    }
    else if((number[1]==number[4]&&number[4]==number[7])||(number[2]==number[5]&&number[5]==number[8])||(number[3]==number[6]&&number[6]==number[9]))
    {
        return 1;            //Check column wise;
    }
    else if((number[1]==number[5]&&number[5]==number[9])||(number[3]==number[5]&&number[5]==number[7]))
    {
        return 1;            //Check diagonal wise;
    }
    else if(number[1]!='1'&&number[2]!='2'&&number[3]!='3'&&number[4]!='4'&&number[5]!='5'&&number[6]!='6'&&number[7]!='7'&&number[8]!='8'&&number[9]!='9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
