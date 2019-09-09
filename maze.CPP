/*
Developed By- Shivam Bairoliya
Version 1.0
Enjoy!!
/*

#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
int maze[21][66]={
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
		{1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,1,1,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
		{1,1,0,0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,0,0,1,1},
		{1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1},
		{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
		};
int num,row,col,found,target,index;
int plus1,plus2,pro,quo,minus,and,at,hash;
void tune(int, int);
void exit();
void box();
void loading();
void opening();
void display();
void compute();
void endMessage();
void win();
void check();
void play();
void tune(int freq, int time)
{
	sound(freq);
	delay(time);
	nosound();
}
void exit()
{
       randomize();
       target=random(10);
       do
       {
		index=random(64)+1;
       }while(index==42||index==41||index==62||index==61||index==1||index==2);
}
void box()
{
	for(int i=9;i<=15;i++)
	{
		cout<<endl;
		for(int j=32;j<=50;j++)
		{
			if(i==9||i==15||j==32||j==50)
		       {
				gotoxy(j,i);
				textbackground(15);
				cprintf("  ");
		       }
		}
	}
}
void loading()
{
	for(int j=1;j<=2;j++)
	{
		clrscr();
		box();
		textbackground(0);
		gotoxy(37,12);
		textcolor(10);
		cprintf("LOADING");
		for(int i=1;i<=4;i++)
		{
			if(j==2&&i==4)
				tune(800,300);
			else
				tune(262,100);
			delay(500);
			cprintf(".");
		}
	}
}
void opening()
{
	clrscr();
	gotoxy(24,4);
	textcolor(4+128);
	cprintf("WELCOME TO THE NUMBERS MAZE!!!!!");
	gotoxy(4,7);
	textcolor(2);
	cprintf(".>You will start from scratch(0) and attempt to reach the exit.");
	gotoxy(4,8);
	cprintf(".>You will have to reach the exit at a particular number which will be            displayed at the right of your screen.");
	gotoxy(4,10);
	cprintf(".>Don't Worry!! There will be operators for your help in the maze:");
	gotoxy(6,11);
	textcolor(14);
	cprintf("-> + adds the number by itself.");
	gotoxy(6,12);
	cprintf("-> - subtracts the number by itself(basically, makes it 0)");
	gotoxy(6,13);
	cprintf("-> / makes the number 1.");
	gotoxy(6,14);
	cprintf("-> # decreases value by 3.");
	gotoxy(6,15);
	cprintf("-> & increases value by 1.");
	gotoxy(6,16);
	cprintf("-> * squares the number.");
	gotoxy(6,17);
	cprintf("-> @ increases value by 2.");
	gotoxy(4,18);
	cprintf(".>But you can use an operator only once.");
	gotoxy(4,19);
	textcolor(4);
	cprintf(".>Use WASD to move.");
	gotoxy(4,20);
	cprintf(".>Press Esc to quit and lose anytime.");
	gotoxy(4,21);
	cprintf(".>Remember, A two-digit value or a negative value will make you lose the game");
	textcolor(3);
	gotoxy(36,22);
	cprintf("ENJOY!!!!");
	gotoxy(4,23);
	textcolor(15+BLINK);
	cprintf(".>PRESS ANY KEY TO CONTINUE....");
	getch();
	tune(392,200);tune(262,400);tune(262,150);tune(294,200);tune(311,200);
	tune(294,200);tune(261,200);tune(349,200);tune(262,800);tune(262,200);
	tune(294,200);tune(311,600);tune(349,200);tune(294,600);tune(311,200);tune(262,600);tune(293,200);tune(246,400);tune(220,200);
	tune(195,200);tune(262,800);
}
void display()
{
	 for(int i=0;i<21;i++)
	 {
		cout<<endl;
		for(int j=0;j<66;j++)
		{
			if(maze[i][j]==1)
			{
				textbackground(4);
				textcolor(4);
				cprintf("1");
			}
				else
			{
				textbackground(0);
				cprintf(" ");
			}
		 }
	}
	gotoxy(index,22);
	textcolor(15);
	textbackground(15);
	cprintf(" ");
	textcolor(14);
	textbackground(0);
	if(plus2==0)
	{
		gotoxy(23,3);
		cprintf("+");
	}
	if(minus==0)
	{
		gotoxy(33,11);
		cprintf("-");
	}
	if(quo==0)
	{
		gotoxy(23,18);
		cprintf("/");
	}
	if(and==0)
	{
		gotoxy(64,3);
		cprintf("&");//increases value by 1
	}
	if(at==0)
	{
		gotoxy(11,12);
		cprintf("@");//@ increases value by 2
	}
	if(hash==0)
	{
		gotoxy(51,18);
		cprintf("#");//# decreases value by 3
	}
	if(pro==0)
	{
		gotoxy(62,19);
		cprintf("*");
	}
	if(plus1==0)
	{
		gotoxy(48,3);
		cprintf("+");
	}
	textcolor(10);
	gotoxy(68,3);
	cprintf("+ doubles");
	gotoxy(68,4);
	cprintf("- makes 0");
	gotoxy(68,5);
	cprintf("* squares");
	gotoxy(68,6);
	cprintf("/ makes 1");
	gotoxy(68,7);
	cprintf("@ adds 2");
	gotoxy(68,8);
	cprintf("# reduces 3");
	gotoxy(68,9);
	cprintf("& adds 1");
	gotoxy(68,12);
	textbackground(4);
	cprintf("No. to exit:");
	cout<<target;
	textbackground(0);
}
void compute()
{
	if(col==48&&row==3&&plus1==0)
	{
		tune(500,100);
		num+=num;
		plus1++;
	}
	if(col==23&&row==3&&plus2==0)
	{
		tune(600,100);
		num+=num;
		plus2++;
	}
	if(col==62&&row==19&&pro==0)
	{
		tune(700,100);
		num*=num;
		pro++;
	}
	if(col==51&&row==18&&hash==0)
	{
		tune(800,100);
		num-=3;
		hash++;
	}
	if(col==11&&row==12&&at==0)
	{
		tune(900,100);
		num+=2;
		at++;
	}
	if(col==23&&row==18&&quo==0)
	{
		tune(1000,100);
		num=1;
		quo++;
	}
	if(col==33&&row==11&&minus==0)
	{
		tune(1100,100);
		num=0;
		minus++;
	}
	if(col==64&&row==3&&and==0)
	{
		tune(1200,100);
		num++;
		and++;
	}
}
void endMessage()
{
	clrscr();
	found=0;
	box();
	textcolor(4);
	gotoxy(36,12);
	cout<<"YOU LOSE!!!";
	tune(659,200);
	tune(587,200);
	tune(494,500);
}
void win()
{
	clrscr();
	box();
	found=0;
	textbackground(0);
	gotoxy(37,12);
	textcolor(10);
	cprintf("YOU WIN!!!");
	tune(1330,200);
	tune(1392,200);
	tune(1494,500);
}
void check()
{
	if(num<0||num>9)
	{
	      gotoxy(4,23);
	      textcolor(15);
	      cprintf("OOPS!! YOU EXCEEDED THE LIMIT");
	      tune(500,100);
	      gotoxy(40,23);
	      textcolor(15+BLINK);
	      cprintf("PRESS ANY KEY TO CONTINUE");
	      getch();
	      textcolor(4);
	      endMessage();
	}
	else if(row==22&&col==index)
	{
		if(num==target)
		{
			found=0;
			gotoxy(4,23);
			textcolor(14);
			cprintf("YOU GOT IT");
			tune(1000,100);
			gotoxy(40,23);
			textcolor(15+BLINK);
			cprintf("PRESS ANY KEY TO CONTINUE");
			getch();
			win();
		}
		else
		{
			gotoxy(4,23);
			textcolor(10);
			cprintf("OOPS!! NOT THE INTENDED NUMBER");
			tune(500,100);
			gotoxy(40,23);
			textcolor(15+BLINK);
			cprintf("PRESS ANY KEY TO CONTINUE");
			getch();
			textcolor(4);
			endMessage();
		}
	}
}
void play()
{
	int again=1;
	opening();
	do
	{
		clrscr();
		textbackground(0);
		loading();
		exit();
		num=0,col=3,row=3,found=1;
		plus1=0,plus2=0,minus=0,pro=0,quo=0,at=0,and=0,hash=0;
		clrscr();
		display();
		gotoxy(col,row);
		cout<<num;
		char ch;
		int rowc=row,colc=col;
		do
		{
			ch=getch();
			if(ch!=27)
			{
				if((ch=='d'||ch=='D')&&maze[row-2][col]==0)
				 col++;
				if((ch=='a'||ch=='A')&&maze[row-2][col-2]==0)
				 col--;
				if((ch=='w'||ch=='W')&&maze[row-3][col-1]==0)
				 row--;
				if(ch=='s'||ch=='S')
				{
					if(maze[row-1][col-1]==0)
					 row++;
					else if(col==index&&row==21&&maze[row-1][col-1]==1)
					 row++;
				}
				if(row!=rowc||col!=colc)
				{
					compute();
					clrscr();
					display();
					gotoxy(col,row);
					cout<<num;
					check();
					rowc=row;
					colc=col;
				}
			}
			else
			{
				found=0;
				tune(200,100);
			}
		}while(found);
		gotoxy(4,23);
		textcolor(14);
		textbackground(0);
		cprintf("Want to play again? Y/N");
		char choice;
		choice=getch();
		tune(500,100);
		again=(choice=='n'||choice=='N')?0:1;
	}while(again);
}
void main()
{
	_setcursortype(_NOCURSOR);
	play();
}