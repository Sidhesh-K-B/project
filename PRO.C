#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
int generate(void);
int fun(int);
void pro();
void q()
{
char s[100],z[10];
int j=0;
clrscr();
printf("\n\n\n\t WELCOME TO QUIZ BUZZ ");
printf("\n\t********************************");
printf("\n\n\t ENTER YOUR NAME = ");
scanf("%s",&s);
clrscr();
printf("\n\t\t TEST STARTS \n");
printf("\n\n\t 1.Where is Garampani sanctuary loacted?");
printf("\n\t a.Diphu,Assam");
printf("\n\t b.Kohima,Nagaland");
printf("\n\t c.Gangtok,Sikkim");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\t 2.What does FFC stands for");
printf("\n\t a. Foreign Finance Corporation");
printf("\n\t b. Federation of Football Council");
printf("\n\t c. Film Finance Corporation");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
//if(z=="c"||z=="C")
if(strcmp(z,"c")==0||strcmp(z,"C")==0)
j++;
clrscr();
printf("\n\n\t 3.Which country does Golf player,Vijay Singh belong to?");
printf("\n\t a. Fiji");
printf("\n\t b. USA");
printf("\n\t c. India");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
//if(z=="a"||z=="A")
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\t 4.When does first Afghan war took place?");
printf("\n\t a. 1843 ");
printf("\n\t b. 1833");
printf("\n\t c. 1839");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
//if(z=="c"||z=="C")
if(strcmp(z,"c")==0||strcmp(z,"C")==0)
j++;
clrscr();
printf("\n\n\t 5.Which of the following is used in pencil?");
printf("\n\t a. Graphite");
printf("\n\t b. Silicon");
printf("\n\t c. Phosphorous");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
//if(z=="a"||z=="A")
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\t 6.Which of the following gas is used in bulbs?");
printf("\n\t a. hydrogen");
printf("\n\t b. nitrogen");
printf("\n\t c. carbon di oxide");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
//if(z=="b"||z=="B")
if(strcmp(z,"B")==0||strcmp(z,"b")==0)
j++;
clrscr();
printf("\n\n\t 7.When is the World Population Day celebrated?");
printf("\n\t a. July 11");
printf("\n\t b. June10");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\t 8.In which year does India won its first gold in Hockey Olympics ?");
printf("\n\t a. 1928");
printf("\n\t b. 1932");
printf("\n\t c. 1936");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\t 9.Where is Charminar located?");
printf("\n\t a. Delhi");
printf("\n\t b. Ahmedabad");
printf("\n\t c. Hyderabad");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"c")==0||strcmp(z,"C")==0)
j++;
clrscr();
printf("\n\n\t 10.Where do plants receive their nutrients ?");
printf("\n\t a. soil");
printf("\n\t b. light");
printf("\n\t c. chlorophyll");
printf("\n\n\t Enter your choice = ");
scanf("%s",&z);
if(strcmp(z,"a")==0||strcmp(z,"A")==0)
j++;
clrscr();
printf("\n\n\n\t\t\t ****CONGRAGULATION*** ");
printf("\n\n\t %s YOUR SCORE IS %d ",s,j*10);
getch();
getch();
}
void magic()
{
 int i,a,r;
 clrscr();
 gotoxy(30,12);
 clrscr();
 gotoxy(15,8);
 printf("Just think a number between 1 to 63 in your mind\n");
 printf("  Think on one ");
 printf("Do not enter that number");
 printf("  I will find that number on your mind....");
 printf(" Press any key to continue...");
 getch();
 clrscr();
 gotoxy(20,7);
 printf("By Just answering few questions....");
 printf("If your number is present in the numbers");
 printf(" shown on your screen,	Then press P and if not present");
 printf(" then press N	");
 printf(" But please be honest while entering the answer...");
 printf("Press any key to continue...");
 getch();
 clrscr();
 r=generate();
 if(r==0)
 {
  gotoxy(20,11);
  printf("You didn't think of any number between 1 to 63");
  printf(" So try again...");
 }
 else
 {
 gotoxy(30,11);
 printf("Your number is %d",r);
 printf("Surprised! But friends it is not a magic,");
 printf(" it just involves some mathematical computation....");
 printf(" so guys just try to find out the method.");
 printf(" Thank You!");
 }
 getch();
}

int generate()
{
 int a,i,j,f,num[6],n,r=0;
 char ch[6];
 for(j=0;j<=5;j++)
 {
  gotoxy(1,7);
  f=fun(j);
  for(i=1;i<=63;i++)
  {
   //f=fun(j);
   //printf("%d",f
   a=i & f;
   if(a==f)
   printf("%d",i);

  }
  printf("  Let me remind you if the number is present then");
  printf(" press P otherwise press N");
  printf(" Enter your answer:	");

  ch[j]=getche();
  printf("Press any key to continue....");
  //clrscr();
  if(ch[j]=='p' || ch[j]=='P')
  {
   num[j]=1;
   n=fun(j);
   r=r+n;
  }
  else
  num[j]=0;
  getch();
  clrscr();
 }
/* for(j=5;j>=0;j--)
 {
 printf("%d",num[j]);

 // if(ch[j]=='p' || ch[j]=='P')
 // num[j]=1;
 // else
 // num[j]=0;
 } */
// printf("%d",r);
 return r;
}

int fun(int j)
{
 if(j==0)
 return 1;
 else
 return 2*fun(j-1);
}

void flames()
{
int x,y,z,i,j,r,s,g,h;
char n1[100],n2[100],a[110]={' ','f','l','a','m','e','s'},b[110];
clrscr();
printf("Enter the first name:\n");
scanf("%s",&n1);
printf("\nEnter the second name:\n");
scanf("%s",&n2);
x=strlen(n1);
y=strlen(n2);
for(i=0;i<x;i++)
n1[i]=tolower(n1[i]);
for(j=0;j<y;j++)
n2[j]=tolower(n2[j]);
z=x+y;
for(i=0;i<strlen(n1);i++)
{
    for(j=0;j<strlen(n2);j++)
    {
	if(n1[i]==n2[j])
	{
	    n1[i]=' ';
	    n2[j]=' ';
	    z=z-2;
	    break;
	}
    }
}
for(r=6;r>0;r--)
{
    s=z%r;
    if(s==0)
    {
	s=r;
	i=1;
    }
    else
    {
	a[s]='\0';
	i=s+1;
    }
    j=1;
    while(1)
    {
	if(i==s)
	{
	    break;
	}
	b[j]=a[i];
	if(i==r)
	{
	    i=0;
	}
	i++;
	j++;
    }
    for(i=1;i<=r;i++)
    {
	a[i]=b[i];
    }
}
printf("\nThe result is:\n");
switch(a[1])
{
    case 'f':
    printf("FRIENDS");
    break;
    case 'l':
    printf("LOVER");
    break;
    case 'a':
    printf("AFFECTION");
    break;
    case 'm':
    printf("MARRIAGE");
    break;
    case 'e':
    printf("ENEMY");
    break;
    case 's':
    printf("SIBLING");
    break;
}
getch();
pro();
}

void pro()
{
int i;
clrscr();
printf("\n\n\t\t\t\t GAME BUZZ");
printf("\n\t\t\t\t ********* ");
printf("\n\n\t 1. FLAMES \n");
printf("\n\t 2. MAGIC \n");
printf("\n\t 3. QUIZ \n");
printf("\n\t 4. EXIT \n");
printf("\n\n\n\t ENTER THE CHOICE = ");
scanf("%d",&i);
switch(i)
{
case 1:
clrscr();
flames();
break;
case 2:
clrscr();
magic();
pro();
break;
case 3:
clrscr();
q();
pro();
break;
case 4:
exit(0);
break;
default:
pro();
break;
}
}
void main()
{
pro();
}
