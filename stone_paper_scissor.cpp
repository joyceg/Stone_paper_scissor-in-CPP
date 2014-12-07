//PROGRAM TO IMPLEMENT STONE-PAPER-SCISSOR IN C++LANGUAGE



#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int lostcalculate(int);
int wincalculate(int);
int tie(int);

using namespace  std;
int main()
{
	int i,l,user_input,count=0;
	int score=0;
	char input[9];

	int q;
     char *a[3]={"STONE","PAPER","SCISSOR"};
	//INTRODUCTION TO THE GAME
	int choice=0;
	  cout<<"\n\n\n\n\n **************WELCOME TO STONE PAPER SCISSOR************** ";
	  cout<<"\n\nDEVELOPERS:JOYCE GEORGE\n\t::S3-CSE-B \n\t:AMRITA SCHOOL OF ENGINEERING,KOLLAM\n\n\n\n\n";
	  cout<<"\n\n**************GAME RULES**************\n\n";
	  cout<<"\tEnter stone/paper/scissor\n\t:You will be awarded +20 each time you defeat the system\n\t:There is -10 if system defeats you\n\t:10 points if the game ends in a tie\n";

	do
	{

	    	//ASKING THE USER INPUT

		count++;
		  cout<<"\n\n**************TRY:"<<count<<"**************";
		  cout<<"\n\n Stone,paper,scissor?";
		  cin>>input;
		  //CONVERTING THE USER'S INPUT TO UPPER CASE
		  for(i=0;i<10;i++)
		  {
		  input[i]=toupper(input[i]);
		  }


		  //ASSIGNING CONSTANT VALUE TO THE INPUT
		  if(strcmp(input,"STONE")==0)
		  {
		  user_input=0;
		  }
			  else if(strcmp(input,"PAPER")==0)
			  {
			  user_input=1;
			  }
				  else if(strcmp(input,"SCISSOR")==0)
				  {
				  user_input=2;
				  }
				  else
				  {
				  user_input=3;
				  cout<<"TRY AGAIN\nYOU HAVE ENTERED AN INVALID CHOICE\n";
				  }
		  //NOW GAME LOGIC
            for(i=0;i<3;i++)

		  {	l=rand()%3+0;}
	//THE LOGIC OF THE GAME BEGINS HERE
		  if(l==user_input)
		  {
		  cout<<"\nTHE GAME IS TIED\n";
		  score=tie(score);
		  }
		  else if(l==0)
					//NOW 3 CASE:COMPUTER SELECTING STONE,PAPER OR SCISSOR
			  {	//when computer selects stone
			  switch(user_input)
			  {//USER SELECTS PAPER HERE
			  case 1:cout<<"You have defeated Computer\nYour choice:"<<*(a+user_input)<<" \nComputer's choice:"<<*(a+l)<<"\n";
				score=wincalculate(score);
				  break;
			  case 2:cout<<"Computer has defeated You \nYour choice:"<<*(a+user_input)<< "\nComputer's choice:"<<*(a+l)<<"\n";
				score=lostcalculate(score);//USER SELECTS SCISSOR HERE

				  break;

			  }
			  }

		  else if(l==1)
			  {       //when computer selects PAPER
			  switch(user_input)
			  {
			  case 0:cout<<"Computer has defeated You\nYour choice: "<<*(a+user_input)<<"\nComputer's choice:"<<*(a+l)<<"\n";
								score=lostcalculate(score);

				  break;
			  case 2:cout<<"You have defeated the System\nYour choice: "<<*(a+user_input)<<"\nComputer's choice:%s\n"<<*(a+l);
				  score=wincalculate(score);

				  break;

			  }
			  }
			  else
			  {       //when computer selects SCISSOR
			  switch(user_input)
			  {
			  case 0:cout<<"You have defeated the system\nYour choice:"<<*(a+user_input)<< "\nComputer's choice:"<<*(a+l)<<"\n";
				  				score=wincalculate(score);

				  break;
			  case 1:cout<<"Computer has defeated you\nYour choice: "<<*(a+user_input)<<"\nComputer's choice:"<<*(a+l)<<"\n";
				  				score=lostcalculate(score);

			  break;

			  }
			}
		  cout<<"\n\nDo you want  to continue?\n1.Enter 1 to continue\n2.Enter 2 to exit\n";
		  		  cout<<"\n";
            		  cout<<"\n\t\t\t\t\t SCORE:"<<score<<"\n";

		  cin>>q;
		  if(q==1)
		  choice=1;
		  	 else
			 {cout<<"**************END**************\n";
			 cout<<"\n\nTHANKS FOR PARTICIPATING IN THIS GAME\nYOU HAVE SCORE:"<<score<<"\n\n";
			  return 0;
			 }


	}while(choice);

	return 0;




}


int wincalculate(int score)
{
    return score+=20;
}

int lostcalculate(int score)
{

  return score-=10;

}
int tie(int score)
{
  return score+=10;
}
