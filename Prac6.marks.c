//Practical 6
//result preparation
#include<stdio.h>
#include<conio.h>
void main()
{
//variable section
int msub1,msub2,msub3,per,total;
char name[20];

//input section
printf("Enter name of the student: ");
scanf("%s",&name);
printf("Enter three subject marks: \n");
printf("\n \t subject 1: ");
scanf("%d",&msub1);
printf(" \t subject 2: ");
scanf("%d",&msub2);
printf(" \t subject 3: ");
scanf("%d",&msub3);
getch();
//processing section
if(msub1<0||msub1>100||msub2<0||msub2>100||msub3<0||msub3>100)
{
printf("INVALID DATA \n");
getch();
exit(1);
//terminate program
}// end of if block
else
{
if(msub1>=35&&msub2>=35&&msub3>=35)
printf("\n STATUS : PASS \n");
else
printf("\n STATUS : FAIL \n");
total=msub1+msub2+msub3;
per=(total*100)/300;
printf("\n\n\t\t\t RESULT: \n\n");
printf("\t\t NAME: %s \n",name);
printf("\t\t_______________________\n");
printf("\t\t sub1 \t sub2 \t sub3\n");
printf("\t\t_______________________\n");
printf("\t\t%d\t%d\t%d\n",msub1,msub2,msub3);
printf("\t\t_______________________\n");
printf("\n\t\t\t total=%d\n",total);
printf("\t\t\t percentage=%d\n",per);
if(per>=0&&per<40)
printf("\t\t\t grade D");
else if(per>=40&&per<50)
printf("\t\t\t grade C");
else if(per>=50&&per<60)
printf("\t\t\t grade B");
else if(per>=60&&per<75)
printf("\t\t\t grade A");
else if(per>=75&&per<=100)
printf("\t\t\t grade O");
}
//end of else block
getch();
}
//end of main