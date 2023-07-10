#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    printf("%c\n", ch);
    
    scanf("\n");
    scanf("%[^\n]%*c", s);
    /* 
        input line
        ^\n stands for taking input until a newline isn't encountered
        %*c read newline * mean that this newline character is discarded
        
        use scanf("\n"); before last statement then use this scanf to prevent the statement to read a newline character \n from the previous line
    */
    printf("%s\n", s);
    
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%s", sen);
    
    return 0;
}
