/*
    * program to get and set the current system date in windows
    * Compiler : turboC
*/
 
#include <stdio.h>
#include <dos.h>
 
int main()
{
    char choice;
    struct dosdate_t date; /*predefine structure to get date*/
    _dos_getdate(&date);
 
    printf("\nCurrent date is : %02d -%02d -%02d",date.day,date.month,date.year);
    printf("\nWant to change date (Y: yes):");
    choice=getchar();
 
    if(choice=='Y'||choice=='y'){
        printf("Enter new date :\n");
        printf("Enter day  :"); scanf("%d",&date.day);
        printf("Enter month:"); scanf("%d",&date.month);
        printf("Enter year :"); scanf("%d",&date.year);
 
        _dos_setdate(&date);
        printf("\nDate changed successfully.");
    }
 
    return 0;
}
