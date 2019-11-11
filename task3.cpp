#include <iostream>
#if _WIN32
    #include <conio.h>
#endif

int main()
{
    const int N = 7;

    std::cout << "\nWith for" << std::endl;
    for(int i=0; i<N; i++)
        std::cout << "Hello World!" << std::endl;


    std::cout << "\nWith while" << std::endl;
    int i = 0;
    while (i<N)
    {
        std::cout << "Hello World!" << std::endl;
        i++;
    }


    std::cout << "\nWith do-while" << std::endl;
    i = 0;
    do 
    {
        std::cout << "Hello World!" << std::endl;
        i++;
    } while (i<=N);


#if _WIN32
	getch();
#endif
    return 0;
}
