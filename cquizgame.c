#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
struct natwon
{
    int sno;
    char ques[500];
    char a1[100];
    char a2[100];
    char a3[100];
    char a4[100];
    int correct;
    char category[20];
    int marks;
}s;
void maincontroller(){
    char choice;
    int count,x;
    x=0;
    count=0;
     printf("Welcome to Simple Quiz Game \n");
     printf("\n________________________________________");

     printf("\n   Your Options:    ") ;
     printf("\n________________________________________");

     printf("\n > Press 1 to start the quiz");

     printf("\n > Press 0 to exit  ");
     printf("\n________________________________________\n\n");
     scanf("%d",&choice);
    if (choice==0)
        exit(1);
    else
    {
        StartQuiz();
    }
     }

 void StartQuiz(){
     char playername[20],ch1;
     int k,co,r1,ans,count=0,x=0,totmarks;
     FILE *fp;
     char check[2][10];

     system("cls");
     fflush(stdin);
     printf("\n ------------------  Welcome to Simple Quiz Game --------------------------");
    printf("\nPlayer Name : ");
    gets(playername);
    fflush(stdin);
    printf("\n\n\n Ready  to start the game! (Y/N) \n");
    ch1=getchar();
    fflush(stdin);
     if (ch1=='y'||ch1=='Y')
		{
        for(k=0;k<10;k++){
            check[1][k]=0;
            check[0][k]=0;
        }
        system("cls");

        fp=fopen("quizez.dat","r");
        totmarks=0;
        printf("tot becomes0");
          //  system("cls");
            for(co=0;co<10;co++)
            {

                r1=(rand() % (25 - 1 + 1)) + 1;
                printf("rand is:%d",r1);
               // system("cls");
               A: for(k=0;k<10;k++)

               {
                   if(r1==check[1][k])
                    {r1=(rand() % (25 - 1 + 1)) + 1;
                    goto A;
                    }
               }

                  check[1][x++]=r1;
                  //scanf("%d",&r1);
                  fseek(fp,sizeof(s)*(r1-1),SEEK_SET);
                  fread(&s,sizeof(s),1,fp);
                  printf("\nQuestion number: %d\n",co+1);
                  printf("Question Text: %s\nAvailable answers:\n1.%s \n2.%s \n3.%s \n4.%s\nQuestion Category:%s\nMarks alloted:%d\n",s.ques,s.a1,s.a2,s.a3,s.a4,s.category,s.marks);
                  //puts(s.ques);
                  printf("\nEnter correct answer:");
                  scanf("%d",&ans);
                  check[0][co]=ans;

                  if (ans==s.correct)
                    {

                        count+=1;
                   }
//printf("in loop %d \t",count);
            }
            printf("%d \t",count);
            DisplayResult(playername, count, check, fp);

}
 }

void DisplayResult(char playername[20],int count,char check[2][10],FILE* fp ){

            int va,ccc,k;
            system("cls");

            printf("Congratulations  %s! You have completed the quiz\nYou have scored %d out of 10\nHere are your answers: ",playername,count);

            for(k=0;k<10;k++){
                va=check[1][k];

                  fseek(fp,sizeof(s)*(va-1),SEEK_SET);
                  fread(&s,sizeof(s),1,fp);
                printf("\n\n%s \n1.%s \n2.%s \n3.%s \n4.%s\n",s.ques,s.a1,s.a2,s.a3,s.a4);
                printf("Your answer: %d\n",check[0][k]);
                printf("Correct answer: %d\n",s.correct);

            }
            printf("the total score is: %d  ",count);
            fclose(fp);
            printf("\nPress any number to go to main menu and 0 to exit");
            scanf("%d",&ccc);
            if(ccc==0)
            {
                exit(1);
            }
            else
            {
                maincontroller();
            }
}
int main()
     {
maincontroller();
    /* int count,x;


 mainhome:x=0;
        count=0;
    printf("Welcome to Simple Quiz Game \n");
     printf("\n________________________________________");

     printf("\n   Your Options:    ") ;
     printf("\n________________________________________");

     printf("\n > Press 1 to start the quiz");

     printf("\n > Press 0 to exit  ");
     printf("\n________________________________________\n\n");

scanf("%d",&choice);
    if (choice==0)
	exit(1);
    else
    {
     system("cls");
     fflush(stdin);
     printf("\n ------------------  Welcome to Simple Quiz Game --------------------------");
    printf("\nPlayer Name : ");
    gets(playername);
    fflush(stdin);
    printf("\n\n\n Ready  to start the game! (Y/N) \n");
    ch1=getchar();
    fflush(stdin);
    if (ch1=='y'||ch1=='Y')
		{
        printf("fvv");
        for(k=0;k<10;k++){
                check[1][k]=0;
        check[0][k]=0;
        }
        system("cls");

        fp=fopen("questions.dat","rb");
          //  system("cls");
            for(co=0;co<10;co++)
            {

                r1=(rand() % (30 - 1 + 1)) + 1;
                system("cls");
               A:  for(k=0;k<10;k++)

               {
                   if(r1==check[1][k])
                    {r1=(rand() % (30 - 1 + 1)) + 1;
                    goto A;
                    }
               }
                  check[1][x++]=r1;
                  fseek(fp,sizeof(s)*(r1-1),SEEK_SET);
                  fread(&s,sizeof(s),1,fp);
                  printf("\nQuestion number: %d\nQuestion Category: Computers\n",co+1);
                  printf("Question Text: %s \nAvailable answers:\n1.%s \n2.%s \n3.%s \n4.%s\nMarks alloted:1\n",s.ques,s.a1,s.a2,s.a3,s.a4);
                  printf("Enter correct answer:");
                  scanf("%d",&ans);
                  check[0][co]=ans;
                  if (ans==s.correct)
                    {

                        count+=1;
                   }
            }
            system("cls");

            printf("Congratulations  %s! You have completed the quiz\nYou have scored %d out of 10\nHere are your answers: ",playername,count);

            for(k=0;k<10;k++){
                va=check[1][k];

                  fseek(fp,sizeof(s)*(va-1),SEEK_SET);
                  fread(&s,sizeof(s),1,fp);
                printf("\n\n%s \n1.%s \n2.%s \n3.%s \n4.%s\n",s.ques,s.a1,s.a2,s.a3,s.a4);
                printf("Your answer: %d\n",check[0][k]);
                printf("Correct answer: %d\n",s.correct);

            }
            printf("the total score is: %d",count);
            fclose(fp);
            printf("\nPress any number to go to main menu and 0 to exit");
            scanf("%d",&ccc);
            if(ccc==0)
            {
                exit(1);
            }
            else
            {
                goto mainhome;
            }
}}

*/
     }
