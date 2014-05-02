#include <stdio.h>
char *cp(char *s,char *s1)
{
    char *ps1=s;
    while(*s1!='\0')
    { 
       *ps1++=*s1++;
    }
    *ps1=0;   
    return s;
}
main()
{
    char s[30],s1[30];
    printf("Input a string:\n");
    gets(s);     
    cp(s1,s);
    puts(s);
    puts(s1);
}
