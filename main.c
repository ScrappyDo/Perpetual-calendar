
#include <stdio.h>

int d, m, y, id, idm, idy, day, idc, p1;
int main()
{
    char *date[] = {"Saturday", "Sunday", "Monday","Tuesday","Wednesday","Thursday", "Friday"};
    printf("To learn day of the week, enter the date in the format DD MM YYYY\n");
    scanf("%d %d %d", &d, &m, &y);          /*Input values*/
       if (m == 1||m == 10)                 /*The calculation according to the formula*/
       {
           idm = 1;
       }
        if (m == 5)
        {
            idm = 2;
        }
        if (m == 8)
        {
            idm = 3;
        }
        if (m == 2||m == 3 ||m == 11)
        {
            idm = 4;
        }
        if (m == 6)
        {
            idm = 5;
        }
        if (m == 12 || m == 9)
        {
            idm = 6;
        }
        if (m == 4||m == 7)
        {
            idm = 0;
        }
    
        int i;
        idc = 6;
        for (i = 1;i != y/100+1;i++)
        {
            idc = idc - 2;
            if (idc < 0)
            {
                idc = 6;
            }
        }
    
        
    
    
    
    
        idy = (idc + y%100 + (y%100)/4)%7;
    
    
    
    if(y%4 == 0)            /*Eliminate the error due to leap year*/
                             
        {
            if(y%100 != 0)
            {
                id = 1;
            }
            else if(y%100 == 0 && y%400 == 0)
            {
                id = 1;
            }
            else
                id =0;
        }
        else
            id = 0;
    
    
    
        p1 = 0;
        if (id == 1 && m < 3)
            {
                p1 = 1;
            }
    if (d<32 && m < 13 && m > 0 && y > 1582 )           /*The output is in compliance with all conditions*/
    {
         day = ((d + idy + idm)%7) + p1;
        printf("%s\n",date[day]);
    }
    else printf("It is not possible to calculate for thit date!\n");
   
}
