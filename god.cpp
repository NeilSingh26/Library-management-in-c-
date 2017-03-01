#include<iostream.h>
#include<fstream.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

typedef char option[15];
const int ROW = 10,COL = 10;

int scan;	// To hold the special characters for moving the prompt in menu
int ascii;

// To display the main menu options
option a[]= {
			  "MEMBERS",
			  "LIBRARY",
			  "Exit",
			  "Issue",
			  "Return",
			  "Search a Book",
			  "Exit",
			  "New Entry",
			  "Exit"
		 };

struct date
{
 int dd,mm,yy;
};




struct book
{
 char bname[25], aname[25];
 int issued;
 char issuedto[25];
 date issuedate;
}b[10];
int datediff(date d1,date d2)
{
int w,w1,w2,w3,w4,md,c1=0,md1=30,md2=29;
  if((d2.yy%400)==0)
	{
	cout<<"\tIssue year is leap year!!\n";
	c1=1;
	}
  else if((d2.yy%100)==0)
	{
	cout<<"\tIssue year is not leap year!!\n";
	c1=2;
	}
	else if((d2.yy%4)==0)
	{
	cout<<"\tIssue year is leap year!!\n";
	c1=1;
	}
  else
	{
	cout<<"\tIssue year is not a leap year\n";
	c1=2;
	}










switch(c1)
{
case 1:
 if((d1.mm==d2.mm)&&(d1.yy==d2.yy))
	{
		if((d1.dd-d2.dd)>14)
		{
		w=((d1.dd-d2.dd)-14)*1;
		return w;
		}
		else
		{
		return 0;
		}
	}
  else
	{
	w3=(d1.yy-d2.yy)*366;
	cout<<w3;
	md=d1.mm-d2.mm;
  //	cout<<md;
	 if(d2.mm==2)
		{
		if(md>=0)
			{
			w2=(d1.mm-d2.mm)*md2;cout<<w4;
			w4=w3+w2;
			w1=(w4-d2.dd)+d1.dd;
			}
		else if(md<0)
			{
			md=0-md;
			w2=(12-md)*md2;
			w4=w2;
			w1=(w4-d2.dd)+d1.dd;
			}
		



if(w1>14)
		 {
		w=(w1-14)*1;
		return w;
		}
		else
		{
		return 0;
		}
		}
	else if(d2.mm==4||d2.mm==6||d2.mm==9||d2.mm==11)
	{
	if(md>=0)
		{
		w2=(d1.mm-d2.mm)*md1;
		w4=w3+w2;
		w1=(w4-d2.dd)+d1.dd;
		}
		else if(md<0)
		{
		md=0-md;
		w2=(12-md)*md1;
		w4=w2;
		w1=(w4-d2.dd)+d1.dd;
		}
	if(w1>14)
	{
	w=(w1-14)*1;
	return w;
	}
	else
	{
	return 0;
	}
	}





	else
	{
	if(md>=0)
		{
		w2=(d1.mm-d2.mm)*31;
		w4=w3+w2;
		w1=(w4-d2.dd)+d1.dd;
		}
		else if(md<0)
		{
		md=0-md;
		w2=(12-md)*31;
		w4=w2;
		w1=(w4-d2.dd)+d1.dd;
		}
	if(w1>14)
	{
	w=(w1-14)*1;
	return w;
	}
	else
	{
	return 0;
	}
	}
  }
 // break;
case 2:
if((d1.mm==d2.mm)&&(d1.yy==d2.yy))
{
	if((d1.dd-d2.dd)>14)
	{
	w=((d1.dd-d2.dd)-14)*1;
	return w;
	}
	else
	{
	return 0;
	}
}
else
{
	w3=(d1.yy-d2.yy)*365;
	cout<<w3;
	md=d1.mm-d2.mm;
//	cout<<md;
		if(d2.mm==2)
	{
		if(md>=0)
		{
		w2=(d1.mm-d2.mm)*28;
		w4=w3+w2;
		w1=(w4-d2.dd)+d1.dd;
		}
		else if(md<0)
		{
		md=0-md;
		w2=(12-md)*28;
		w4=w2;
		w1=(w4-d2.dd)+d1.dd;
		}
	if(w1>14)
	{
	w=(w1-14)*1;
	return w;
	}
	else
	{
	return 0;
	}
	}
	else if(d2.mm==4||d2.mm==6||d2.mm==9||d2.mm==11)
	{
	if(md>=0)
		{
		w2=(d1.mm-d2.mm)*md1;
		w4=w3+w2;
		w1=(w4-d2.dd)+d1.dd;
		}
	
		else if(md<0)
		{
		md=0-md;
		w2=(12-md)*md1;
		w4=w2;
		w1=(w4-d2.dd)+d1.dd;
		}
	if(w1>14)
	{
	w=(w1-14)*1;
	return w;
	}
	else
	{
	return 0;
	}
	}
	else
	{
	if(md>=0)
		{
		w2=(d1.mm-d2.mm)*31;
		w4=w3+w2;
		w1=(w4-d2.dd)+d1.dd;
		}
		else if(md<0)
		{
		md=0-md;
		w2=(12-md)*31;
		w4=w2;
		w1=(w4-d2.dd)+d1.dd;
		}
	if(w1>14)
	{
	w=(w1-14)*1;
	return w;
	}
	


else
	{
	return 0;
	}
	}

}
//break;
}
return 0;
}
class Library
{

	protected:
	int i,i1;
 //	book b[10];
	date s;
	public:
	void new_entry();
	void display();
	int isavailable(char nm[]);
};
void Library::new_entry()
{       i=0;
	gotoxy(10,5);
	cprintf("\nEnter the no. of books you want to enter: ");
	cin>>i1;

	for(int i2=0;i2<i1;i2++)
	{
	gotoxy(10,6);
	cprintf("\nEnter Bookname:- ");
	gets(b[i].bname);
	gotoxy(10,7);
	cprintf("\nEnter author name:- ");
	gets(b[i].aname);
	b[i].issued=0;
	i++;
	}
}
void Library::display()
	{        ofstream fout;
		 fout.open("Display_Book_Details.txt",ios::out);
		for(int j=0;j<i;j++)
		{       gotoxy(10,8);
			cprintf("\nBookname:-");cout<<b[j].bname;
			gotoxy(10,9);
			cprintf("\nAuthor name:-");cout<<b[j].aname;
			fout<<"Book name:\n"<<b[j].bname<<"\n";
			fout<<"Author name:\n"<<b[j].aname<<"\n";

		}
	}
int Library::isavailable(char nm[])
	{
		for(int j=0;j<i;j++)
		{
			if(strcmpi(b[j].bname,nm)==0)
			{
				if(b[j].issued==0)
				{
					return 1;
				}
				else
				{
					cout<<"\n\tBook already issued!!";
					return 0;
				}
			}
		}
		cout<<"\n\tBook not found!!";
		return 0;
	}






class Members:public Library
{
     char mname[25],bk[25],sbk[25],m1name[25];
     date s1;
     public:
	void issue_book();
	void return_book();
	void search();
};
void Members::issue_book()
{       int date,month,f,f1,c1,c2;
	ofstream fo;
	fo.open("Issue_book_details.txt",ios::out);
	do
	{
	gotoxy(10,9);
	cprintf("\nEnter member name: ");
	gets(m1name);
	for(int k=0;m1name[k]!='\0';k++)
	{
	  if(isalpha(m1name[k]))
	 {
		mname[k]=m1name[k];
		c1++;
	 }
	  else
	 {
	 cout<<"\n\tInvalid entry!!!";
	 cout<<"\n\tcannot have numbers in member name\n";
	 c1=100;
	 c2=1;
	 }
	}
	}while(c1==100&&c2==1);
	fo<<"Member name:\n"<<mname<<"\n";
	gotoxy(10,10);
	cprintf("\nEnter name of the book you want to issue:");
	gets(bk);


	if(isavailable(bk))
	{
		for(int j=0;;j++)
		{
			if(strcmpi(b[j].bname,bk)==0)
			{
				strcpy(b[j].issuedto,mname);
				fo<<"Name of the Book issued:\n"<<bk<<"\n";
				break;
			}
		}
	      do
		{
		do
		   {
		   gotoxy(10,11);
		   cprintf("\nEnter date of issue:");
		   cin>>date;
		   if(date>0&&date<32)
		   {
		   b[j].issuedate.dd=date;
		   fo<<"Date of issue:\n"<<b[j].issuedate.dd<<"\n";
		   f=0;
		   }
		   else
		   {
		   cout<<"\n\tInvalid entry!!!";
		   f=1;
		   }
		  // fo<<"Date of issue:\n"<<b[j].issuedate.dd<<"\n";
		   }while(f==1);
		  do
		  {
		  gotoxy(10,12);
		  cprintf("\nEnter month of issue:");
		  cin>>month;
		  if(month>0&&month<13)
		  {


		   if(month==2&&date>29)
		   {
		   cout<<"\n\tInvalid entry!!!";
		   cout<<"\n\tFebruary cannot have more than 29 days!!";
		   f=0;
		   f1=0;
		   }
		   else if((month==4||month==6||month==9||month==11)&&(date>30))
		   {
		   cout<<"\n\tInvalid entry!!";
		   cout<<"\n\tCannot have more than 30 days for the given month";
		   f=0;
		   f1=0;
		   }
		   else if((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&(date>31))
		   {
		   cout<<"\n\tInvalid entry!!";
		   cout<<"\n\tCannot have more than 31 days for the given month";
		   f=0;
		   f1=0;
		   }
		   else
		   {
		   b[j].issuedate.mm=month;
		   fo<<"Month no.:\n"<<b[j].issuedate.mm<<"\n";
		   f=1;
		   f1=1;
		   }
		 }
		 else
		 {
		 cout<<"\n\tInvalid month entry!!";
		 f=0;
		 f1=1;
		 }
	       //	fo<<"Month no.:\n"<<b[j].issuedate.mm<<"\n";
		}while(f==0&&f1!=0);
	     }while(f==0&&f1==0);
		gotoxy(10,13);
		cprintf("\nEnter year of issue:");
		cin>>b[j].issuedate.yy;
		fo<<"Year of issue:\n"<<b[j].issuedate.yy<<"\n";
		b[j].issued=1;
	}
}
void Members::return_book()
	{
	int date1,month1,f2,f3;
	date rd;
	ofstream fo1;
	fo1.open("Return_book_details.txt",ios::out);
	clrscr();
	gotoxy(10,5);
	cprintf("\nEnter name of the book you want to return:");
	gets(bk);
		for(int j=0;;j++)
			if(strcmpi(b[j].bname,bk)==0)
			       break;
	      do
		{
		do
		   {
		   gotoxy(10,6);
		   cprintf("\nEnter date of return: ");
		   cin>>date1;
		   if(date1>0&&date1<32)
		   {
		   rd.dd=date1;
		   fo1<<"Date of return:\n"<<rd.dd<<"\n";
		   f2=0;
		   }
		   else
		   {
		   cout<<"\n\tInvalid entry!!!";
		   f2=1;
		   }
		   }while(f2==1);
		  do
		  {
		  gotoxy(10,7);
		  cprintf("\nEnter month of return: ");
		  cin>>month1;
		  if(month1>0&&month1<13)
		  {
		   if(month1==2&&date1>29)
		   {
		   cout<<"\n\tInvalid entry!!!";
		   cout<<"\n\tFebruary cannot have more than 29 days!!";
		   f2=0;
		   f3=0;
		   }
		   else if((month1==4||month1==6||month1==9||month1==11)&&(date1>30))
		   {
		   cout<<"\n\tInvalid entry!!";

		   cout<<"\n\tCannot have more than 30 days for the given month";
		   f2=0;
		   f3=0;
		   }
		   else if((month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12)&&(date1>31))
		   {
		   cout<<"\n\tInvalid entry!!";
		   cout<<"\n\tCannot have more than 31 days for the given month";
		   f2=0;
		   f3=0;
		   }
		   else
		   {
		   rd.mm=month1;
		   fo1<<"Return Month no.:\n"<<rd.mm<<"\n";
		   f2=1;
		   f3=1;
		   }
		 }
		 else
		 {
		 cout<<"\n\tInvalid month entry!!";
		 f2=0;
		 f3=1;
		 }
		}while(f2==0&&f3!=0);
	     }while(f2==0&&f3==0);
	gotoxy(10,8);
	cprintf("\nEnter year of return:");
	cin>>rd.yy;

	fo1<<"Year of return:\n"<<rd.yy<<"\n";
	int diff=datediff(rd,b[j].issuedate);
	gotoxy(10,9);
	cprintf("\nYour fine is :");cout<<diff;cprintf("Rs.\n");
	fo1<<"Your fine is="<<diff<<"Rs.\n";
	b[j].issued=0;
	}
void Members::search()
{
gotoxy(10,5);
cprintf("\nEnter the name of the book you want to search:");
gets(sbk);
for(int i2=0;i2<i1;i2++)
	{
      if(strcmpi(b[i2].bname,sbk)==0)
      {
      gotoxy(10,6);
      cprintf("\nBook already present in the library");
      gotoxy(10,7);
      cprintf("\nBook no.=");cout<<(i2+1);
      break;
      }
      }
      if(i2==i1)
      {
	gotoxy(10,6);
	cprintf("\nBook not found!!!");
      }
}

class main_menu
{
	int i,done;

	public:
		void normalvideo(int x,int y,char *str);
		void reversevideo(int x,int y,char *str);
		void box(int x1,int y1,int x2,int y2);
		char menu(int , int , char *);
		void control_menu();
		char e_menu();
		void edit_menu();
		void help(void);
};

// Function to displays all the menu prompt messages from the pointer array of option a[]
void main_menu::normalvideo(int x,int y,char *str)
{
   gotoxy(x,y);
   cprintf("%s",str);
}

// Function to move the cursor on the menu prompt with a reverse video color
void main_menu::reversevideo(int x,int y,char *str)
{
	textcolor(5+143);
	textbackground(WHITE);
	gotoxy(x,y);
	cprintf("%s",str);
	textcolor(GREEN);
	textbackground(BLACK);
}





void main_menu::box(int x1,int y1,int x2,int y2)
{


	 for(int col=x1;col<x2;col++)
	 {
		   gotoxy(col,y1);
		   //cout<<(char)196;
		   cprintf("%c",196);
		   gotoxy(col,y2);
		   cprintf("%c",196);
	 }

	 for(int row=y1;row<y2;row++)
	 {
		   gotoxy(x1,row);
		   cprintf("%c",179);
		   gotoxy(x2,row);
		   cprintf("%c",179);
	 }
	 gotoxy(x1,y1);
	 cprintf("%c",218);
	 gotoxy(x1,y2);
	 cprintf("%c",192);
	 gotoxy(x2,y1);
	 cprintf("%c",191);
	 gotoxy(x2,y2);
	 cprintf("%c",217);
}


char main_menu::menu(int li, int ui, char * heading)
{
	clrscr();

	textcolor(22);
	box(20, 6, 65, 20);
	box(18, 4, 67, 22);
	textcolor(5+143);
	gotoxy(36, 5);
	textbackground(BLUE);
	//cprintf("L I B R A R Y");
	cprintf("%s",heading);
	textbackground(BLACK);
	textcolor(22);
	int pos=0;
	for(i = li; i < ui+1; i++,pos++)
	normalvideo(32, i+10, a[i]);
	reversevideo(32,10, a[li]);
	done = 0;
	i=li;
	_setcursortype(_NOCURSOR);
	do
	{
		int key = getch();
		switch (key)
		{
			case 00:
				pos=0;
				key = getch();
				switch (key)
				{
					case 72:
						normalvideo(32, i+10, a[i]);
						pos--;
						i--;
						if (i == li-1)
						{
							i = ui;
							pos=ui-li;
						}
						reversevideo(32,i+10,a[i]);
						break;
					case 80:
						normalvideo(32, i+10, a[i]);
										i++;
						



if (i == ui+1)
						{
							i = li;
							pos=0;
						}
						reversevideo(32, i+10, a[i]);
						break;
				}
				break;
			case 13:
				done = 1;
		}
	}
	while (!done);
	_setcursortype(_NOCURSOR);
	return(i);
}
class lines
{
public :
	      //	void line_hor (int, int, int, char) ;
		//void line_ver (int, int, int, char) ;
		void box (int,int,int,int,char) ;
} ;
class menu
{
public :
		void main_menu(void) ;
		char *sub_menu(void) ;
		void start(void) ;
private :
		void edit_menu(void) ;
} ;







void menu :: start(void)
{
   lines line ;
   textmode(C40) ;
   clrscr() ;
   textbackground(BLUE);
   textcolor(BLACK) ;
   clrscr() ;
   gotoxy(8,12) ;
   cout <<"C O M P U T E R" ;
   gotoxy(25,12) ;
   cout <<"P R O J E C T" ;
  // line.box(4,10,36,14,219) ;
   gotoxy(5,21);
   cout<<"MADE BY :";
   gotoxy(5,22);
   cout<<"Neil Ravindra Singh.";


  // line.box(2,19,40,24,219);
   gotoxy(4,10);
   getch() ;
   textbackground(BLACK) ;
   textcolor(LIGHTGRAY) ;
   textmode(BW80);
   clrscr() ;
}
void main()
{
clrscr();
menu m1;
m1.start();
int g,g1,y;
char s[100];
Members m;
Library l;




do
{
main_menu  m_menu;
g=m_menu.menu(0,2,"**L I B R A R Y**" );
clrscr();
switch(g)
 {
	case 0:
	g1=m_menu.menu(3,6,"MEMBERS MENU");
	clrscr();
	m_menu.box(3, 1, 75, 22);
	m_menu.box(5, 2, 73, 21);
	gotoxy(10,0);
	//cin>>g1;
		switch(g1)
		{
		case 3:
		gotoxy(10,5);
		cprintf("\nEnter Book Details:-");
		m.new_entry();
		gotoxy(10,8);
		cprintf("\nEnter issue details:-\n");
		m.issue_book();
		break;
		case 4:
		gotoxy(10,4);
		cprintf("BOx");
		m.return_book();
		break;
		case 5:
		m.search();
		break;
		case 6:
		break;
		}
	break;




	case 1:
	g1=m_menu.menu(7,8,"LIBRARY MENU");
	clrscr();

	m_menu.box(3, 1, 75, 22);
	m_menu.box(5, 2, 73, 21);
	gotoxy(10,0);
	if(g1==7)
	{
	l.new_entry();
	l.display();
	}
	break;
	case 2:
		exit(0);
		break;
 }
 gets(s);
 clrscr();
 gotoxy(25,1);
 cprintf("\nDo you want to continue?");
 gotoxy(25,3);
 cprintf("\nPress 1 for yes!\n");
 gotoxy(25,5);
 cin>>y;
 clrscr();
}while(y==1);

}

