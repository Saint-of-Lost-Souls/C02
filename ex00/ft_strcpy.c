/* #include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
        memset(dest, '\0', sizeof(src));
        strcpy(dest, src);
        return dest;
}


int main ()
{
        char src[] = "Some bullshit string";
        char dest[sizeof(src)];

        ft_strcpy(dest, src);

        printf("Final copied string : %s\n", dest);

        return(0);
} */
#include<stdio.h>
#include<string.h>
 
int main ()
{
    char str1[]="Hello Geeks!";
    char str2[] = "GeeksforGeeks";
    char str3[40];
    char str4[40];
    char str5[] = "GfG";
     
    strcpy(str2, str1); // dest, src = put str1 into str2
    strcpy(str3, "Copy successful"); // write this into str3
    strcpy(str4, str5); // put str5 into str 4
    printf("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n", str1, str2, str3, str4);
    return 0;
}
