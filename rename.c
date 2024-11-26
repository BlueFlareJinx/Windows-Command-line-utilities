#include<stdio.h>

int main(void)
/// using this program change the file name 
{
    char old_name[100], new_name[100];
   
    printf("Enter the old file name: ");
    scanf("%s",old_name);

    printf("Enter the new file name: ");
    scanf("%s",new_name); 

    if(rename(old_name, new_name) == 0)
    {
        printf("file renamed successfully");
    }
    else
    {
        printf("Error : unable to rename the file");
    }

    return(0);

}