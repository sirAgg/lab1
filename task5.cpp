#include <iostream>
#if _WIN32
    #include <conio.h>
#endif

using namespace std;

int main()
{
    // bit that determens if a ascii letter is small or big
    const char LETTER_SIZE_BIT = 1 << 5; 

    const int STRING_SIZE = 100;

    char name[STRING_SIZE];
    int age;
    char gender; // male true, female false
    char address[STRING_SIZE];
    char married;
    float height;

    char ans;

    // name
    printf("What's your name: ");
    scanf("%s", name);
 
    // age
    printf("What's your age: ");
    scanf("%d", &age);
    
    // man or woman
    printf("Are you a man or woman? (M/w): ");
    scanf(" %c", &ans);
    gender = !((ans | LETTER_SIZE_BIT) == 'w');
    while(getchar() != '\n');
    
    // address
    printf("What's your address: ");
    scanf("%s", address);
    
    // married
    printf("Are you married? (Y/n): ");
    scanf(" %c", &ans);
    married = !((ans | LETTER_SIZE_BIT) == 'n');
    while(getchar() != '\n');

    // address
    printf("What's your height: ");
    scanf("%f", &height);


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
