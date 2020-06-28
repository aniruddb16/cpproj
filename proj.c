#include <stdio.h>
#include <stdlib.h>


void openscreen()
{
printf("*******************WELCOME TO KAUN BANEGA CROREPATI************************* \n \n");
printf("**************The total number of questions are 10************************** \n \n");
printf("***************Intermediate question level is 4********************* \n \n");
printf("***************prize money for each question is Rs. 10,00,000***************\n \n");
printf("Lifelines available are \n 50-50: Two incorrect options will be eliminated and \n Flip the Question: A new question will be displayed to you. \n \n");
printf("DO YOU HAVE WHAT IT TAKES TO BE A CROREPATI??? \n \n Press any key to begin \n \n");
getchar();
system("clear");
}



//globals
char question_pool[10][200]={"Q1. Which is the world's most valuable currency in terms of exchange rate? \nA.	United States Dollar \t\t\tB.	Bahraini Dinar\nC.	Great Britain Pound \t\t\tD.	Kuwaiti Dinar\n",
"Q2. What is the national bird of the United States of America? \n A.	Peregrine falcon\t\t\tB.	Bald eagle \nC.	King vulture \t\t\tD.	Golden eagle \n",
"Q3. Which dog breed's name in Chinese translates to 'puffy lion dog' in English? \nA.	Lhasa Apso \t\t\tB.	Chow-Chow\nC.	Xiasi \t\t\tD.	Shih Tzu \n",
"Q4. Which Indian state suffered an oil spill which lead to wide spread destruction of wildlife in May 2020? \nA.	Mizoram \t\t\tB.	Meghalaya \nC.	Assam \t\t\tD.	Nagaland \n",
"Q5. What is the name of the facial recognition technology developed by Russia for monitoring school children? \nA.	Orwell \t\t\tB.	Simon \nC.	Watcher \t\t\tD.	Big Brother \n",
"Q6. Which of the following countries has not reported any positive coronavirus cases? \nA.	North Korea \t\t\tB.	Mongolia \nC.	Bosnia & Herzegovina \t\t\tD.	Azerbaijan \n",
"Q7. What is the fourth derivative of displacement with respect to time? \nA.	Pop \t\t\tB.	Crack \nC.	Snap \t\t\tD.	Jerk \n",
"Q8. Which of the following sports will NOT be making its debut in the Tokyo Olympics? \nA.	Skateboarding \t\t\tB.	Karate \nC.	Surfing \t\t\tD.	Baseball \n",
"Q9. Who is the governor of the Reserve Bank of India as of June 2020? \nA.	Urjit Patel \t\t\tB.	Shantikanta Das \nC.	Gita Gopinath \t\t\tD.	Bimal Jalan \n",
"Q10. Which of the following is an Abrahamic religion? \nA.	Rastafarianism \t\t\tB.	Zoroastrianism \nC.	Shintoism \t\t\tD.	Hinduism \n"};

//50-50 options
char question_pool_fiftyfifty[10][200]={"Q1. Which is the world's most valuable currency in terms of exchange rate? \nA.	 \t\t\tB.	Bahraini Dinar\nC.	 \t\t\tD.	Kuwaiti Dinar\n",
"Q2. What is the national bird of the United States of America? \n A.	\t\t\tB.	Bald eagle \nC.	 \t\t\tD.	Golden eagle \n",
"Q3. Which dog breed's name in Chinese translates to 'puffy lion dog' in English? \nA.	 \t\t\tB.	Chow-Chow\nC.	Xiasi \t\t\tD.	 \n",
"Q4. Which Indian state suffered an oil spill which lead to wide spread destruction of wildlife in May 2020? \nA.	Mizoram \t\t\tB.	 \nC.	Assam \t\t\tD.	 \nf",
"Q5. What is the name of the facial recognition technology developed by Russia for monitoring school children? \nA.	Orwell \t\t\tB.	 \nC.	Watcher \t\t\tD.	 \n",
"Q6. Which of the following countries has not reported any positive coronavirus cases? \nA.	North Korea \t\t\tB.	 \nC.	Bosnia & Herzegovina \t\t\tD.	 \n",
"Q7. What is the fourth derivative of displacement with respect to time? \nA.	 \t\t\tB.	Crack \nC.	Snap \t\t\tD.	 \n",
"Q8. Which of the following sports will NOT be making its debut in the Tokyo Olympics? \nA.	 \t\t\tB.	Karate \nC.	 \t\t\tD.	Baseball \n",
"Q9. Who is the governor of the Reserve Bank of India as of June 2020? \nA.	 \t\t\tB.	Shantikanta Das \nC.	 \t\t\tD.	Bimal Jalan \n",
"Q10. Which of the following is an Abrahamic religion? \nA.	Rastafarianism \t\t\tB.	Zoroastrianism \nC.	 \t\t\tD.	 \n"};

//answer key
char answer_pool[10]={'d','b','b','c','a','a','c','d','b','a'};

//flipped question
char question_flipquestion[1][200]={"Which of the following elements is named after the Scandinavian goddess of beauty and fertility? \nA.	Rhenium \t\t\tB.	Selenium \nC.	Vanadium \t\t\tD.	Erbium \n"};
//flipped question with 50-50 options
char question_flipquestion_fiftyfifty[1][200]={"Which of the following elements is named after the Scandinavian goddess of beauty and fertility? \nA.	 \t\t\tB.	Selenium \nC.	Vanadium \t\t\tD.	 \n"};
//answer to flipped question
char answer_flipquestion='c';

int prize_money_pool[10]={1000000,2000000,3000000,4000000,5000000,6000000,7000000,8000000,9000000,10000000};
int prize_money=0;
char option;
int lifeline_fiftyfifty=0;
int lifeline_flipquestion=0;
int lifelines_left;
int i;
int questions_left;
int exit_status=0;


void disp_ll()
{
  printf("\n Lifelines Left : \n");
  if(lifeline_fiftyfifty==0)
   printf("Fifty Fifty\t\t\t");
  if(lifeline_flipquestion==0)
   printf(" Flip the Question\t\t\t");
  printf("\n");
}



void input()
{disp_ll();
printf("WARNING: ENTERING  LIFELINE WHICH IS NOT AVAILABLE WILL LEAD TO LOSS A GAME");
printf("\n\nEnter option ('e' for fifty fifty, 'f' for flip the question, 'g' to exit with money) : ");
scanf("%c",&option);
getchar();
printf("\n");
option=tolower(option);
}

void winscreen()
{ system("clear");
  printf("congratulations! Your answer is correct! \n");

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
	printf("questions left: %d\n",questions_left);
  getchar();
  system("clear");
}

void exit_screen()
{ system("clear");
  printf("your prize money is %d \n",prize_money);
  exit_status=1;
  printf("Press any key to continue\n");
  getchar();
  system("clear");
}



void gamewon()
{ system("clear");
	printf("congratulations! You have won the game! \n");
	printf("your prize money is %d \n",prize_money);
  printf("Press any key to continue\n");
}


void lossscreen()
{ system("clear");
	char response;
  if (prize_money<4000000)
   prize_money=0;
  else
   prize_money=4000000;
	printf("That was the wrong answer. \n \n Unfortunately this is the end of your game. \n \n Your prize money is Rs. %d \n \n", prize_money);
    printf("Press any key to continue\n");
    getchar();
    exit_status=1;
}



int main()
{ system("clear");
  openscreen();

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
      input();
      if (option=='e' && lifeline_fiftyfifty==0)
      {
        system("clear");
        puts(question_pool_fiftyfifty[i]);
        input();
        if(option=='f' && lifeline_flipquestion==0)
          { lifeline_flipquestion=1;
            system("clear");
            puts(question_flipquestion);
            input();
            if(option==answer_flipquestion)
            {
              prize_money=prize_money_pool[i];
              winscreen();
            }
            else
            {
              lossscreen();
              flag_wrong_answer=1;
              break;
            }

          }

        else if (option==answer_pool[i])
        {
          prize_money=prize_money_pool[i];
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
      input();

        if (option=='e'&& lifeline_fiftyfifty==0)
        { lifeline_fiftyfifty=1;
          system("clear");
          puts(question_flipquestion_fiftyfifty);
          input();

          if(option==answer_flipquestion)
          {
            prize_money=prize_money_pool[i];
            winscreen();
          }
          else
          {
            lossscreen();
            flag_wrong_answer=1;
            break;
          }

        }

        else if(option==answer_flipquestion)
        {
          prize_money=prize_money_pool[i];
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
        prize_money=prize_money_pool[i];
        winscreen();
      }

      else if(option=='g')
      {
        exit_screen();
        exit(0);

      }

      else
      {
        lossscreen();
        flag_wrong_answer=1;
        break;
      }



    }system("clear");
  } while(exit_status!=1);
system("clear");
  return 0;
}
