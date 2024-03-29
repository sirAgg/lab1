#include <iostream>
#include <string>
#if _WIN32
    #include <conio.h>
#endif

using namespace std;

int main()
{
    // bit that determens if a ascii letter is small or big
    const char LETTER_SIZE_BIT = 1 << 5; 

    string name;
    int age;
    bool gender; // male true, female false
    string address;
    bool married;
    float height;

    string ans;

    // name
    cout << "What's your name: ";
    cin >> name;

    // age
    cout << "What's your age: ";
    cin >> age;
    
    // man or woman
    cout << "Are you a man or woman? (M/w): ";
    cin >> ans;
    gender = !((ans[0] | LETTER_SIZE_BIT) == 'w');
    
    // address
    cout << "What's your address: ";
    cin >> address;
    
    // married
    cout << "Are you married? (Y/n): ";
    cin >> ans;
    married = !((ans[0] | LETTER_SIZE_BIT) == 'n');

    // address
    cout << "What's your height: ";
    cin >> height;


    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << ((gender)?"Man":"Woman") << endl;
    cout << "Address: " << address << endl;
    cout << "Married: " << ((married)?"Yes":"No") << endl;
    cout << "Height: " << height << "m" << endl;
	
#if _WIN32
	getch();
#endif
    return 0;
}
