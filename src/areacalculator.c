#include <stdio.h>
#include <Windows.h>

void calculateareaoftriangle()
{
    printf("What's the base? ");

    int base = 0;
    scanf("%d", &base);

    printf("What's the height? ");

    int height = 0;
    scanf("%d", &height);

    int result = (base * height) / 2;

    printf("Result: %d centimeters squared.", result);
}

void calculateareaofrectangle()
{

}

void calculateareaofsquare()
{

}

void getoptionselection()
{
    printf("Select an option: ");

    int selectedIndex = 1;
    scanf("%d", &selectedIndex);

    switch (selectedIndex) 
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        calculateareaoftriangle();
        break;
    }
}

void showoptions()
{
    printf("1 - Square\n");
    printf("2 - Rectangle\n");
    printf("3 - Triangle\n\n");

    getoptionselection();
}

void setconsolecolour(int colourCode)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(consoleHandle, colourCode);
}

void setupconsole()
{
    SetConsoleTitle("Area Calculator");
    setconsolecolour(15);

    showoptions();
}

int main()
{
    setupconsole();
    return 0;
}