//Given Date Month and the Year Is Correct or Not Using If-Else

 
#include <stdio.h>
 
int main()
{
    int date,month,year;
     
    printf("Enter date (DD/MM/YYYY ): ");
    scanf("%d/%d/%d",&date,&month,&year);
     
    //check year
    if(year>=0)
    {
        //check month
        if(month>=1 && month<=12)
        {
            //check days
            if((date>=1 && date<=31) && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12))
                printf("entered date is correct\n");
            else if((date>=1 && date<=30) && (month==4 || month==6 || month==9 || month==11))
                printf("entered date is correct\n");
            else if((date>=1 && date<=28) && (month==2))
                printf("entered date is correct\n");
            else if(date==29 && month==2 && (year%400==0 ||(year%4==0 && year%100!=0)))
                printf("entered date is not correct\n");
            else
                printf("entered date is not correct \n");
        }
        else
        {
            printf("entered month is not correct.\n");
        }
    }
    else
    {
        printf("entered year is not correct\n");
    }
 
    return 0;    
}
