#include<stdio.h>

struct ques
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
}fin,f2;
main()
{
    int i,n;
    char ch[30];
    FILE *fp;
    FILE *fp1;

    fflush(stdin);

    fp=fopen("quizez.dat","rb");
    //fp1=fopen("quizques.dat","r");
    /*for(i=1;i<=30;i++)
    {
        fin.sno=i;
        printf("\nEnter the question: \t\n");
        fflush(stdin);
        gets(fin.ques);
        fflush(stdin);
        gets(fin.a1);
        fflush(stdin);
        gets(fin.a2);
        fflush(stdin);
        gets(fin.a3);
        fflush(stdin);
        gets(fin.a4);
        fflush(stdin);
        scanf("%d",&fin.correct);
        fflush(stdin);
        gets(fin.category);
        fflush(stdin);
        scanf("%d",&fin.marks);

        fwrite(&fin,sizeof(fin),1,fp);
    }
   fclose(fp);
*/
    //fp=fopen(ch,"rb");

    while(!feof(fp))
    {
        fread(&fin,sizeof(fin),1,fp);
        //f2=fin;
        printf("\n%d\n%s \n1.%s \n2.%s \n3.%s \n4.%s\nCorrect answer: %d\nCategory: %s\nMarks alloted: %d",fin.sno,fin.ques,fin.a1,fin.a2,fin.a3,fin.a4,fin.correct,fin.category,fin.marks);
        if(feof(fp)!=0)
            break;
        //fwrite(&f2,sizeof(f2),1,fp);
    }
    fclose(fp);
}

/*
fread(question.r
      fp1
      write mode
      fp1.s.no=fp.sno
      fro string strcpy
      get

*/









