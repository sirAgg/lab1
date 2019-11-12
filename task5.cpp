#include <stdio.h>
#if _WIN32
    #include <conio.h>
#endif

// for converting number macro to string macro
#define STR(s) _STR(s)
#define _STR(s) #s


#define STRING_SIZE 99

int main()
{
    // bit that determens if a ascii letter is small or big
    const char LETTER_SIZE_BIT = 1 << 5; 

    char name[STRING_SIZE+1];
    int age;
    char gender; // male true, female false
    char address[STRING_SIZE+1];
    char married;
    float height;

    char ans;

    // name
    printf("What's your name: ");
    scanf(" %" STR(STRING_SIZE) "s", name);
    while(getchar() != '\n');
 
    // age
    printf("What's your age: ");
    scanf(" %d", &age);
    while(getchar() != '\n');
    
    // man or woman
    printf("Are you a man or woman? (M/w): ");
    scanf(" %c", &ans);
    gender = !((ans | LETTER_SIZE_BIT) == 'w');
    while(getchar() != '\n');
    
    // address
    printf("What's your address: ");
    scanf(" %" STR(STRING_SIZE) "s", address);
    while(getchar() != '\n');
    
    // married
    printf("Are you married? (Y/n): ");
    scanf(" %c", &ans);
    married = !((ans | LETTER_SIZE_BIT) == 'n');
    while(getchar() != '\n');

    // address
    printf("What's your height: ");
    scanf(" %f", &height);
    while(getchar() != '\n');

    printf("\nName: %s\n",name);
    printf("Age: %d\n",age);
    printf("Gender: %s\n", (gender? "Man":"Woman"));
    printf("Address: %s\n", address);
    printf("Married: %s\n", (married? "Yes":"No"));
    printf("Height: %.2fm\n", height);

#if _WIN32
	getch();
#endif
    return 0;
}
