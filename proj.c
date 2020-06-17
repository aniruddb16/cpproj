#include <stdio.h>
#include <stdlib.h>

//globals
int q=1;
int score=0;
char op;
int flag=0;
int ex=0

//void resetvar()
//void winscreen()    // create a screen to display after user answers a question correctly should display score and lifelines left
//void gamewon()      //create a screen to display if user answers all 10 questions
//void losscreen()    //should input from user whether he wants to try again only if he doesnt the value of "ex" should be changed to 0 , display score first

void nextquestion()
{
  switch (q)
        case 1:
              clear();
              printf("first question \n");
              printf("(a)option a \t\t\t (b)option b\n");
              printf("(c)option c \t\t\t (d)option d\n");
              printf("Enter your choice of option: ");
              scanf("%c",&op);
              if (op=='a')
                 {
                   score+=100;
                   //void winscreen();
                 }
              else
              flag=1;
              break;



        case 2:
              clear();
              printf("first question \n");
              printf("(a)option a \t\t\t (b)option b\n");
              printf("(c)option c \t\t\t (d)option d\n");
              printf("Enter your choice of option: ")
              scanf("%c",&op);
              if (op=='a')
              {
                score+=100;
                //void winscreen();
              }
              else
              flag=1;
              break;

        case 3:
             clear();
             printf("first question \n");
             printf("(a)option a \t\t\t (b)option b\n");
             printf("(c)option c \t\t\t (d)option d\n");
             printf("Enter your choice of option: ")
             scanf("%c",&op);
             if (op=='a')
             {
               score+=100;
               //void winscreen();
             }
             else
                flag=1;
             break;

        case 4:
             clear();
             printf("first question \n");
             printf("(a)option a \t\t\t (b)option b\n");
             printf("(c)option c \t\t\t (d)option d\n");
             printf("Enter your choice of option: ")
             scanf("%c",&op);
             if (op=='a')
             {
               score+=100;
               //void winscreen();
             }
             else
                flag=1;
             break;

        case 5:
             clear();
             printf("first question \n");
             printf("(a)option a \t\t\t (b)option b\n");
             printf("(c)option c \t\t\t (d)option d\n");
             printf("Enter your choice of option: ")
             scanf("%c",&op);
             if (op=='a')
             {
               score+=100;
               //void winscreen();
             }
             else
                flag=1;
             break;

        case 6:
             clear();
             printf("first question \n");
             printf("(a)option a \t\t\t (b)option b\n");
             printf("(c)option c \t\t\t (d)option d\n");
             printf("Enter your choice of option: ")
             scanf("%c",&op);
             if (op=='a')
             {
               score+=100;
               //void winscreen();
             }
             else
                flag=1;
             break;



        case 7:
             clear();
             printf("first question \n");
             printf("(a)option a \t\t\t (b)option b\n");
             printf("(c)option c \t\t\t (d)option d\n");
             printf("Enter your choice of option: ")
             scanf("%c",&op);
             if (op=='a')
             {
               score+=100;
               //void winscreen();
             }
             else
                flag=1;
             break;

        case 8:
             clear();
             printf("first question \n");
             printf("(a)option a \t\t\t (b)option b\n");
             printf("(c)option c \t\t\t (d)option d\n");
             printf("Enter your choice of option: ")
             scanf("%c",&op);
             if (op=='a')
             {
               score+=100;
               //void winscreen();
             }
             else
                flag=1;
             break;


        case 9:
             clear();
             printf("first question \n");
             printf("(a)option a \t\t\t (b)option b\n");
             printf("(c)option c \t\t\t (d)option d\n");
             printf("Enter your choice of option: ")
             scanf("%c",&op);
             if (op=='a')
             {
               score+=100;
               //void winscreen();
             }
             else
                flag=1;
             break;


        case 10:
             clear();
             printf("first question \n");
             printf("(a)option a \t\t\t (b)option b\n");
             printf("(c)option c \t\t\t (d)option d\n");
             printf("Enter your choice of option: ")
             scanf("%c",&op);
             if (op=='a')
             {
               score+=100;
               //void winscreen();
             }
             else
                flag=1;
             break;

        default:
             clear();
             printf("you have won the game\n")
             //void gamewon();
             flag=1;
             break;
}

int main()
{
  //void openscreen();

  do{
    void nextquestion();
    q++;
    //if (flag==1)
       //{
          //void losscreen();
          //void resetvar();
         //break;
       //}
  }while(ex!=1)   //ex =1 to exit program


  return 0;
}
