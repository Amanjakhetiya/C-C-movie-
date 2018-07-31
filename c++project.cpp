#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

void menuController(){
    char choice;
    int count,x;
    x=0;
    count=0;
     printf("Welcome to Simple Quiz Game \n");
     printf("\n________________________________________");

     printf("\n   Your Options:    ") ;
     printf("\n________________________________________");

     printf("\n > Press 1 to Administer the quiz");
     printf("\n > Press 2 to Attempt the quiz");
     printf("\n > Press 3 to exit  ");
     printf("\n________________________________________\n\n");
     scanf("%d",&choice);
    if (choice==3)
	{exit(1);}
	else if (choice==1){
        loginSystem();
	}
    else if (choice==2)
    {
        StartQuiz();
    }

}

public class AdminUsers
{
    private  :
        Int  userId ;
        String username;
        String actualUserName;
        String password
        Int  loginSystem();
}
AdminUsers::loginSystem(){
    char enteredname[50],pass[50],var;

    printf("\n   Administrator Login    ") ;
     printf("\n________________________________________");

     printf("\n Enter User Name: ");
     scanf("%s",&enteredname);
     printf("\n Password:");
     scanf("%s",&pass);
     printf("\n Confirm(Y/N)");
     scanf("%s",&var);
      if(var=="y" ||var="Y"){
        //add to file and then main menu
        }
        else{
            menucontroller();
        }
}

public class Questions
{
     private :
        Int questionId;
        String questionText;
        String answerText1;
        String answerText2;
        String answerText3;
        String answerText4;
        Int correctAnswer;

        // Description of all the functions are available in procedural approach section
        Void addQuestions();
        Void modifyQuestions();
        Void deleteQuestions();
        Void printQuestions();
}

Questions::addQuestions(){
    char cr;
    FILE *fp;
    fp=fopen("try.dat","ab+");
        fseek(fp, 0, SEEK_END)
        printf("Add New Questions \n====================================\n Question Id: \n");
        scanf("%d",fin.sno);
        printf("\nQuestion Text: ");
        gets(fin.ques);
        printf("\nQuestion Text: ");
        gets(fin.a1);
        printf("\nQuestion Text: ");
        gets(fin.a2);
        printf("\nQuestion Text: ");
        gets(fin.a3);
        printf("\nQuestion Text: ");
        gets(fin.a4);
        printf("\nQuestion Text: ");
        scanf("%d",fin.correct);
        printf("\nQuestion Text: ");
        scanf("%d",fin.marks);
        printf("\nConfirm(Y/N): ");
        scanf("%s",cr);
        if(var=="y" ||var="Y"){


        fwrite(&fin,sizeof(fin),1,fp);
        }
        else{exit(1);}
        fclose(fp);

}

Questions::modifyQuestions(){
    int serialnum,choice;
    char n[200];
    FILE*fp;
    printf("Modify Questions\n==============================================\nQuestion Id  :");
    scan("%d",&serialnum);
    printf("\nField to modify\n1. Question Text\n2. 1st Option\n3. 2nd Option\n4. 3rd Option\n5. 4th Option\n6. Correct Option\n7. Category\n8. Allotted Marks\n Enter your choice (1/2/3/4/5/6/7/8) : ");
    scanf("%d",&choice);
      //rest of print
    if(var=="y" ||var="Y"){

	fp=open("try.dat",ab+);
	if(!fp)
	{
		cout<<"File not Found";
		exit(0);
	}
	else
	{


		fread(&s,sizeof(s),1,fp);
		while(!fp.eof())
		{
		    if(serialnum==s.sno)
			{
		    switch (choice)
                {
    case 1: printf("Enter new value for it:\n");
				getc(s.ques)
                fseek(fp,sizeof(s)*(n-1),SEEK_CUR);
                fwrite(&s,sizeof(s),1,fp);
        break;
    case 2: printf("Enter new value for it:\n");
				getc(s.a1)
                fseek(fp,sizeof(s)*(n-1),SEEK_CUR);
                fwrite(&s,sizeof(s),1,fp);
        break;
        case 3: printf("Enter new value for it:\n");
				getc(s.a2)
                fseek(fp,sizeof(s)*(n-1),SEEK_CUR);
                fwrite(&s,sizeof(s),1,fp);
        break;
        case 4: printf("Enter new value for it:\n");
				getc(s.a3)
                fseek(fp,sizeof(s)*(n-1),SEEK_CUR);
                fwrite(&s,sizeof(s),1,fp);
        break;
        case 5: printf("Enter new value for it:\n");
				getc(s.a4)
                fseek(fp,sizeof(s)*(n-1),SEEK_CUR);
                fwrite(&s,sizeof(s),1,fp);
        break;
        case 6: printf("Enter new value for it:\n");
				getc(s.correct)
                fseek(fp,sizeof(s)*(n-1),SEEK_CUR);
                fwrite(&s,sizeof(s),1,fp);
        break;
        case 7: printf("Enter new value for it:\n");
				getc(s.category)
                fseek(fp,sizeof(s)*(n-1),SEEK_CUR);
                fwrite(&s,sizeof(s),1,fp);
        break;
        case 8: printf("Enter new value for it:\n");
				getc(s.marks)
                fseek(fp,sizeof(s)*(n-1),SEEK_CUR);
                fwrite(&s,sizeof(s),1,fp);
        break;
    default: printf("Please enter valid input");
}
        			}

		}
	}
	fp.close();        }
    else{
        menucontroller();
        }
}

Questions::deleteQuestions(){
    int serialnum;
    char ch;
    printf("Delete Questions\n==============================================\nQuestion Id  :");
    scan("%d",&serialnum);
    //rest of print
    printf("Confirm(Y/N:");
    scanf("%ch");
    if(var=="y" ||var="Y"){
    FILE *fp;
	FILE *fp_tmp;

	fp=fopen("try.dat", "ab+");
	if (!fp) {
		printf("Unable to open file %s", fname);
		return -1;
	}
	fp_tmp=fopen("tmp.dat", "ab+");
	if (!fp_tmp) {
		printf("Unable to open file temp file.");
		return -1;
	}

	while (fread(&s,sizeof(s),1,fp) != NULL) {
		if (strcmp (searchname, s.name) == 0) {
			printf("A record with requested name found and deleted.\n\n");

		} else {
			fwrite(&s, sizeof(s), 1, fp_tmp);
		}
	}


	fclose(fp);
	fclose(fp_tmp);

	remove("try.dat");
	rename("tmp.bin", fname);

        }
        else{
            menucontroller();
        }
}

Questions::printQuestions(){
    FILE* fp;
    fp=fopen("try.dat","r");
    while(!feof(fp))
    {
        fread(&s,sizeof(s),1,fp);
        printf("\nQuestion number: %d\n%s \n1.%s \n2.%s \n3.%s \n4.%s\nCorrect answer: %d\nCategory: %s\nMarks alloted: %d",s.sno,s.ques,s.a1,s.a2,s.a3,s.a4,s.correct,s.category,s.marks);
        if(feof(fp)!=0)
            break;
    }
    fclose(fp);

}


public class Quiz
{
Private :
    Void startQuiz()
    Void runQuiz()
    Void displayResult()
}
managequestionscreen(){ int inp;
    printf("Manage Questions \n ===============\n 1 to Add New Questions\n 2 to	Modify Existing Questions\n 3 to Delete Questions\n 4 to Print Question List\n 5 to Exit from this menu");
    scanf("%d",inp);
    if(inp==1){
        addQuestions();
    }
    else if (inp==2){
        modifyQuestions();
    }
    else if (inp==3){
     deleteQuestions();
    }
    else if (inp==4){
        printQuestions();
    }
    else {exit(1);}
}


int main(){

}
