#include<stdio.h>
main()
{
float kan,eng,hindi,maths,science, sst,avmar;
printf("Letter Grading\n");
printf("SSLC Marks Grading\n");
printf("Enter the marks for Kannada:");
scanf("%f",&kan);
printf("enter the marks for English:");
scanf("%f",&eng);
printf("enter the marks for Hindi:");
scanf("%f",&hindi);
printf("enter the marks for Maths");
scanf("%f",&maths);
printf("enter the marks for Science:");
scanf("%f",&science);
printf("enter the marks for Social Science:");
scanf("%f",&sst);
avmar=(kan+eng+hindi+maths+science+sst)/6.25;
printf("the average marks are=%f\n",avmar);
if((avmar<35)&&(avmar>0))
printf("fail");
else if((avmar<=40)&&(avmar>35))
printf("Grade C");
else if((avmar<=50)&&(avmar>40))
printf("Grade C+");
else if((avmar<=60)&&(avmar>50))
printf("Grade B");
else if((avmar<=70)&&(avmar>60))
printf("Grade B+");
else if((avmar<=80)&&(avmar>70))
printf("Grade A");
else if((avmar<=100)&&(avmar>80))
printf("Grade A+");
}
