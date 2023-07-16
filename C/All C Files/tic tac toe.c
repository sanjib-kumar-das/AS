#include <stdio.h>
int main (void)
{
	int player = 1;
	int winner = 0;
	int choice = 0;
	int row = 0;
	int column = 0;
	int line = 0;
	int i=0,flag=0;
	char board [3][3] = {

					  		{'1','2','3'},
					  		{'4','5','6'},
					  		{'7','8','9'}

						};

for (i = 0; i<9 ; i++)

	 {

		printf("\n\n");
		printf("\t%c | %c | %c\n\t--|---|--\n\t%c | %c | %c\n\t--|---|--\n\t%c | %c | %c\n", board[0][0], board[0][1], board[0][2],board[1][0], board[1][1], board[1][2],board[2][0], board[2][1], board[2][2]);
	
		printf("\nPlayer %d, please enter the number of the square where you want to place your %c: ",player,(player==1)?'X':'O');
			scanf("%d", &choice);
			row = --choice/3;
			column = choice%3;
				
		if(board[row][column]=='X'|| board[row][column]=='O'|| choice<1 && choice>9)
		{
			printf("Invalid square selection...");
			i--;
			continue;
		}		
		
		board[row][column] = (player == 1) ? 'X' : 'O';
		
		if((board[0][0]==board[1][1] && board[0][0]==board[2][2]) || (board[0][2]==board[1][1] && board[0][2]==board[2][0]))
		{
			winner = player;
			break;
    	}
		else
		{
			flag=0;
            for(line = 0; line <=2; line++)
            {
				if((board[line][0]==board[line][1] && board[line][0]==board[line][2])|| (board[0][line]==board[1][line] && board[0][line]==board[2][line]))
				{
					  winner = player;
					  flag=1;
					  break;
			    }
		    }
		    
		    if(flag==1)
			     break;
	    }
		if(player==1)
			player=2;
		else if(player==2)
			player=1;

    }

			printf("\n\n");
			printf("\t%c | %c | %c\n\t--|---|--\n\t%c | %c | %c\n\t--|---|--\n\t%c | %c | %c\n", board[0][0], board[0][1], board[0][2],board[1][0], board[1][1], board[1][2],board[2][0], board[2][1], board[2][2]);
			if(winner==0)
				printf("\n\nThe game is a draw\n");
            else
				printf("Player %d has won\n", winner);
			return 0;

}

