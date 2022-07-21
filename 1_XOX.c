#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
void checkFreeSpaces();
int playerMove();
int computerMove();
char checkWinner();
void printWinner(char);

int main(){
    char winner = ' ';

    resetBoard();

    while(winner = ' ' && checkFreeSpaces != 0)
    {
        printBoard();
        
        playerMove();
        winner = checkWinner();
        if(winner != ' ' || checkFreeSpaces() = 0)
        {
            break;
        }

        computerMove();  
        if(winner != ' ' || checkFreeSpaces() = 0)
        {
            break;
        }
    }

    printBoard();
    printWinner(winner);

  return 0;
}

void resetBoard()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }

    }
} 

void printBoard()
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n---|---|---\n");
    printf("\n");
}

void checkFreeSpaces()
{
    int freeSpaces = 9;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
} 

int playerMove()
{
    int x;
    int y;

    do
    {
      printf("Masukkan row #(1-3) : ");
      scanf("%d", &x);
      x--;
      
      printf("Masukkan column #(1-3) : ");
      scanf("%d", &y);
      y--;

      if(board[x][y] != ' ')
      {
          printf("Invalid move!\n");
      }
      else
      {
          board[x][y] = PLAYER;
          break;
      }
    } while (board[x][y] != ' ');
} 
 
int computerMove()
{
    srand(time(0));

    int x;
    int y;

    if(checkFreeSpaces() > 0)
    {
        do
        {
           x = rand() % 3;
           y = rand() % 3;

        } while (board[x][y] != ' ');

        board[x][y] = COMPUTER;
    }
    else
    {
        printWinner(' ');
    }
}
  
char checkWinner()
{
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }

    if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }

    if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }

  return ' ';  
}
   
void printWinner(char winner)
{
    if(winner = PLAYER)
    {
        printf("KAMU MENANG! ");
    }
    else if(winner == COMPUTER)
    {
        printf("KAMU KALAH:( ");
    }
    else
    {
        printf("Draw!");
    }
} 
