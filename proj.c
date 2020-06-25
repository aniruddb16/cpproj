#include <stdio.h>
#include <stdlib.h>

//globals

char question_pool[10][200]={"first question \n(a)option a \t\t\t (b)option b\n(c)option c \t\t\t (d)option d\n","q2","q3","q4","q5","q6","q7","q8","q9","q10"};
char question_pool_fiftyfifty[10][200]={"q1f","q2f","q3f","q4f","q5f","q6f","q7f","q8f","q9f","q10f"};
char answer_pool[10]={'a','b','c','d','d','c','b','a','a','b'};
char question_flipquestion[1][200]={"bq"};
char question_flipquestion_fiftyfifty[1][200]={"bqf"};
char answer_flipquestion='c';
int prize_money_pool[10]={100,200,300,400,500,600,700,800,900,1000};
int prize_money=0;
int flag_wrong_answer=0;
char option;
int lifeline_fiftyfifty=0;
int lifeline_flipquestion=0;
int lifelines_left;
int i;
int questions_left;
int exit_status=0;

void reset_globals()
{
  prize_money=0;
  flag_wrong_answer=0;
  lifeline_fiftyfifty=0;
  lifeline_flipquestion=0;
  lifelines_left=2;
  exit_status=0;
}
void winscreen()
{
  printf("congratulations! Your answer_poolwer is correct! \n");
	printf("your prize money is %d \n",prize_money);
  if(lifeline_fiftyfifty==0 &&lifeline_flipquestion==0)
    lifelines_left=2;
  else if (lifeline_fiftyfifty==0 &&lifeline_flipquestion==1)
    lifelines_left=1;
  else if (lifeline_fiftyfifty==1 &&lifeline_flipquestion==0)
    lifelines_left=1;
  else
    lifelines_left=0;
	printf("lifelines left: %d \n",lifelines_left);
	printf("question_pooltions left: %d\n",q);
  getchar();
  system("clear");
}


void gamewon()
{
	printf("congratulations! You have won the game! \n");
	printf("your prize money is %d \n",prize_money);
}


void lossscreen()
{
	char response;

	printf("That was the wrong answer_poolwer. \n \n Unfortunately this is the end of your game. \n \n Your prize money is Rs. %d \n \n", prize_money);
  printf("Press Q to quit or T to try again \n");
	scanf("%c", &response);
  getchar();
	if(response=='Q'||response=='q')
	{
		exit_status=1;
	}
	else if(response=='T'||response=='t')
	{
        exit_status=0;
	}
	else
	{
    printf("iNVALID RESPONSE");
    getchar();
    system("clear");
    lossscreen();}
}



int main()
{
  do{
  do {
    for ( i=0;i<=10;i++)
    { questions_left=10-(i+1);
      if(i==10)
      {
        gamewon();
        getchar();
        system("clear");
        exit(0);
      }
      puts(question_pool[i]);
      printf("\nEnter option : ");
      scanf("%c",&option);
      getchar();
      printf("\n");
      option=tolower(option);
      if (option=='e' && lifeline_fiftyfifty==0)
      {
        system("clear");
        puts(question_pool_fiftyfifty[i]);
        printf("\nEnter option : ");
        scanf("%c",&option);
        getchar();
        printf("\n");
        option=tolower(option);
        lifeline_fiftyfifty=1;
        if(option=='f' && lifeline_flipquestion==0)
          { lifeline_flipquestion=1;
            system("clear");
            puts(question_flipquestion);
            printf("\nEnter option : ");
            scanf("%c",&option);
            getchar();
            printf("\n");
            option=tolower(option);
            if(option==answer_flipquestion)
            {
              prize_money+=prize_money_pool[i];
              winscreen();
            }
            else
            {
              lossscreen();
              flag_wrong_answer=1;
              break;
            }}
        else if (option==answer_pool[i])
        {
          prize_money+=prize_money_pool[i];
          winscreen();
        }
        else
        {
          lossscreen();
          flag_wrong_answer=1;
          break;
        }

      }
      else if (option=='f' && lifeline_flipquestion==0)
      { lifeline_flipquestion=1;
        system("clear");
        puts(question_flipquestion);
        printf("\nEnter option : ");
        scanf("%c",&option);
        getchar();
        printf("\n");
        option=tolower(option);

        if (option=='e'&& lifeline_fiftyfifty==0)
        { lifeline_fiftyfifty=1;
          system("clear");
          puts(question_flipquestion_fiftyfifty);
          printf("\nEnter option : ");
          scanf("%c",&option);
          getchar();
          printf("\n");
          option=tolower(option);

          if(option==answer_flipquestion)
          {
            prize_money+=prize_money_pool[i];
            winscreen();
          }
          else
          {
            lossscreen();
            flag_wrong_answer=1;
            break;
          }}
        else if(option==answer_flipquestion)
        {
          prize_money+=prize_money_pool[i];
          winscreen();
        }
        else
        {
          lossscreen();
          flag_wrong_answer=1;
          break;
        }

      }

      else if(option==answer_pool[i])
      {
        prize_money+=prize_money_pool[i];
        winscreen();
      }

      else
      {
        lossscreen();
        flag_wrong_answer=1;
        break;
      }


    }system("clear");
  } while(flag_wrong_answer!=1);

reset_globals();
}while(exit_status!=1);

getchar();
system("clear");



  return 0;
}
