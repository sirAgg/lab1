#include <iostream> 
#if _WIN32
    #include <conio.h>
#endif

int main()
{
    // bit that determens if a ascii letter is small or big
    const char LETTER_SIZE_BIT = 1 << 5; 

    char input_char;
    char start_char;

    printf("Enter letter or number: ");
    scanf(" %c", &input_char);

    // numbers
    if ( '1' <= input_char && input_char <= '9' )
    {
        start_char = '1';
        
        for (char i = 0; i<=input_char-start_char; i++)
        {
            for (char j = 0; j<=i; j++)
                printf("%c", start_char+j);
            printf("\n");
        }
    }
    // both capital and small letters
    else if ( 'a' <= (input_char | LETTER_SIZE_BIT) && (input_char | LETTER_SIZE_BIT) <= 'z' )
    {
        start_char = 'A' | (input_char & LETTER_SIZE_BIT);

        for (char i = 0; i<=input_char-start_char; i++)
        {
            for (char j = 0; j<=i; j++)
                printf("%c", start_char+i);
            printf("\n");
        }
    }
    else{
        printf("Error! Invalid input.\n");
    }

    
#if _WIN32
	getch();
#endif
    return 0;
}
