
//AD CODES
//ENTER CHARACTER AND TO CHEAK HIS TYPE
//like capital,small letter,number,special symbol
#include<stdio.h>
void main()
{
    char ch;
    printf("type any char: ");
    scanf("%c",&ch);
    if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
    {
        printf("%c is a letter \n",ch);
    }
    else if((ch>='0')&&(ch<='9'))
    {
        printf("%c is number\n",ch);
    }
    else
    {
        printf("%c is symbol\n",ch);
    }
}
